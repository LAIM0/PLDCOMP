// #pragma once

// #include "antlr4-runtime.h"
// #include "generated/ifccBaseVisitor.h"
// #include <cmath>

// class VariableVisitor : public ifccBaseVisitor
// {
// public:
//     virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override;
//     virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *ctx) override;
//     virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *ctx) override;
//     virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *ctx) override;
//     virtual antlrcpp::Any visitExpression(ifccParser::ExpressionContext *ctx) override;
//     virtual antlrcpp::Any visitAddExpression(ifccParser::AddExpressionContext *ctx) override;
//     virtual antlrcpp::Any visitMultExpression(ifccParser::MultExpressionContext *ctx) override;
//     virtual antlrcpp::Any visitUnaryExpression(ifccParser::UnaryExpressionContext *ctx) override;
//     virtual antlrcpp::Any visitPrimaryExpression(ifccParser::PrimaryExpressionContext *ctx) override;

//     std::map<std::string, int> getSymbols();

// private:
//     std::set<std::string> declaredVariables;
//     std::set<std::string> usedVariables;
//     bool checkVariableDeclared(const std::string &variable);
// };
