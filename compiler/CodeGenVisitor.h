#pragma once

#include "antlr4-runtime.h"
#include "generated/ifccBaseVisitor.h"
#include "VariableVisitor.h"
#include "CodeGenx86.h"

class CodeGenVisitor : public ifccBaseVisitor
{
public:
        virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override;
        virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *ctx) override;
        virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *ctx) override;
        virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *ctx) override;
        virtual antlrcpp::Any visitExpression(ifccParser::ExpressionContext *ctx) override;
        virtual antlrcpp::Any visitAddExpression(ifccParser::AddExpressionContext *ctx) override;
        virtual antlrcpp::Any visitMultExpression(ifccParser::MultExpressionContext *ctx) override;
        virtual antlrcpp::Any visitUnaryExpression(ifccParser::UnaryExpressionContext *ctx) override;
        virtual antlrcpp::Any visitPrimaryExpression(ifccParser::PrimaryExpressionContext *ctx) override;
        void setSymbols(std::map<std::string, int> symbols);
        void setTargetArchitecture(const std::string& architecture); // Méthode pour définir l'architecture cible


private:
        CodeGenx86 cgx86;
        std::map<std::string, int> symbols;
        std::map<std::string, int> symbols_value;
        std::string targetArchitecture; // Architecture cible
        VariableVisitor variableVisitor;
};
