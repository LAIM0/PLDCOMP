#include "CFGVisitor.h"
#include <iostream>

using namespace std;

void CFGVisitor::setSymbols(std::map<std::string, int> symbols)
{
    this->symbols = symbols;
}
antlrcpp::Any CFGVisitor::visitProg(ifccParser::ProgContext *ctx)
{
    CFG *cfg = new CFG("prog");
    currentCFG = cfg;
    BasicBlock *bbepilogue = new BasicBlock(currentCFG, "");
    BasicBlock *bbmain = new BasicBlock(currentCFG, "main");
    bbepilogue->exit_true = nullptr;
    bbmain->exit_true = bbepilogue;
    currentCFG->add_bb(bbmain);
    currentCFG->current_bb = bbmain;
    this->visitChildren(ctx);
    currentCFG->add_bb(bbepilogue);
    currentCFG->gen_asm(cout);
    return nullptr;
}

antlrcpp::Any CFGVisitor::visitReturn_stmt(ifccParser::Return_stmtContext *ctx)
{
    auto ret_expr = visit(ctx->expression()).as<string>();
    std::string source;
    if (symbols.find(ret_expr) == symbols.end())
    {
        source = "$" + ret_expr;
    }
    else
    {
        source = "-" + to_string(symbols[ret_expr]) + "(%rbp)";
    }
    Instr_return *instr = new Instr_return(currentCFG->current_bb, _INT, source);
    currentCFG->current_bb->add_IRInstr(instr);
    return 0;
}

antlrcpp::Any CFGVisitor::visitAffectation(ifccParser::AffectationContext *ctx)
{
    std::string var = ctx->VAR()->getText();
    auto ret_expr = visit(ctx->expression()).as<string>();
    Instr_affectation *instr_2 = new Instr_affectation(currentCFG->current_bb, _INT, "!reg", var);
    currentCFG->current_bb->add_IRInstr(instr_1);
   

    std::string destination = "-" + to_string(symbols[var]) + "(%rbp)";
    if (symbols.find(ret_expr) != symbols.end())
    {
        std::string source = "-" + to_string(symbols[ret_expr]) + "(%rbp)";
        std::string temporary_var = "%eax";
        Instr_affectation *instr_1 = new Instr_affectation(currentCFG->current_bb, _INT, source, temporary_var);
        Instr_affectation *instr_2 = new Instr_affectation(currentCFG->current_bb, _INT, temporary_var, destination);
        currentCFG->current_bb->add_IRInstr(instr_1);
        currentCFG->current_bb->add_IRInstr(instr_2);
        symbols_value[var] = symbols_value[ret_expr];
    }
    else if (temp_vars.find(ret_expr) != temp_vars.end())
    {
        Instr_affectation *instr = new Instr_affectation(currentCFG->current_bb, _INT, ret_expr, destination);
        currentCFG->current_bb->add_IRInstr(instr);
        symbols_value[var] = temp_vars[ret_expr];
        temp_vars.erase(ret_expr);
    }
    else
    {
        string source = "$" + ret_expr;
        Instr_affectation *instr = new Instr_affectation(currentCFG->current_bb, _INT, source, destination);
        currentCFG->current_bb->add_IRInstr(instr);
        symbols_value[var] = stoi(ret_expr);
    }

    return nullptr;
}

antlrcpp::Any CFGVisitor::visitConst(ifccParser::ConstContext *ctx)
{
    reg = ctx->constante->getText();
    return 0;
}

antlrcpp::Any CFGVisitor::visitVar(ifccParser::VarContext *ctx)
{
    reg = ctx->VAR()->getText();
    Instr_affectation *instr_1 = new Instr_affectation(currentCFG->current_bb, _INT, source, REG);
    return 0;
}
antlrcpp::Any CFGVisitor::visitAdd(ifccParser::AddContext *ctx)
{
    visit(ctx->expression(0));
    auto right_expr = visit(ctx->expression(1));
    if (ctx->addOperator()->PLUS() != nullptr)
    {
        if (symbols.find(left_expr) == symbols.end() && symbols.find(right_expr) == symbols.end())
        {
            int sum = stoi(left_expr) + stoi(right_expr);
            return to_string(sum);
        }
        else if (symbols.find(left_expr) == symbols.end())
        {
            int sum = stoi(left_expr) + symbols_value[right_expr];
            string source = "-" + to_string(symbols[right_expr]) + "(%rbp)";
            string tmp_var = "%eax";
            string added = "$" + left_expr;
            Instr_affectation *instr_1 = new Instr_affectation(currentCFG->current_bb, _INT, source, tmp_var);
            Instr_add *instr_2 = new Instr_add(currentCFG->current_bb, _INT, added, tmp_var);
            currentCFG->current_bb->add_IRInstr(instr_1);
            currentCFG->current_bb->add_IRInstr(instr_2);
            temp_vars[tmp_var] = sum;
            return tmp_var;
        }
        else if (symbols.find(right_expr) == symbols.end())
        {
            int sum = stoi(right_expr) + symbols_value[left_expr];
            string source = "-" + to_string(symbols[left_expr]) + "(%rbp)";
            string tmp_var = "%eax";
            string added = "$" + right_expr;
            Instr_affectation *instr_1 = new Instr_affectation(currentCFG->current_bb, _INT, source, tmp_var);
            Instr_add *instr_2 = new Instr_add(currentCFG->current_bb, _INT, added, tmp_var);

            currentCFG->current_bb->add_IRInstr(instr_1);
            currentCFG->current_bb->add_IRInstr(instr_2);
            temp_vars[tmp_var] = sum;
            return tmp_var;
        } else {
            int sum = symbols_value[right_expr] + symbols_value[left_expr];
            string source_1 = "-" + to_string(symbols[right_expr]) + "(%rbp)";
            string tmp_var_1 = "%edx";
            string source_2 = "-" + to_string(symbols[left_expr]) + "(%rbp)";
            string tmp_var_2 = "%eax";
            Instr_affectation *instr_1 = new Instr_affectation(currentCFG->current_bb, _INT, source_1, tmp_var_1);
            Instr_affectation *instr_2 = new Instr_affectation(currentCFG->current_bb, _INT, source_2, tmp_var_2);
            Instr_add * instr_add = new Instr_add(currentCFG->current_bb, _INT, tmp_var_2, tmp_var_1);
            currentCFG->current_bb->add_IRInstr(instr_1);
            currentCFG->current_bb->add_IRInstr(instr_2);
            currentCFG->current_bb->add_IRInstr(instr_add);
            temp_vars[tmp_var_1] = sum;
            return tmp_var_1;
        }
    }
    return nullptr;
}

antlrcpp::Any CFGVisitor::visitUnary(ifccParser::UnaryContext *ctx)
{
    auto expr = visit(ctx->expression()).as<string>();
    if (ctx->unaryOperator()->INCREMENT() != nullptr)
    {
        if (symbols.find(expr) == symbols.end())
        {
            return to_string(stoi(expr)+1);
        }
        else
        {
            string source = "-" + to_string(symbols[expr]) + "(%rbp)";
            string added = "$1";
            Instr_add *instr = new Instr_add(currentCFG->current_bb, _INT, added, source);
            currentCFG->current_bb->add_IRInstr(instr);
            symbols_value[expr] +=1;
            return expr;
        }
    }
    else if (ctx->unaryOperator()->DECREMENT() != nullptr)
    {
    }
    else if (ctx->unaryOperator()->MINUS() != nullptr)
    {
        if (symbols.find(expr) == symbols.end())
        {
            return stoi(expr) < 0 ? expr : "-" + expr;
        }
        else
        {
            string source = "-" + to_string(symbols[expr]) + "(%rbp)";
            string temporary_var = "%eax";
            Instr_affectation *instr_1 = new Instr_affectation(currentCFG->current_bb, _INT, source, temporary_var);
            Instr_minus *instr_2 = new Instr_minus(currentCFG->current_bb, _INT, temporary_var);
            currentCFG->current_bb->add_IRInstr(instr_1);
            currentCFG->current_bb->add_IRInstr(instr_2);
            temp_vars[temporary_var] = -symbols_value[expr];
            return temporary_var;
        }
    }
    else if (ctx->unaryOperator()->PLUS() != nullptr)
    {
        return visit(ctx->expression());
    }
    else if (ctx->unaryOperator()->NOT() != nullptr)
    {
    }
    return nullptr;
}
