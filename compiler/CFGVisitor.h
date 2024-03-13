#pragma once 

#include "antlr4-runtime.h"
#include "generated/ifccBaseVisitor.h"
#include "Instr_return.h"
#include "Instr_minus.h"
#include "Instr_add.h"
#include "Instr_sub.h"
#include "Instr_mult.h"
#include "Instr_ldconst.h"
#include "Instr_copy.h"
#include "Type.h"
#include "CFG.h"
#include "BasicBlock.h"
#include <map>
#include <vector>

class CFGVisitor : public ifccBaseVisitor
{
public:
    virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override;
    virtual antlrcpp::Any visitConst(ifccParser::ConstContext *ctx) override;
    virtual antlrcpp::Any visitVar(ifccParser::VarContext * ctx) override;
    virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *ctx) override;
    virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *ctx) override;
    virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *ctx) override;
    virtual antlrcpp::Any visitAdd(ifccParser::AddContext * ctx) override;
    virtual antlrcpp::Any visitMult(ifccParser::MultContext * ctx) override;
    void setSymbols(std::map<std::string, int> symbols);


private:
    CFG * currentCFG;
    std::map<std::string, int> symbols;
    std::map<std::string, int> symbols_value;
    std::map<std::string, int> temp_vars;
};