#include "VariableVisitor.h"

antlrcpp::Any VariableVisitor::visitProg(ifccParser::ProgContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any VariableVisitor::visitExpression(ifccParser::ExpressionContext *ctx)
{
    return visitAddExpression(ctx->addExpression());
}

antlrcpp::Any VariableVisitor::visitAddExpression(ifccParser::AddExpressionContext *ctx)
{
    auto left_expression = visitMultExpression(ctx->multExpression());
    for(int i = 0 ; i < ctx->addOperation().size(); i++){
        visitMultExpression(ctx->addOperation(i)->multExpression());
    }
    return left_expression;
}

antlrcpp::Any VariableVisitor::visitMultExpression(ifccParser::MultExpressionContext *ctx)
{
    auto left_expression = visitUnaryExpression(ctx->unaryExpression());
    for(int i = 0 ; i < ctx->multOperation().size(); i++){
        visitUnaryExpression(ctx->multOperation(i)->unaryExpression());
    }
    return left_expression;
}

antlrcpp::Any VariableVisitor::visitUnaryExpression(ifccParser::UnaryExpressionContext *ctx)
{
    auto primary_expression = (visitPrimaryExpression(ctx->primaryExpression()));
    return primary_expression;
}

antlrcpp::Any VariableVisitor::visitPrimaryExpression(ifccParser::PrimaryExpressionContext *ctx)
{
    if (ctx->VAR() != nullptr)
    {
        auto variable = ctx->VAR()->getText();
        if (!checkVariableDeclared(variable))
        {
            std::cerr << "Variable " << variable << " has not been declared" << std::endl;
            exit(1);
        }
        if(usedVariables.find(variable) == usedVariables.end()) usedVariables.insert(variable);
        return variable;
    }
    else if (ctx->CONST() != nullptr)
    {
        return ctx->CONST()->getText();
    }
    else if (ctx->expression() != nullptr)
    {
        return visitExpression(ctx->expression());
    }
    return visitChildren(ctx);
}

antlrcpp::Any VariableVisitor::visitAffectation(ifccParser::AffectationContext *ctx)
{
    std::string variable = ctx->VAR()->getText();
    if (!checkVariableDeclared(variable))
    {
        std::cerr << "Variable " << variable << " has not been declared" << std::endl;
        exit(1);
    }
    else
    {
        if(declaredVariables.find(variable) != declaredVariables.end()){
            usedVariables.insert(variable);
        }
        std::string affected = (visitExpression((ctx->expression()))).as<std::string>();
        if (!affected.empty() && declaredVariables.find(affected) != declaredVariables.end())
        {
            usedVariables.insert(affected);
        }
    }
    return 0;
}

antlrcpp::Any VariableVisitor::visitReturn_stmt(ifccParser::Return_stmtContext *ctx)
{

    std::string returned = (visitExpression((ctx->expression()))).as<std::string>();
    if (!returned.empty() && declaredVariables.find(returned) != declaredVariables.end())
    {
        usedVariables.insert(returned);
    }
    return 0;
}

antlrcpp::Any VariableVisitor::visitDeclaration(ifccParser::DeclarationContext *ctx)
{
    std::string type = ctx->TYPE()->getText();
    std::string variable;
    if (ctx->VAR() != nullptr)
    {
        variable = ctx->VAR()->getText();
    } else if(ctx->affectation() != nullptr){
        variable = ctx->affectation()->VAR()->getText();
    }
    if (checkVariableDeclared(variable))
    {
        std::cerr << "Variable " << variable << " has already been declared : line " << ctx->affectation()->VAR()->getSymbol()->getLine() << std::endl;
        exit(1);
    }
    declaredVariables.insert(variable);

    if (ctx->affectation() != nullptr)
    {
        visitAffectation(ctx->affectation());
    }
  
    return 0;
}

bool VariableVisitor::checkVariableDeclared(const std::string &variable)
{
    if (declaredVariables.find(variable) == declaredVariables.end())
    {
        return false;
    }
    else
    {
        return true;
    }
}

std::map<std::string, int> VariableVisitor::getSymbols()
{
    int number_of_symbols = (int)usedVariables.size();
    int index = number_of_symbols * 4;
    std::map<std::string, int> symbols;
    for (auto it = usedVariables.begin(); it != usedVariables.end(); ++it)
    {
        symbols[*it] = index;
        index -= 4;
    }
    return symbols;
}
