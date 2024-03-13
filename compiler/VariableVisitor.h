#pragma once

#include "antlr4-runtime.h"
#include "generated/ifccBaseVisitor.h"
#include <cmath>

class VariableVisitor : public ifccBaseVisitor
{
public:
    virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override;
    virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *ctx) override;
    virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *ctx) override;
    virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *ctx) override;
    virtual antlrcpp::Any visitConst(ifccParser::ConstContext * ctx) override;
    virtual antlrcpp::Any visitVar(ifccParser::VarContext * ctx) override;
    virtual antlrcpp::Any visitUnary(ifccParser::UnaryContext * ctx) override;
    virtual antlrcpp::Any visitMult(ifccParser::MultContext * ctx) override;
    virtual antlrcpp::Any visitAdd(ifccParser::AddContext * ctx) override;
    std::map<std::string, int> getSymbols();

private:
    std::set<std::string> declaredVariables;
    std::set<std::string> usedVariables;
    bool checkVariableDeclared(const std::string &variable);
};
