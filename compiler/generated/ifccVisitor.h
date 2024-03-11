
// Generated from ifcc.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "ifccParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ifccParser.
 */
class  ifccVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ifccParser.
   */
    virtual antlrcpp::Any visitAxiom(ifccParser::AxiomContext *context) = 0;

    virtual antlrcpp::Any visitProg(ifccParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitExpression(ifccParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAddExpression(ifccParser::AddExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAddOperation(ifccParser::AddOperationContext *context) = 0;

    virtual antlrcpp::Any visitMultExpression(ifccParser::MultExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultOperation(ifccParser::MultOperationContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpression(ifccParser::UnaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryExpression(ifccParser::PrimaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *context) = 0;

    virtual antlrcpp::Any visitStatement(ifccParser::StatementContext *context) = 0;


};

