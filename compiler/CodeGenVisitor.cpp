#include "CodeGenVisitor.h"

antlrcpp::Any CodeGenVisitor::visitProg(ifccParser::ProgContext *ctx)
{
    std::cout << ".globl main\n";
    std::cout << " main: \n";
    cg.gen_asm_prolog();
    this->visitChildren(ctx);
    cg.gen_asm_epilog();
    std::cout << "\tret\n";
    return 0;
}

antlrcpp::Any CodeGenVisitor::visitExpression(ifccParser::ExpressionContext *ctx)
{
    return visitAddExpression(ctx->addExpression());
}

antlrcpp::Any CodeGenVisitor::visitAddExpression(ifccParser::AddExpressionContext *ctx)
{
    auto left_expression = visitMultExpression(ctx->multExpression()).as<std::string>();
    if (ctx->addOperation().size() > 0)
    {

        int sum;
        if (symbols_value.find(left_expression) == symbols_value.end())
        {
            sum = std::stoi(left_expression);
        }
        else
        {
            sum = symbols_value[left_expression];
        }

        for (int i = 0; i < ctx->addOperation().size(); i++)
        {
            auto add_expression = visitMultExpression(ctx->addOperation(i)->multExpression()).as<std::string>();
            int right_sum;
            if (symbols_value.find(add_expression) == symbols_value.end())
            {
                right_sum = std::stoi(add_expression);
            }
            else
            {
                right_sum = symbols_value[add_expression];
            }

            if (ctx->addOperation(i)->PLUS() != nullptr)
            {
                sum += right_sum;
            }
            else if (ctx->addOperation(i)->MINUS() != nullptr)
            {
                sum -= right_sum;
            }
        }
        return std::to_string(sum);
    }
    return left_expression;
}

antlrcpp::Any CodeGenVisitor::visitMultExpression(ifccParser::MultExpressionContext *ctx)
{

    auto left_expression = visitUnaryExpression(ctx->unaryExpression()).as<std::string>();
    if (ctx->multOperation().size() > 0)
    {

        int prod;
        if (symbols_value.find(left_expression) == symbols_value.end())
        {
            prod = std::stoi(left_expression);
        }
        else
        {
            prod = symbols_value[left_expression];
        }

        for (int i = 0; i < ctx->multOperation().size(); i++)
        {
            auto mult_expression = visitUnaryExpression(ctx->multOperation(i)->unaryExpression()).as<std::string>();
            int right_prod;
            if (symbols_value.find(mult_expression) == symbols_value.end())
            {
                right_prod = std::stoi(mult_expression);
            }
            else
            {
                right_prod = symbols_value[mult_expression];
            }

            if (ctx->multOperation(i)->MULTIPLY() != nullptr)
            {
                prod *= right_prod;
            }
            else if (ctx->multOperation(i)->DIVIDE() != nullptr)
            {
                prod /= right_prod;
            }
            else if (ctx->multOperation(i)->MOD() != nullptr)
            {
                prod = prod % right_prod;
            }
        }
        return std::to_string(prod);
    }
    return left_expression;
}

antlrcpp::Any CodeGenVisitor::visitUnaryExpression(ifccParser::UnaryExpressionContext *ctx)
{
    auto primary_expression = visitPrimaryExpression(ctx->primaryExpression());
    if (ctx->INCREMENT() != nullptr)
    {
        cg.gen_asm_add_const(1, symbols[primary_expression]);
        symbols_value[primary_expression] = symbols_value[primary_expression] + 1;
    }
    else if (ctx->DECREMENT() != nullptr)
    {
        cg.gen_asm_sub_const(1, symbols[primary_expression]);
        symbols_value[primary_expression] = symbols_value[primary_expression] - 1;
    }
    else if (ctx->MINUS() != nullptr)
    {
        cg.gen_asm_neg(symbols[primary_expression]);
        symbols_value[primary_expression] = -symbols_value[primary_expression];
    }
    return primary_expression;
}

antlrcpp::Any CodeGenVisitor::visitPrimaryExpression(ifccParser::PrimaryExpressionContext *ctx)
{
    if (ctx->VAR() != nullptr)
    {
        return ctx->VAR()->getText();
    }
    else if (ctx->CONST() != nullptr)
    {
        return ctx->CONST()->getText();
    }
    else if (ctx->expression() != nullptr)
    {
        return visitExpression(ctx->expression());
    }
    return nullptr;
}

antlrcpp::Any CodeGenVisitor::visitAffectation(ifccParser::AffectationContext *ctx)
{
    std::string variable = ctx->VAR()->getText();
    std::string affected = visitExpression((ctx->expression())).as<std::string>();
    if (symbols.find(affected) != symbols.end())
    {
        symbols_value[variable] = symbols_value[affected];
        cg.gen_asm_aff_var(symbols[affected], symbols[variable]);
    }
    else
    {
        symbols_value[variable] = std::stoi(affected);
        cg.gen_asm_aff_const(affected, symbols[variable]);
    }
    return nullptr;
}

antlrcpp::Any CodeGenVisitor::visitReturn_stmt(ifccParser::Return_stmtContext *ctx)
{
    std::string returned = visitExpression((ctx->expression())).as<std::string>();
    if (symbols.find(returned) == symbols.end())
    {
        cg.gen_asm_return_const(returned);
    }
    else
    {
        cg.gen_asm_return_var(symbols[returned]);
    }
    return nullptr;
}

antlrcpp::Any CodeGenVisitor::visitDeclaration(ifccParser::DeclarationContext *ctx)
{
    std::string type = ctx->TYPE()->getText();
    if (ctx->affectation() != nullptr)
    {
        visitAffectation(ctx->affectation());
    }

    return nullptr;
}

void CodeGenVisitor::setSymbols(std::map<std::string, int> symbols)
{
    this->symbols = symbols;
}
