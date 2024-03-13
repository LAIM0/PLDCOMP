
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

    virtual antlrcpp::Any visitPar(ifccParser::ParContext *context) = 0;

    virtual antlrcpp::Any visitAdd(ifccParser::AddContext *context) = 0;

    virtual antlrcpp::Any visitMult(ifccParser::MultContext *context) = 0;

    virtual antlrcpp::Any visitOr(ifccParser::OrContext *context) = 0;

    virtual antlrcpp::Any visitConst(ifccParser::ConstContext *context) = 0;

    virtual antlrcpp::Any visitBor(ifccParser::BorContext *context) = 0;

    virtual antlrcpp::Any visitVar(ifccParser::VarContext *context) = 0;

    virtual antlrcpp::Any visitUnary(ifccParser::UnaryContext *context) = 0;

    virtual antlrcpp::Any visitBitshift(ifccParser::BitshiftContext *context) = 0;

    virtual antlrcpp::Any visitFunc_call(ifccParser::Func_callContext *context) = 0;

    virtual antlrcpp::Any visitAnd(ifccParser::AndContext *context) = 0;

    virtual antlrcpp::Any visitBxor(ifccParser::BxorContext *context) = 0;

    virtual antlrcpp::Any visitRelational(ifccParser::RelationalContext *context) = 0;

    virtual antlrcpp::Any visitBand(ifccParser::BandContext *context) = 0;

    virtual antlrcpp::Any visitEquality(ifccParser::EqualityContext *context) = 0;

    virtual antlrcpp::Any visitEqualityOperator(ifccParser::EqualityOperatorContext *context) = 0;

    virtual antlrcpp::Any visitRelationalOperator(ifccParser::RelationalOperatorContext *context) = 0;

    virtual antlrcpp::Any visitBitShiftOperator(ifccParser::BitShiftOperatorContext *context) = 0;

    virtual antlrcpp::Any visitMultOperator(ifccParser::MultOperatorContext *context) = 0;

    virtual antlrcpp::Any visitAddOperator(ifccParser::AddOperatorContext *context) = 0;

    virtual antlrcpp::Any visitUnaryOperator(ifccParser::UnaryOperatorContext *context) = 0;

    virtual antlrcpp::Any visitCondition_bloc(ifccParser::Condition_blocContext *context) = 0;

    virtual antlrcpp::Any visitLoop_bloc(ifccParser::Loop_blocContext *context) = 0;

    virtual antlrcpp::Any visitFunction_call(ifccParser::Function_callContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *context) = 0;

    virtual antlrcpp::Any visitParameter(ifccParser::ParameterContext *context) = 0;

    virtual antlrcpp::Any visitFunction_declaration(ifccParser::Function_declarationContext *context) = 0;

    virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration_stmt(ifccParser::Declaration_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_stmt(ifccParser::Affectation_stmtContext *context) = 0;

    virtual antlrcpp::Any visitUnary_stmt(ifccParser::Unary_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFunc_call_stmt(ifccParser::Func_call_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCondition(ifccParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitLoop(ifccParser::LoopContext *context) = 0;

    virtual antlrcpp::Any visitConstante(ifccParser::ConstanteContext *context) = 0;


};

