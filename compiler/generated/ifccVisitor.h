
// Generated from ifcc.g4 by ANTLR 4.7.2

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

    virtual antlrcpp::Any visitBloc(ifccParser::BlocContext *context) = 0;

    virtual antlrcpp::Any visitExpression(ifccParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitOrExpression(ifccParser::OrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitOrOperation(ifccParser::OrOperationContext *context) = 0;

    virtual antlrcpp::Any visitAndExpression(ifccParser::AndExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAndOperation(ifccParser::AndOperationContext *context) = 0;

    virtual antlrcpp::Any visitBorExpression(ifccParser::BorExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBorOperation(ifccParser::BorOperationContext *context) = 0;

    virtual antlrcpp::Any visitBxorExpression(ifccParser::BxorExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBxorOperation(ifccParser::BxorOperationContext *context) = 0;

    virtual antlrcpp::Any visitBandExpression(ifccParser::BandExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBandOperation(ifccParser::BandOperationContext *context) = 0;

    virtual antlrcpp::Any visitEqualExpression(ifccParser::EqualExpressionContext *context) = 0;

    virtual antlrcpp::Any visitEqualOperation(ifccParser::EqualOperationContext *context) = 0;

    virtual antlrcpp::Any visitRelationalExpression(ifccParser::RelationalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitRelationalOperation(ifccParser::RelationalOperationContext *context) = 0;

    virtual antlrcpp::Any visitBitshiftExpression(ifccParser::BitshiftExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBitshiftOperation(ifccParser::BitshiftOperationContext *context) = 0;

    virtual antlrcpp::Any visitAddExpression(ifccParser::AddExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAddOperation(ifccParser::AddOperationContext *context) = 0;

    virtual antlrcpp::Any visitMultExpression(ifccParser::MultExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultOperation(ifccParser::MultOperationContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpression(ifccParser::UnaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryExpression(ifccParser::PrimaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCondition_bloc(ifccParser::Condition_blocContext *context) = 0;

    virtual antlrcpp::Any visitLoop_bloc(ifccParser::Loop_blocContext *context) = 0;

    virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFunction_call(ifccParser::Function_callContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *context) = 0;

    virtual antlrcpp::Any visitParameter(ifccParser::ParameterContext *context) = 0;

    virtual antlrcpp::Any visitFunction_declaration(ifccParser::Function_declarationContext *context) = 0;

    virtual antlrcpp::Any visitStatement(ifccParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitConstante(ifccParser::ConstanteContext *context) = 0;


};

