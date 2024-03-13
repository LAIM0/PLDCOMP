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
    currentCFG->assign_var_index();
    currentCFG->gen_asm(cout);
    return nullptr;
}

antlrcpp::Any CFGVisitor::visitReturn_stmt(ifccParser::Return_stmtContext *ctx)
{
    visit(ctx->expression());
    return 0;
}

antlrcpp::Any CFGVisitor::visitDeclaration(ifccParser::DeclarationContext *ctx)
{
    if (ctx->VAR() != nullptr)
    {
        currentCFG->add_to_symbol_table(ctx->VAR()->getText(), _INT);
    }
    else
    {
        currentCFG->add_to_symbol_table(ctx->affectation()->VAR()->getText(), _INT);
    }
    visitChildren(ctx);
    return 0;
}
antlrcpp::Any CFGVisitor::visitAffectation(ifccParser::AffectationContext *ctx)
{
    std::string var = ctx->VAR()->getText();
    visit(ctx->expression());
    Instr_copy *instr = new Instr_copy(currentCFG->current_bb, _INT, "!reg", var);
    currentCFG->current_bb->add_IRInstr(instr);
    return 0;
}

antlrcpp::Any CFGVisitor::visitConst(ifccParser::ConstContext *ctx)
{

    Instr_ldconst *instr = new Instr_ldconst(currentCFG->current_bb, _INT, "!reg", ctx->constante()->getText());
    currentCFG->current_bb->add_IRInstr(instr);
    return 0;
}

antlrcpp::Any CFGVisitor::visitVar(ifccParser::VarContext *ctx)
{
    Instr_copy *instr = new Instr_copy(currentCFG->current_bb, _INT, ctx->VAR()->getText(), "!reg");
    currentCFG->current_bb->add_IRInstr(instr);
    return 0;
}

antlrcpp::Any CFGVisitor::visitAdd(ifccParser::AddContext *ctx)
{
    visit(ctx->expression(1));
    string right_tmp = currentCFG->create_new_tempvar(_INT);
    Instr_copy *instr_right_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", right_tmp);
    currentCFG->current_bb->add_IRInstr(instr_right_copy);
    visit(ctx->expression(0));
    if (ctx->addOperator()->PLUS() != nullptr)
    {
        Instr_add *instr_add = new Instr_add(currentCFG->current_bb, _INT, right_tmp, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_add);
    }
    else if (ctx->addOperator()->MINUS() != nullptr)
    {
        Instr_sub *instr_sub = new Instr_sub(currentCFG->current_bb, _INT, right_tmp, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_sub);
    }
    return 0;
}

antlrcpp::Any CFGVisitor::visitMult(ifccParser::MultContext *ctx)
{
    visit(ctx->expression(1));
    string right_tmp = currentCFG->create_new_tempvar(_INT);
    Instr_copy *instr_right_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", right_tmp);
    currentCFG->current_bb->add_IRInstr(instr_right_copy);
    visit(ctx->expression(0));
    if (ctx->multOperator()->MULTIPLY() != nullptr)
    {
        Instr_mult *instr_mult = new Instr_mult(currentCFG->current_bb, _INT, right_tmp, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_mult);
    }
    // else if (ctx->addOperator()->MINUS() != nullptr)
    // {
    //     Instr_sub *instr_sub = new Instr_sub(currentCFG->current_bb, _INT, right_tmp, "!reg");
    //     currentCFG->current_bb->add_IRInstr(instr_sub);
    // }
    return 0;
}
