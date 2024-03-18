#include "CFGVisitor.h"
#include <iostream>

using namespace std;

void CFGVisitor::setSymbols(std::map<std::string, int> symbols)
{
    this->symbols = symbols;
}
antlrcpp::Any CFGVisitor::visitProg(ifccParser::ProgContext *ctx)
{
    CFG *cfg = new CFG("prog", this->target_architecture);
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
        if (currentCFG->get_var_type(ctx->VAR()->getText()) != 0)
        {
            std::cerr << "Variable " << ctx->VAR()->getText() << " has already been declared" << std::endl;
            exit(1);
        }
        currentCFG->add_to_symbol_table(ctx->VAR()->getText(), _INT);
    }
    else
    {
        if (currentCFG->get_var_type(ctx->affectation()->VAR()->getText()) != 0)
        {
            std::cerr << "Variable " << ctx->affectation()->VAR()->getText() << " has already been declared" << std::endl;
            exit(1);
        }
        currentCFG->add_to_symbol_table(ctx->affectation()->VAR()->getText(), _INT);
    }
    visitChildren(ctx);
    return 0;
}
antlrcpp::Any CFGVisitor::visitAffectation(ifccParser::AffectationContext *ctx)
{
    std::string var = ctx->VAR()->getText();
    if (currentCFG->get_var_type(ctx->VAR()->getText()) == 0)
    {
        std::cerr << "Variable " << ctx->VAR()->getText() << " has not been declared" << std::endl;
        exit(1);
    }
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
    if (currentCFG->get_var_type(ctx->VAR()->getText()) == 0)
    {
        std::cerr << "Variable " << ctx->VAR()->getText() << " has not been declared" << std::endl;
        exit(1);
    }
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
    else if (ctx->multOperator()->DIVIDE() != nullptr)
    {
        Instr_div *instr_div = new Instr_div(currentCFG->current_bb, _INT, right_tmp);
        currentCFG->current_bb->add_IRInstr(instr_div);
    }
    else if (ctx->multOperator()->MOD() != nullptr)
    {
        Instr_div *instr_div = new Instr_div(currentCFG->current_bb, _INT, right_tmp);
        Instr_copy *instr_mod = new Instr_copy(currentCFG->current_bb, _INT, "!regd", "!reg");
        currentCFG->current_bb->add_IRInstr(instr_div);
        currentCFG->current_bb->add_IRInstr(instr_mod);
    }
    return 0;
}

antlrcpp::Any CFGVisitor::visitBand(ifccParser::BandContext *ctx)
{
    visit(ctx->expression(1));
    string right_tmp = currentCFG->create_new_tempvar(_INT);
    Instr_copy *instr_right_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", right_tmp);
    currentCFG->current_bb->add_IRInstr(instr_right_copy);
    visit(ctx->expression(0));
    Instr_and *instr_and = new Instr_and(currentCFG->current_bb, _INT, right_tmp, "!reg");
    currentCFG->current_bb->add_IRInstr(instr_and);
    return 0;
}

antlrcpp::Any CFGVisitor::visitBor(ifccParser::BorContext *ctx)
{
    visit(ctx->expression(1));
    string right_tmp = currentCFG->create_new_tempvar(_INT);
    Instr_copy *instr_right_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", right_tmp);
    currentCFG->current_bb->add_IRInstr(instr_right_copy);
    visit(ctx->expression(0));
    Instr_or *instr_or = new Instr_or(currentCFG->current_bb, _INT, right_tmp, "!reg");
    currentCFG->current_bb->add_IRInstr(instr_or);
    return 0;
}

antlrcpp::Any CFGVisitor::visitBxor(ifccParser::BxorContext *ctx)
{
    visit(ctx->expression(1));
    string right_tmp = currentCFG->create_new_tempvar(_INT);
    Instr_copy *instr_right_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", right_tmp);
    currentCFG->current_bb->add_IRInstr(instr_right_copy);
    visit(ctx->expression(0));
    Instr_xor *instr_xor = new Instr_xor(currentCFG->current_bb, _INT, right_tmp, "!reg");
    currentCFG->current_bb->add_IRInstr(instr_xor);
    return 0;
}

antlrcpp::Any CFGVisitor::visitUnary(ifccParser::UnaryContext *ctx)
{
    if (ctx->unaryOperator()->MINUS() != nullptr)
    {
        visit(ctx->expression());
        Instr_neg *instr_neg = new Instr_neg(currentCFG->current_bb, _INT, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_neg);
    }
    else if (ctx->unaryOperator()->NOT() != nullptr)
    {
        visit(ctx->expression());
        Instr_not *instr_not = new Instr_not(currentCFG->current_bb, _INT, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_not);
    }
    else if (ctx->unaryOperator()->INCREMENT() != nullptr)
    {
        string tmp = currentCFG->create_new_tempvar(_INT);
        Instr_ldconst *instr_ldconst = new Instr_ldconst(currentCFG->current_bb, _INT, tmp, "1");
        visit(ctx->expression());
        Instr_add *instr_add = new Instr_add(currentCFG->current_bb, _INT, tmp, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_ldconst);
        currentCFG->current_bb->add_IRInstr(instr_add);
    }
    else if (ctx->unaryOperator()->DECREMENT() != nullptr)
    {
        string tmp = currentCFG->create_new_tempvar(_INT);
        Instr_ldconst *instr_ldconst = new Instr_ldconst(currentCFG->current_bb, _INT, tmp, "1");
        visit(ctx->expression());
        Instr_sub *instr_sub = new Instr_sub(currentCFG->current_bb, _INT, tmp, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_ldconst);
        currentCFG->current_bb->add_IRInstr(instr_sub);
    }
    return 0;
}

void CFGVisitor::setTargetFlag(string target_architecture)
{
    this->target_architecture = target_architecture;
}