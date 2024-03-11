#pragma once


#include "antlr4-runtime.h"
#include "generated/ifccBaseVisitor.h"

#include <iostream>
#include <string>
#include <unordered_set>
#include <map> 

extern std::map<std::string, int> SymbolTable;
extern int memoryProg;

class VariableVisitor : public ifccBaseVisitor
{
public:
    antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override;

    antlrcpp::Any visitAffectation(ifccParser::AffectationContext *ctx) override;

    antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *ctx) override;

    antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *ctx) override;

private:
    std::unordered_set<std::string> declaredVariables;
    std::unordered_set<std::string> usedVariables;

    bool checkVariableDeclared(const std::string &variable);

    void checkVariablesUsage();
};
