
// Generated from ifcc.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "ifccVisitor.h"


/**
 * This class provides an empty implementation of ifccVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ifccBaseVisitor : public ifccVisitor {
public:

  virtual antlrcpp::Any visitAxiom(ifccParser::AxiomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBloc(ifccParser::BlocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPar(ifccParser::ParContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd(ifccParser::AddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMult(ifccParser::MultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOr(ifccParser::OrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst(ifccParser::ConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBor(ifccParser::BorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLvalueExp(ifccParser::LvalueExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary(ifccParser::UnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitshift(ifccParser::BitshiftContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_call(ifccParser::Func_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnd(ifccParser::AndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBxor(ifccParser::BxorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelational(ifccParser::RelationalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBand(ifccParser::BandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayAccessExp(ifccParser::ArrayAccessExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEquality(ifccParser::EqualityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayAccessLvalue(ifccParser::ArrayAccessLvalueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddressofLvalue(ifccParser::AddressofLvalueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParLvalue(ifccParser::ParLvalueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDereferenceLvalue(ifccParser::DereferenceLvalueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarLvalue(ifccParser::VarLvalueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqualityOperator(ifccParser::EqualityOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelationalOperator(ifccParser::RelationalOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitShiftOperator(ifccParser::BitShiftOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultOperator(ifccParser::MultOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddOperator(ifccParser::AddOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryOperator(ifccParser::UnaryOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition_bloc(ifccParser::Condition_blocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoop_bloc(ifccParser::Loop_blocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_call(ifccParser::Function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter(ifccParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_declaration(ifccParser::Function_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration_stmt(ifccParser::Declaration_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectation_stmt(ifccParser::Affectation_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_stmt(ifccParser::Unary_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_call_stmt(ifccParser::Func_call_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition(ifccParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoop(ifccParser::LoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(ifccParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstante(ifccParser::ConstanteContext *ctx) override {
    return visitChildren(ctx);
  }


};

