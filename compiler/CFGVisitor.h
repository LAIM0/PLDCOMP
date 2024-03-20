#pragma once

#include "antlr4-runtime.h"
#include "generated/ifccBaseVisitor.h"
#include "Instr_neg.h"
#include "Instr_not.h"
#include "Instr_add.h"
#include "Instr_and.h"
#include "Instr_or.h"
#include "Instr_xor.h"
#include "Instr_sub.h"
#include "Instr_comp.h"
#include "Instr_mult.h"
#include "Instr_div.h"
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
    virtual antlrcpp::Any visitVar(ifccParser::VarContext *ctx) override;
    virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *ctx) override;
    virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *ctx) override;
    virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *ctx) override;
    virtual antlrcpp::Any visitAdd(ifccParser::AddContext *ctx) override;
    virtual antlrcpp::Any visitMult(ifccParser::MultContext *ctx) override;
    virtual antlrcpp::Any visitBand(ifccParser::BandContext *ctx) override;
    virtual antlrcpp::Any visitBor(ifccParser::BorContext *ctx) override;
    virtual antlrcpp::Any visitBxor(ifccParser::BxorContext *ctx) override;
    virtual antlrcpp::Any visitUnary(ifccParser::UnaryContext *ctx) override;
    virtual antlrcpp::Any visitRelational(ifccParser::RelationalContext * ctx) override;
    virtual antlrcpp::Any visitEquality(ifccParser::EqualityContext * ctx) override;
    virtual antlrcpp::Any visitFunction_declaration(ifccParser::Function_declarationContext * ctx) override;


private:
    CFG *currentCFG;
    std::map<std::string, int> symbols;
    std::map<std::string, int> symbols_value;
    std::map<std::string, int> temp_vars;
};