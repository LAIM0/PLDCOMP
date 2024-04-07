
// Generated from ifcc.g4 by ANTLR 4.9.2


#include "ifccVisitor.h"

#include "ifccParser.h"


using namespace antlrcpp;
using namespace antlr4;

ifccParser::ifccParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ifccParser::~ifccParser() {
  delete _interpreter;
}

std::string ifccParser::getGrammarFileName() const {
  return "ifcc.g4";
}

const std::vector<std::string>& ifccParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ifccParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- AxiomContext ------------------------------------------------------------------

ifccParser::AxiomContext::AxiomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::ProgContext* ifccParser::AxiomContext::prog() {
  return getRuleContext<ifccParser::ProgContext>(0);
}

tree::TerminalNode* ifccParser::AxiomContext::EOF() {
  return getToken(ifccParser::EOF, 0);
}


size_t ifccParser::AxiomContext::getRuleIndex() const {
  return ifccParser::RuleAxiom;
}


antlrcpp::Any ifccParser::AxiomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAxiom(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::AxiomContext* ifccParser::axiom() {
  AxiomContext *_localctx = _tracker.createInstance<AxiomContext>(_ctx, getState());
  enterRule(_localctx, 0, ifccParser::RuleAxiom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    prog();
    setState(43);
    match(ifccParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgContext ------------------------------------------------------------------

ifccParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ifccParser::Function_declarationContext *> ifccParser::ProgContext::function_declaration() {
  return getRuleContexts<ifccParser::Function_declarationContext>();
}

ifccParser::Function_declarationContext* ifccParser::ProgContext::function_declaration(size_t i) {
  return getRuleContext<ifccParser::Function_declarationContext>(i);
}


size_t ifccParser::ProgContext::getRuleIndex() const {
  return ifccParser::RuleProg;
}


antlrcpp::Any ifccParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ProgContext* ifccParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 2, ifccParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::TYPE) {
      setState(45);
      function_declaration();
      setState(50);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlocContext ------------------------------------------------------------------

ifccParser::BlocContext::BlocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ifccParser::StatementContext *> ifccParser::BlocContext::statement() {
  return getRuleContexts<ifccParser::StatementContext>();
}

ifccParser::StatementContext* ifccParser::BlocContext::statement(size_t i) {
  return getRuleContext<ifccParser::StatementContext>(i);
}


size_t ifccParser::BlocContext::getRuleIndex() const {
  return ifccParser::RuleBloc;
}


antlrcpp::Any ifccParser::BlocContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBloc(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::BlocContext* ifccParser::bloc() {
  BlocContext *_localctx = _tracker.createInstance<BlocContext>(_ctx, getState());
  enterRule(_localctx, 4, ifccParser::RuleBloc);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(ifccParser::T__0);
    setState(55);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::T__4)
      | (1ULL << ifccParser::T__6)
      | (1ULL << ifccParser::DEREFERENCE)
      | (1ULL << ifccParser::ADDRESSOF)
      | (1ULL << ifccParser::DECREMENT)
      | (1ULL << ifccParser::MINUS)
      | (1ULL << ifccParser::INCREMENT)
      | (1ULL << ifccParser::PLUS)
      | (1ULL << ifccParser::NOT)
      | (1ULL << ifccParser::IF)
      | (1ULL << ifccParser::RETURN)
      | (1ULL << ifccParser::TYPE)
      | (1ULL << ifccParser::VAR))) != 0)) {
      setState(52);
      statement();
      setState(57);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(58);
    match(ifccParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

ifccParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::ExpressionContext::getRuleIndex() const {
  return ifccParser::RuleExpression;
}

void ifccParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParContext ------------------------------------------------------------------

ifccParser::ExpressionContext* ifccParser::ParContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}

ifccParser::ParContext::ParContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::ParContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitPar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddContext ------------------------------------------------------------------

std::vector<ifccParser::ExpressionContext *> ifccParser::AddContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::AddContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

ifccParser::AddOperatorContext* ifccParser::AddContext::addOperator() {
  return getRuleContext<ifccParser::AddOperatorContext>(0);
}

ifccParser::AddContext::AddContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultContext ------------------------------------------------------------------

std::vector<ifccParser::ExpressionContext *> ifccParser::MultContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::MultContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

ifccParser::MultOperatorContext* ifccParser::MultContext::multOperator() {
  return getRuleContext<ifccParser::MultOperatorContext>(0);
}

ifccParser::MultContext::MultContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::MultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitMult(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrContext ------------------------------------------------------------------

std::vector<ifccParser::ExpressionContext *> ifccParser::OrContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::OrContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

tree::TerminalNode* ifccParser::OrContext::OR() {
  return getToken(ifccParser::OR, 0);
}

ifccParser::OrContext::OrContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::OrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstContext ------------------------------------------------------------------

ifccParser::ConstanteContext* ifccParser::ConstContext::constante() {
  return getRuleContext<ifccParser::ConstanteContext>(0);
}

ifccParser::ConstContext::ConstContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::ConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BorContext ------------------------------------------------------------------

std::vector<ifccParser::ExpressionContext *> ifccParser::BorContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::BorContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

tree::TerminalNode* ifccParser::BorContext::BOR() {
  return getToken(ifccParser::BOR, 0);
}

ifccParser::BorContext::BorContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::BorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LvalueExpContext ------------------------------------------------------------------

ifccParser::Lvalue_expressionContext* ifccParser::LvalueExpContext::lvalue_expression() {
  return getRuleContext<ifccParser::Lvalue_expressionContext>(0);
}

ifccParser::LvalueExpContext::LvalueExpContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::LvalueExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitLvalueExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryContext ------------------------------------------------------------------

ifccParser::UnaryOperatorContext* ifccParser::UnaryContext::unaryOperator() {
  return getRuleContext<ifccParser::UnaryOperatorContext>(0);
}

ifccParser::UnaryContext::UnaryContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::UnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitUnary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitshiftContext ------------------------------------------------------------------

std::vector<ifccParser::ExpressionContext *> ifccParser::BitshiftContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::BitshiftContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

ifccParser::BitShiftOperatorContext* ifccParser::BitshiftContext::bitShiftOperator() {
  return getRuleContext<ifccParser::BitShiftOperatorContext>(0);
}

ifccParser::BitshiftContext::BitshiftContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::BitshiftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBitshift(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Func_callContext ------------------------------------------------------------------

ifccParser::Function_callContext* ifccParser::Func_callContext::function_call() {
  return getRuleContext<ifccParser::Function_callContext>(0);
}

ifccParser::Func_callContext::Func_callContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::Func_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitFunc_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndContext ------------------------------------------------------------------

std::vector<ifccParser::ExpressionContext *> ifccParser::AndContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::AndContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

tree::TerminalNode* ifccParser::AndContext::AND() {
  return getToken(ifccParser::AND, 0);
}

ifccParser::AndContext::AndContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::AndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BxorContext ------------------------------------------------------------------

std::vector<ifccParser::ExpressionContext *> ifccParser::BxorContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::BxorContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

tree::TerminalNode* ifccParser::BxorContext::BXOR() {
  return getToken(ifccParser::BXOR, 0);
}

ifccParser::BxorContext::BxorContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::BxorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBxor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelationalContext ------------------------------------------------------------------

std::vector<ifccParser::ExpressionContext *> ifccParser::RelationalContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::RelationalContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

ifccParser::RelationalOperatorContext* ifccParser::RelationalContext::relationalOperator() {
  return getRuleContext<ifccParser::RelationalOperatorContext>(0);
}

ifccParser::RelationalContext::RelationalContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::RelationalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitRelational(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BandContext ------------------------------------------------------------------

std::vector<ifccParser::ExpressionContext *> ifccParser::BandContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::BandContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

tree::TerminalNode* ifccParser::BandContext::BAND() {
  return getToken(ifccParser::BAND, 0);
}

ifccParser::BandContext::BandContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::BandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBand(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayAccessExpContext ------------------------------------------------------------------

ifccParser::Lvalue_expressionContext* ifccParser::ArrayAccessExpContext::lvalue_expression() {
  return getRuleContext<ifccParser::Lvalue_expressionContext>(0);
}

ifccParser::ExpressionContext* ifccParser::ArrayAccessExpContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}

ifccParser::ArrayAccessExpContext::ArrayAccessExpContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::ArrayAccessExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitArrayAccessExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualityContext ------------------------------------------------------------------

std::vector<ifccParser::ExpressionContext *> ifccParser::EqualityContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::EqualityContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

ifccParser::EqualityOperatorContext* ifccParser::EqualityContext::equalityOperator() {
  return getRuleContext<ifccParser::EqualityOperatorContext>(0);
}

ifccParser::EqualityContext::EqualityContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::EqualityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitEquality(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ExpressionContext* ifccParser::expression() {
   return expression(0);
}

ifccParser::ExpressionContext* ifccParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ifccParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  ifccParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, ifccParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(74);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<UnaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(61);
      unaryOperator();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ConstContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(62);
      constante();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<LvalueExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(63);
      lvalue_expression(0);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ArrayAccessExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(64);
      lvalue_expression(0);
      setState(65);
      match(ifccParser::T__2);
      setState(66);
      expression(0);
      setState(67);
      match(ifccParser::T__3);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ParContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(69);
      match(ifccParser::T__4);
      setState(70);
      expression(0);
      setState(71);
      match(ifccParser::T__5);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<Func_callContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(73);
      function_call();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(113);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(111);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(76);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(77);
          multOperator();
          setState(78);
          expression(17);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(80);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(81);
          addOperator();
          setState(82);
          expression(16);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BitshiftContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(84);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(85);
          bitShiftOperator();
          setState(86);
          expression(15);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<RelationalContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(88);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(89);
          relationalOperator();
          setState(90);
          expression(14);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<EqualityContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(92);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(93);
          equalityOperator();
          setState(94);
          expression(13);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<BandContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(96);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(97);
          match(ifccParser::BAND);
          setState(98);
          expression(12);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<BxorContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(99);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(100);
          match(ifccParser::BXOR);
          setState(101);
          expression(11);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BorContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(102);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(103);
          match(ifccParser::BOR);
          setState(104);
          expression(10);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<AndContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(105);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(106);
          match(ifccParser::AND);
          setState(107);
          expression(9);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<OrContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(108);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(109);
          match(ifccParser::OR);
          setState(110);
          expression(8);
          break;
        }

        default:
          break;
        } 
      }
      setState(115);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Lvalue_expressionContext ------------------------------------------------------------------

ifccParser::Lvalue_expressionContext::Lvalue_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::Lvalue_expressionContext::getRuleIndex() const {
  return ifccParser::RuleLvalue_expression;
}

void ifccParser::Lvalue_expressionContext::copyFrom(Lvalue_expressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArrayAccessLvalueContext ------------------------------------------------------------------

ifccParser::Lvalue_expressionContext* ifccParser::ArrayAccessLvalueContext::lvalue_expression() {
  return getRuleContext<ifccParser::Lvalue_expressionContext>(0);
}

ifccParser::ExpressionContext* ifccParser::ArrayAccessLvalueContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}

ifccParser::ArrayAccessLvalueContext::ArrayAccessLvalueContext(Lvalue_expressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::ArrayAccessLvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitArrayAccessLvalue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddressofLvalueContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::AddressofLvalueContext::ADDRESSOF() {
  return getToken(ifccParser::ADDRESSOF, 0);
}

ifccParser::Lvalue_expressionContext* ifccParser::AddressofLvalueContext::lvalue_expression() {
  return getRuleContext<ifccParser::Lvalue_expressionContext>(0);
}

ifccParser::AddressofLvalueContext::AddressofLvalueContext(Lvalue_expressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::AddressofLvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAddressofLvalue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParLvalueContext ------------------------------------------------------------------

ifccParser::Lvalue_expressionContext* ifccParser::ParLvalueContext::lvalue_expression() {
  return getRuleContext<ifccParser::Lvalue_expressionContext>(0);
}

ifccParser::ParLvalueContext::ParLvalueContext(Lvalue_expressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::ParLvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitParLvalue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DereferenceLvalueContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::DereferenceLvalueContext::DEREFERENCE() {
  return getToken(ifccParser::DEREFERENCE, 0);
}

ifccParser::Lvalue_expressionContext* ifccParser::DereferenceLvalueContext::lvalue_expression() {
  return getRuleContext<ifccParser::Lvalue_expressionContext>(0);
}

ifccParser::DereferenceLvalueContext::DereferenceLvalueContext(Lvalue_expressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::DereferenceLvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitDereferenceLvalue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarLvalueContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::VarLvalueContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::VarLvalueContext::VarLvalueContext(Lvalue_expressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::VarLvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitVarLvalue(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::Lvalue_expressionContext* ifccParser::lvalue_expression() {
   return lvalue_expression(0);
}

ifccParser::Lvalue_expressionContext* ifccParser::lvalue_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ifccParser::Lvalue_expressionContext *_localctx = _tracker.createInstance<Lvalue_expressionContext>(_ctx, parentState);
  ifccParser::Lvalue_expressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, ifccParser::RuleLvalue_expression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(126);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::VAR: {
        _localctx = _tracker.createInstance<VarLvalueContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(117);
        match(ifccParser::VAR);
        break;
      }

      case ifccParser::DEREFERENCE: {
        _localctx = _tracker.createInstance<DereferenceLvalueContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(118);
        match(ifccParser::DEREFERENCE);
        setState(119);
        lvalue_expression(4);
        break;
      }

      case ifccParser::ADDRESSOF: {
        _localctx = _tracker.createInstance<AddressofLvalueContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(120);
        match(ifccParser::ADDRESSOF);
        setState(121);
        lvalue_expression(3);
        break;
      }

      case ifccParser::T__4: {
        _localctx = _tracker.createInstance<ParLvalueContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(122);
        match(ifccParser::T__4);
        setState(123);
        lvalue_expression(0);
        setState(124);
        match(ifccParser::T__5);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(135);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<ArrayAccessLvalueContext>(_tracker.createInstance<Lvalue_expressionContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleLvalue_expression);
        setState(128);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(129);
        match(ifccParser::T__2);
        setState(130);
        expression(0);
        setState(131);
        match(ifccParser::T__3); 
      }
      setState(137);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqualityOperatorContext ------------------------------------------------------------------

ifccParser::EqualityOperatorContext::EqualityOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::EqualityOperatorContext::EQUAL() {
  return getToken(ifccParser::EQUAL, 0);
}

tree::TerminalNode* ifccParser::EqualityOperatorContext::NOTEQUAL() {
  return getToken(ifccParser::NOTEQUAL, 0);
}


size_t ifccParser::EqualityOperatorContext::getRuleIndex() const {
  return ifccParser::RuleEqualityOperator;
}


antlrcpp::Any ifccParser::EqualityOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitEqualityOperator(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::EqualityOperatorContext* ifccParser::equalityOperator() {
  EqualityOperatorContext *_localctx = _tracker.createInstance<EqualityOperatorContext>(_ctx, getState());
  enterRule(_localctx, 10, ifccParser::RuleEqualityOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    _la = _input->LA(1);
    if (!(_la == ifccParser::NOTEQUAL

    || _la == ifccParser::EQUAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationalOperatorContext ------------------------------------------------------------------

ifccParser::RelationalOperatorContext::RelationalOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::RelationalOperatorContext::LESSEQUAL() {
  return getToken(ifccParser::LESSEQUAL, 0);
}

tree::TerminalNode* ifccParser::RelationalOperatorContext::LESS() {
  return getToken(ifccParser::LESS, 0);
}

tree::TerminalNode* ifccParser::RelationalOperatorContext::GREATEREQUAL() {
  return getToken(ifccParser::GREATEREQUAL, 0);
}

tree::TerminalNode* ifccParser::RelationalOperatorContext::GREATER() {
  return getToken(ifccParser::GREATER, 0);
}


size_t ifccParser::RelationalOperatorContext::getRuleIndex() const {
  return ifccParser::RuleRelationalOperator;
}


antlrcpp::Any ifccParser::RelationalOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitRelationalOperator(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::RelationalOperatorContext* ifccParser::relationalOperator() {
  RelationalOperatorContext *_localctx = _tracker.createInstance<RelationalOperatorContext>(_ctx, getState());
  enterRule(_localctx, 12, ifccParser::RuleRelationalOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::LESSEQUAL)
      | (1ULL << ifccParser::LESS)
      | (1ULL << ifccParser::GREATEREQUAL)
      | (1ULL << ifccParser::GREATER))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitShiftOperatorContext ------------------------------------------------------------------

ifccParser::BitShiftOperatorContext::BitShiftOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::BitShiftOperatorContext::LEFTSHIFT() {
  return getToken(ifccParser::LEFTSHIFT, 0);
}

tree::TerminalNode* ifccParser::BitShiftOperatorContext::RIGHTSHIFT() {
  return getToken(ifccParser::RIGHTSHIFT, 0);
}


size_t ifccParser::BitShiftOperatorContext::getRuleIndex() const {
  return ifccParser::RuleBitShiftOperator;
}


antlrcpp::Any ifccParser::BitShiftOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBitShiftOperator(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::BitShiftOperatorContext* ifccParser::bitShiftOperator() {
  BitShiftOperatorContext *_localctx = _tracker.createInstance<BitShiftOperatorContext>(_ctx, getState());
  enterRule(_localctx, 14, ifccParser::RuleBitShiftOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    _la = _input->LA(1);
    if (!(_la == ifccParser::RIGHTSHIFT

    || _la == ifccParser::LEFTSHIFT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultOperatorContext ------------------------------------------------------------------

ifccParser::MultOperatorContext::MultOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::MultOperatorContext::MULTIPLY() {
  return getToken(ifccParser::MULTIPLY, 0);
}

tree::TerminalNode* ifccParser::MultOperatorContext::DIVIDE() {
  return getToken(ifccParser::DIVIDE, 0);
}

tree::TerminalNode* ifccParser::MultOperatorContext::MOD() {
  return getToken(ifccParser::MOD, 0);
}


size_t ifccParser::MultOperatorContext::getRuleIndex() const {
  return ifccParser::RuleMultOperator;
}


antlrcpp::Any ifccParser::MultOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitMultOperator(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::MultOperatorContext* ifccParser::multOperator() {
  MultOperatorContext *_localctx = _tracker.createInstance<MultOperatorContext>(_ctx, getState());
  enterRule(_localctx, 16, ifccParser::RuleMultOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::MULTIPLY)
      | (1ULL << ifccParser::DIVIDE)
      | (1ULL << ifccParser::MOD))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddOperatorContext ------------------------------------------------------------------

ifccParser::AddOperatorContext::AddOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::AddOperatorContext::PLUS() {
  return getToken(ifccParser::PLUS, 0);
}

tree::TerminalNode* ifccParser::AddOperatorContext::MINUS() {
  return getToken(ifccParser::MINUS, 0);
}


size_t ifccParser::AddOperatorContext::getRuleIndex() const {
  return ifccParser::RuleAddOperator;
}


antlrcpp::Any ifccParser::AddOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAddOperator(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::AddOperatorContext* ifccParser::addOperator() {
  AddOperatorContext *_localctx = _tracker.createInstance<AddOperatorContext>(_ctx, getState());
  enterRule(_localctx, 18, ifccParser::RuleAddOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    _la = _input->LA(1);
    if (!(_la == ifccParser::MINUS

    || _la == ifccParser::PLUS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOperatorContext ------------------------------------------------------------------

ifccParser::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::UnaryOperatorContext::INCREMENT() {
  return getToken(ifccParser::INCREMENT, 0);
}

ifccParser::Lvalue_expressionContext* ifccParser::UnaryOperatorContext::lvalue_expression() {
  return getRuleContext<ifccParser::Lvalue_expressionContext>(0);
}

tree::TerminalNode* ifccParser::UnaryOperatorContext::DECREMENT() {
  return getToken(ifccParser::DECREMENT, 0);
}

tree::TerminalNode* ifccParser::UnaryOperatorContext::PLUS() {
  return getToken(ifccParser::PLUS, 0);
}

tree::TerminalNode* ifccParser::UnaryOperatorContext::MINUS() {
  return getToken(ifccParser::MINUS, 0);
}

tree::TerminalNode* ifccParser::UnaryOperatorContext::NOT() {
  return getToken(ifccParser::NOT, 0);
}

ifccParser::ExpressionContext* ifccParser::UnaryOperatorContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}


size_t ifccParser::UnaryOperatorContext::getRuleIndex() const {
  return ifccParser::RuleUnaryOperator;
}


antlrcpp::Any ifccParser::UnaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitUnaryOperator(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::UnaryOperatorContext* ifccParser::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 20, ifccParser::RuleUnaryOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(158);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::INCREMENT: {
        enterOuterAlt(_localctx, 1);
        setState(148);
        match(ifccParser::INCREMENT);
        setState(149);
        lvalue_expression(0);
        break;
      }

      case ifccParser::DECREMENT: {
        enterOuterAlt(_localctx, 2);
        setState(150);
        match(ifccParser::DECREMENT);
        setState(151);
        lvalue_expression(0);
        break;
      }

      case ifccParser::PLUS: {
        enterOuterAlt(_localctx, 3);
        setState(152);
        match(ifccParser::PLUS);
        setState(153);
        lvalue_expression(0);
        break;
      }

      case ifccParser::MINUS: {
        enterOuterAlt(_localctx, 4);
        setState(154);
        match(ifccParser::MINUS);
        setState(155);
        lvalue_expression(0);
        break;
      }

      case ifccParser::NOT: {
        enterOuterAlt(_localctx, 5);
        setState(156);
        match(ifccParser::NOT);
        setState(157);
        expression(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Condition_blocContext ------------------------------------------------------------------

ifccParser::Condition_blocContext::Condition_blocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::Condition_blocContext::IF() {
  return getToken(ifccParser::IF, 0);
}

std::vector<ifccParser::ExpressionContext *> ifccParser::Condition_blocContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::Condition_blocContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

std::vector<ifccParser::BlocContext *> ifccParser::Condition_blocContext::bloc() {
  return getRuleContexts<ifccParser::BlocContext>();
}

ifccParser::BlocContext* ifccParser::Condition_blocContext::bloc(size_t i) {
  return getRuleContext<ifccParser::BlocContext>(i);
}

std::vector<tree::TerminalNode *> ifccParser::Condition_blocContext::ELSEIF() {
  return getTokens(ifccParser::ELSEIF);
}

tree::TerminalNode* ifccParser::Condition_blocContext::ELSEIF(size_t i) {
  return getToken(ifccParser::ELSEIF, i);
}

tree::TerminalNode* ifccParser::Condition_blocContext::ELSE() {
  return getToken(ifccParser::ELSE, 0);
}


size_t ifccParser::Condition_blocContext::getRuleIndex() const {
  return ifccParser::RuleCondition_bloc;
}


antlrcpp::Any ifccParser::Condition_blocContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitCondition_bloc(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::Condition_blocContext* ifccParser::condition_bloc() {
  Condition_blocContext *_localctx = _tracker.createInstance<Condition_blocContext>(_ctx, getState());
  enterRule(_localctx, 22, ifccParser::RuleCondition_bloc);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(ifccParser::IF);
    setState(161);
    match(ifccParser::T__4);
    setState(162);
    expression(0);
    setState(163);
    match(ifccParser::T__5);
    setState(164);
    bloc();
    setState(173);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::ELSEIF) {
      setState(165);
      match(ifccParser::ELSEIF);
      setState(166);
      match(ifccParser::T__4);
      setState(167);
      expression(0);
      setState(168);
      match(ifccParser::T__5);
      setState(169);
      bloc();
      setState(175);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(178);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ifccParser::ELSE) {
      setState(176);
      match(ifccParser::ELSE);
      setState(177);
      bloc();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Loop_blocContext ------------------------------------------------------------------

ifccParser::Loop_blocContext::Loop_blocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::ExpressionContext* ifccParser::Loop_blocContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}

ifccParser::BlocContext* ifccParser::Loop_blocContext::bloc() {
  return getRuleContext<ifccParser::BlocContext>(0);
}


size_t ifccParser::Loop_blocContext::getRuleIndex() const {
  return ifccParser::RuleLoop_bloc;
}


antlrcpp::Any ifccParser::Loop_blocContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitLoop_bloc(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::Loop_blocContext* ifccParser::loop_bloc() {
  Loop_blocContext *_localctx = _tracker.createInstance<Loop_blocContext>(_ctx, getState());
  enterRule(_localctx, 24, ifccParser::RuleLoop_bloc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    match(ifccParser::T__6);
    setState(181);
    expression(0);
    setState(182);
    match(ifccParser::T__5);
    setState(183);
    bloc();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_callContext ------------------------------------------------------------------

ifccParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::Function_callContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

std::vector<ifccParser::ExpressionContext *> ifccParser::Function_callContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::Function_callContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}


size_t ifccParser::Function_callContext::getRuleIndex() const {
  return ifccParser::RuleFunction_call;
}


antlrcpp::Any ifccParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::Function_callContext* ifccParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 26, ifccParser::RuleFunction_call);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(ifccParser::VAR);
    setState(186);
    match(ifccParser::T__4);
    setState(188);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::T__4)
      | (1ULL << ifccParser::DEREFERENCE)
      | (1ULL << ifccParser::ADDRESSOF)
      | (1ULL << ifccParser::DECREMENT)
      | (1ULL << ifccParser::MINUS)
      | (1ULL << ifccParser::INCREMENT)
      | (1ULL << ifccParser::PLUS)
      | (1ULL << ifccParser::NOT)
      | (1ULL << ifccParser::NUMBER)
      | (1ULL << ifccParser::CHAR)
      | (1ULL << ifccParser::VAR))) != 0)) {
      setState(187);
      expression(0);
    }
    setState(194);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::T__7) {
      setState(190);
      match(ifccParser::T__7);
      setState(191);
      expression(0);
      setState(196);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(197);
    match(ifccParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

ifccParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::TypeContext* ifccParser::DeclarationContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

tree::TerminalNode* ifccParser::DeclarationContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::AffectationContext* ifccParser::DeclarationContext::affectation() {
  return getRuleContext<ifccParser::AffectationContext>(0);
}


size_t ifccParser::DeclarationContext::getRuleIndex() const {
  return ifccParser::RuleDeclaration;
}


antlrcpp::Any ifccParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::DeclarationContext* ifccParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 28, ifccParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    type();
    setState(202);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(200);
      match(ifccParser::VAR);
      break;
    }

    case 2: {
      setState(201);
      affectation();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AffectationContext ------------------------------------------------------------------

ifccParser::AffectationContext::AffectationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::Lvalue_expressionContext* ifccParser::AffectationContext::lvalue_expression() {
  return getRuleContext<ifccParser::Lvalue_expressionContext>(0);
}

tree::TerminalNode* ifccParser::AffectationContext::EGAL() {
  return getToken(ifccParser::EGAL, 0);
}

ifccParser::ExpressionContext* ifccParser::AffectationContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}


size_t ifccParser::AffectationContext::getRuleIndex() const {
  return ifccParser::RuleAffectation;
}


antlrcpp::Any ifccParser::AffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAffectation(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::AffectationContext* ifccParser::affectation() {
  AffectationContext *_localctx = _tracker.createInstance<AffectationContext>(_ctx, getState());
  enterRule(_localctx, 30, ifccParser::RuleAffectation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    lvalue_expression(0);
    setState(205);
    match(ifccParser::EGAL);
    setState(206);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

ifccParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::TypeContext* ifccParser::ParameterContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

tree::TerminalNode* ifccParser::ParameterContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

tree::TerminalNode* ifccParser::ParameterContext::EGAL() {
  return getToken(ifccParser::EGAL, 0);
}

ifccParser::ConstanteContext* ifccParser::ParameterContext::constante() {
  return getRuleContext<ifccParser::ConstanteContext>(0);
}


size_t ifccParser::ParameterContext::getRuleIndex() const {
  return ifccParser::RuleParameter;
}


antlrcpp::Any ifccParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ParameterContext* ifccParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 32, ifccParser::RuleParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    type();
    setState(209);
    match(ifccParser::VAR);
    setState(212);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ifccParser::EGAL) {
      setState(210);
      match(ifccParser::EGAL);
      setState(211);
      constante();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_declarationContext ------------------------------------------------------------------

ifccParser::Function_declarationContext::Function_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::TypeContext* ifccParser::Function_declarationContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

tree::TerminalNode* ifccParser::Function_declarationContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::BlocContext* ifccParser::Function_declarationContext::bloc() {
  return getRuleContext<ifccParser::BlocContext>(0);
}

std::vector<ifccParser::ParameterContext *> ifccParser::Function_declarationContext::parameter() {
  return getRuleContexts<ifccParser::ParameterContext>();
}

ifccParser::ParameterContext* ifccParser::Function_declarationContext::parameter(size_t i) {
  return getRuleContext<ifccParser::ParameterContext>(i);
}


size_t ifccParser::Function_declarationContext::getRuleIndex() const {
  return ifccParser::RuleFunction_declaration;
}


antlrcpp::Any ifccParser::Function_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitFunction_declaration(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::Function_declarationContext* ifccParser::function_declaration() {
  Function_declarationContext *_localctx = _tracker.createInstance<Function_declarationContext>(_ctx, getState());
  enterRule(_localctx, 34, ifccParser::RuleFunction_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    type();
    setState(215);
    match(ifccParser::VAR);
    setState(216);
    match(ifccParser::T__4);
    setState(218);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ifccParser::TYPE) {
      setState(217);
      parameter();
    }
    setState(224);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::T__7) {
      setState(220);
      match(ifccParser::T__7);
      setState(221);
      parameter();
      setState(226);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(227);
    match(ifccParser::T__5);
    setState(228);
    bloc();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ifccParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::StatementContext::getRuleIndex() const {
  return ifccParser::RuleStatement;
}

void ifccParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConditionContext ------------------------------------------------------------------

ifccParser::Condition_blocContext* ifccParser::ConditionContext::condition_bloc() {
  return getRuleContext<ifccParser::Condition_blocContext>(0);
}

ifccParser::ConditionContext::ConditionContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Unary_stmtContext ------------------------------------------------------------------

ifccParser::UnaryOperatorContext* ifccParser::Unary_stmtContext::unaryOperator() {
  return getRuleContext<ifccParser::UnaryOperatorContext>(0);
}

ifccParser::Unary_stmtContext::Unary_stmtContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::Unary_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitUnary_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Func_call_stmtContext ------------------------------------------------------------------

ifccParser::Function_callContext* ifccParser::Func_call_stmtContext::function_call() {
  return getRuleContext<ifccParser::Function_callContext>(0);
}

ifccParser::Func_call_stmtContext::Func_call_stmtContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::Func_call_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitFunc_call_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Declaration_stmtContext ------------------------------------------------------------------

ifccParser::DeclarationContext* ifccParser::Declaration_stmtContext::declaration() {
  return getRuleContext<ifccParser::DeclarationContext>(0);
}

ifccParser::Declaration_stmtContext::Declaration_stmtContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::Declaration_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitDeclaration_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LoopContext ------------------------------------------------------------------

ifccParser::Loop_blocContext* ifccParser::LoopContext::loop_bloc() {
  return getRuleContext<ifccParser::Loop_blocContext>(0);
}

ifccParser::LoopContext::LoopContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::LoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitLoop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_stmtContext ------------------------------------------------------------------

ifccParser::AffectationContext* ifccParser::Affectation_stmtContext::affectation() {
  return getRuleContext<ifccParser::AffectationContext>(0);
}

ifccParser::Affectation_stmtContext::Affectation_stmtContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::Affectation_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAffectation_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Return_stmtContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::Return_stmtContext::RETURN() {
  return getToken(ifccParser::RETURN, 0);
}

ifccParser::ExpressionContext* ifccParser::Return_stmtContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}

ifccParser::Return_stmtContext::Return_stmtContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::Return_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitReturn_stmt(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::StatementContext* ifccParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 36, ifccParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(248);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::Return_stmtContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(230);
      match(ifccParser::RETURN);
      setState(231);
      expression(0);
      setState(232);
      match(ifccParser::T__8);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::Declaration_stmtContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(234);
      declaration();
      setState(235);
      match(ifccParser::T__8);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::Affectation_stmtContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(237);
      affectation();
      setState(238);
      match(ifccParser::T__8);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::Unary_stmtContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(240);
      unaryOperator();
      setState(241);
      match(ifccParser::T__8);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::Func_call_stmtContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(243);
      function_call();
      setState(244);
      match(ifccParser::T__8);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::ConditionContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(246);
      condition_bloc();
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::LoopContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(247);
      loop_bloc();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

ifccParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::TypeContext::TYPE() {
  return getToken(ifccParser::TYPE, 0);
}

std::vector<tree::TerminalNode *> ifccParser::TypeContext::DEREFERENCE() {
  return getTokens(ifccParser::DEREFERENCE);
}

tree::TerminalNode* ifccParser::TypeContext::DEREFERENCE(size_t i) {
  return getToken(ifccParser::DEREFERENCE, i);
}


size_t ifccParser::TypeContext::getRuleIndex() const {
  return ifccParser::RuleType;
}


antlrcpp::Any ifccParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::TypeContext* ifccParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 38, ifccParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(250);
    match(ifccParser::TYPE);
    setState(254);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(251);
        match(ifccParser::DEREFERENCE); 
      }
      setState(256);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstanteContext ------------------------------------------------------------------

ifccParser::ConstanteContext::ConstanteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::ConstanteContext::NUMBER() {
  return getToken(ifccParser::NUMBER, 0);
}

tree::TerminalNode* ifccParser::ConstanteContext::CHAR() {
  return getToken(ifccParser::CHAR, 0);
}


size_t ifccParser::ConstanteContext::getRuleIndex() const {
  return ifccParser::RuleConstante;
}


antlrcpp::Any ifccParser::ConstanteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitConstante(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ConstanteContext* ifccParser::constante() {
  ConstanteContext *_localctx = _tracker.createInstance<ConstanteContext>(_ctx, getState());
  enterRule(_localctx, 40, ifccParser::RuleConstante);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    _la = _input->LA(1);
    if (!(_la == ifccParser::NUMBER

    || _la == ifccParser::CHAR)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ifccParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 4: return lvalue_expressionSempred(dynamic_cast<Lvalue_expressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ifccParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 16);
    case 1: return precpred(_ctx, 15);
    case 2: return precpred(_ctx, 14);
    case 3: return precpred(_ctx, 13);
    case 4: return precpred(_ctx, 12);
    case 5: return precpred(_ctx, 11);
    case 6: return precpred(_ctx, 10);
    case 7: return precpred(_ctx, 9);
    case 8: return precpred(_ctx, 8);
    case 9: return precpred(_ctx, 7);

  default:
    break;
  }
  return true;
}

bool ifccParser::lvalue_expressionSempred(Lvalue_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 10: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ifccParser::_decisionToDFA;
atn::PredictionContextCache ifccParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ifccParser::_atn;
std::vector<uint16_t> ifccParser::_serializedATN;

std::vector<std::string> ifccParser::_ruleNames = {
  "axiom", "prog", "bloc", "expression", "lvalue_expression", "equalityOperator", 
  "relationalOperator", "bitShiftOperator", "multOperator", "addOperator", 
  "unaryOperator", "condition_bloc", "loop_bloc", "function_call", "declaration", 
  "affectation", "parameter", "function_declaration", "statement", "type", 
  "constante"
};

std::vector<std::string> ifccParser::_literalNames = {
  "", "'{'", "'}'", "'['", "']'", "'('", "')'", "'while('", "','", "';'", 
  "", "", "'>>'", "'<<'", "", "'/'", "'%'", "'--'", "'-'", "'++'", "'+'", 
  "'<='", "'<'", "'>='", "'>'", "'!='", "'=='", "", "'^'", "'|'", "'&&'", 
  "'||'", "'='", "'!'", "'~'", "'if'", "'else if'", "'else'", "'return'"
};

std::vector<std::string> ifccParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "DEREFERENCE", "ADDRESSOF", "RIGHTSHIFT", 
  "LEFTSHIFT", "MULTIPLY", "DIVIDE", "MOD", "DECREMENT", "MINUS", "INCREMENT", 
  "PLUS", "LESSEQUAL", "LESS", "GREATEREQUAL", "GREATER", "NOTEQUAL", "EQUAL", 
  "BAND", "BXOR", "BOR", "AND", "OR", "EGAL", "NOT", "BNOT", "IF", "ELSEIF", 
  "ELSE", "RETURN", "TYPE", "NUMBER", "CHAR", "COMMENT", "DIRECTIVE", "WS", 
  "VAR"
};

dfa::Vocabulary ifccParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ifccParser::_tokenNames;

ifccParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x2f, 0x106, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x7, 0x3, 0x31, 0xa, 0x3, 0xc, 0x3, 
       0xe, 0x3, 0x34, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x38, 0xa, 
       0x4, 0xc, 0x4, 0xe, 0x4, 0x3b, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x5, 0x5, 0x4d, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 
       0x72, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x75, 0xb, 0x5, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x81, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x88, 0xa, 0x6, 0xc, 0x6, 
       0xe, 0x6, 0x8b, 0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xa1, 0xa, 0xc, 0x3, 0xd, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0xae, 0xa, 0xd, 0xc, 
       0xd, 0xe, 0xd, 0xb1, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xb5, 
       0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xbf, 0xa, 0xf, 0x3, 0xf, 0x3, 
       0xf, 0x7, 0xf, 0xc3, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xc6, 0xb, 0xf, 
       0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xcd, 
       0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xd7, 0xa, 0x12, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xdd, 0xa, 0x13, 
       0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0xe1, 0xa, 0x13, 0xc, 0x13, 0xe, 
       0x13, 0xe4, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 
       0xfb, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0xff, 0xa, 0x15, 
       0xc, 0x15, 0xe, 0x15, 0x102, 0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 
       0x16, 0x2, 0x4, 0x8, 0xa, 0x17, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
       0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
       0x26, 0x28, 0x2a, 0x2, 0x8, 0x3, 0x2, 0x1b, 0x1c, 0x3, 0x2, 0x17, 
       0x1a, 0x3, 0x2, 0xe, 0xf, 0x3, 0x2, 0x10, 0x12, 0x4, 0x2, 0x14, 0x14, 
       0x16, 0x16, 0x3, 0x2, 0x2a, 0x2b, 0x2, 0x118, 0x2, 0x2c, 0x3, 0x2, 
       0x2, 0x2, 0x4, 0x32, 0x3, 0x2, 0x2, 0x2, 0x6, 0x35, 0x3, 0x2, 0x2, 
       0x2, 0x8, 0x4c, 0x3, 0x2, 0x2, 0x2, 0xa, 0x80, 0x3, 0x2, 0x2, 0x2, 
       0xc, 0x8c, 0x3, 0x2, 0x2, 0x2, 0xe, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x10, 
       0x90, 0x3, 0x2, 0x2, 0x2, 0x12, 0x92, 0x3, 0x2, 0x2, 0x2, 0x14, 0x94, 
       0x3, 0x2, 0x2, 0x2, 0x16, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x18, 0xa2, 0x3, 
       0x2, 0x2, 0x2, 0x1a, 0xb6, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xbb, 0x3, 0x2, 
       0x2, 0x2, 0x1e, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x20, 0xce, 0x3, 0x2, 0x2, 
       0x2, 0x22, 0xd2, 0x3, 0x2, 0x2, 0x2, 0x24, 0xd8, 0x3, 0x2, 0x2, 0x2, 
       0x26, 0xfa, 0x3, 0x2, 0x2, 0x2, 0x28, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x2a, 
       0x103, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x5, 0x4, 0x3, 0x2, 0x2d, 
       0x2e, 0x7, 0x2, 0x2, 0x3, 0x2e, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x31, 
       0x5, 0x24, 0x13, 0x2, 0x30, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x31, 0x34, 
       0x3, 0x2, 0x2, 0x2, 0x32, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x3, 
       0x2, 0x2, 0x2, 0x33, 0x5, 0x3, 0x2, 0x2, 0x2, 0x34, 0x32, 0x3, 0x2, 
       0x2, 0x2, 0x35, 0x39, 0x7, 0x3, 0x2, 0x2, 0x36, 0x38, 0x5, 0x26, 
       0x14, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3b, 0x3, 0x2, 
       0x2, 0x2, 0x39, 0x37, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 0x2, 
       0x2, 0x3a, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x39, 0x3, 0x2, 0x2, 0x2, 
       0x3c, 0x3d, 0x7, 0x4, 0x2, 0x2, 0x3d, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3e, 
       0x3f, 0x8, 0x5, 0x1, 0x2, 0x3f, 0x4d, 0x5, 0x16, 0xc, 0x2, 0x40, 
       0x4d, 0x5, 0x2a, 0x16, 0x2, 0x41, 0x4d, 0x5, 0xa, 0x6, 0x2, 0x42, 
       0x43, 0x5, 0xa, 0x6, 0x2, 0x43, 0x44, 0x7, 0x5, 0x2, 0x2, 0x44, 0x45, 
       0x5, 0x8, 0x5, 0x2, 0x45, 0x46, 0x7, 0x6, 0x2, 0x2, 0x46, 0x4d, 0x3, 
       0x2, 0x2, 0x2, 0x47, 0x48, 0x7, 0x7, 0x2, 0x2, 0x48, 0x49, 0x5, 0x8, 
       0x5, 0x2, 0x49, 0x4a, 0x7, 0x8, 0x2, 0x2, 0x4a, 0x4d, 0x3, 0x2, 0x2, 
       0x2, 0x4b, 0x4d, 0x5, 0x1c, 0xf, 0x2, 0x4c, 0x3e, 0x3, 0x2, 0x2, 
       0x2, 0x4c, 0x40, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x41, 0x3, 0x2, 0x2, 0x2, 
       0x4c, 0x42, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4c, 
       0x4b, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x73, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 
       0xc, 0x12, 0x2, 0x2, 0x4f, 0x50, 0x5, 0x12, 0xa, 0x2, 0x50, 0x51, 
       0x5, 0x8, 0x5, 0x13, 0x51, 0x72, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 
       0xc, 0x11, 0x2, 0x2, 0x53, 0x54, 0x5, 0x14, 0xb, 0x2, 0x54, 0x55, 
       0x5, 0x8, 0x5, 0x12, 0x55, 0x72, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 
       0xc, 0x10, 0x2, 0x2, 0x57, 0x58, 0x5, 0x10, 0x9, 0x2, 0x58, 0x59, 
       0x5, 0x8, 0x5, 0x11, 0x59, 0x72, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 
       0xc, 0xf, 0x2, 0x2, 0x5b, 0x5c, 0x5, 0xe, 0x8, 0x2, 0x5c, 0x5d, 0x5, 
       0x8, 0x5, 0x10, 0x5d, 0x72, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0xc, 
       0xe, 0x2, 0x2, 0x5f, 0x60, 0x5, 0xc, 0x7, 0x2, 0x60, 0x61, 0x5, 0x8, 
       0x5, 0xf, 0x61, 0x72, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0xc, 0xd, 0x2, 
       0x2, 0x63, 0x64, 0x7, 0x1d, 0x2, 0x2, 0x64, 0x72, 0x5, 0x8, 0x5, 
       0xe, 0x65, 0x66, 0xc, 0xc, 0x2, 0x2, 0x66, 0x67, 0x7, 0x1e, 0x2, 
       0x2, 0x67, 0x72, 0x5, 0x8, 0x5, 0xd, 0x68, 0x69, 0xc, 0xb, 0x2, 0x2, 
       0x69, 0x6a, 0x7, 0x1f, 0x2, 0x2, 0x6a, 0x72, 0x5, 0x8, 0x5, 0xc, 
       0x6b, 0x6c, 0xc, 0xa, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x20, 0x2, 0x2, 
       0x6d, 0x72, 0x5, 0x8, 0x5, 0xb, 0x6e, 0x6f, 0xc, 0x9, 0x2, 0x2, 0x6f, 
       0x70, 0x7, 0x21, 0x2, 0x2, 0x70, 0x72, 0x5, 0x8, 0x5, 0xa, 0x71, 
       0x4e, 0x3, 0x2, 0x2, 0x2, 0x71, 0x52, 0x3, 0x2, 0x2, 0x2, 0x71, 0x56, 
       0x3, 0x2, 0x2, 0x2, 0x71, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x71, 0x5e, 0x3, 
       0x2, 0x2, 0x2, 0x71, 0x62, 0x3, 0x2, 0x2, 0x2, 0x71, 0x65, 0x3, 0x2, 
       0x2, 0x2, 0x71, 0x68, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6b, 0x3, 0x2, 0x2, 
       0x2, 0x71, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x72, 0x75, 0x3, 0x2, 0x2, 0x2, 
       0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 
       0x9, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 
       0x8, 0x6, 0x1, 0x2, 0x77, 0x81, 0x7, 0x2f, 0x2, 0x2, 0x78, 0x79, 
       0x7, 0xc, 0x2, 0x2, 0x79, 0x81, 0x5, 0xa, 0x6, 0x6, 0x7a, 0x7b, 0x7, 
       0xd, 0x2, 0x2, 0x7b, 0x81, 0x5, 0xa, 0x6, 0x5, 0x7c, 0x7d, 0x7, 0x7, 
       0x2, 0x2, 0x7d, 0x7e, 0x5, 0xa, 0x6, 0x2, 0x7e, 0x7f, 0x7, 0x8, 0x2, 
       0x2, 0x7f, 0x81, 0x3, 0x2, 0x2, 0x2, 0x80, 0x76, 0x3, 0x2, 0x2, 0x2, 
       0x80, 0x78, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x80, 
       0x7c, 0x3, 0x2, 0x2, 0x2, 0x81, 0x89, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 
       0xc, 0x4, 0x2, 0x2, 0x83, 0x84, 0x7, 0x5, 0x2, 0x2, 0x84, 0x85, 0x5, 
       0x8, 0x5, 0x2, 0x85, 0x86, 0x7, 0x6, 0x2, 0x2, 0x86, 0x88, 0x3, 0x2, 
       0x2, 0x2, 0x87, 0x82, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8b, 0x3, 0x2, 0x2, 
       0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 
       0x8a, 0xb, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8c, 
       0x8d, 0x9, 0x2, 0x2, 0x2, 0x8d, 0xd, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 
       0x9, 0x3, 0x2, 0x2, 0x8f, 0xf, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x9, 
       0x4, 0x2, 0x2, 0x91, 0x11, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x9, 0x5, 
       0x2, 0x2, 0x93, 0x13, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x9, 0x6, 0x2, 
       0x2, 0x95, 0x15, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x7, 0x15, 0x2, 
       0x2, 0x97, 0xa1, 0x5, 0xa, 0x6, 0x2, 0x98, 0x99, 0x7, 0x13, 0x2, 
       0x2, 0x99, 0xa1, 0x5, 0xa, 0x6, 0x2, 0x9a, 0x9b, 0x7, 0x16, 0x2, 
       0x2, 0x9b, 0xa1, 0x5, 0xa, 0x6, 0x2, 0x9c, 0x9d, 0x7, 0x14, 0x2, 
       0x2, 0x9d, 0xa1, 0x5, 0xa, 0x6, 0x2, 0x9e, 0x9f, 0x7, 0x23, 0x2, 
       0x2, 0x9f, 0xa1, 0x5, 0x8, 0x5, 0x2, 0xa0, 0x96, 0x3, 0x2, 0x2, 0x2, 
       0xa0, 0x98, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9a, 0x3, 0x2, 0x2, 0x2, 0xa0, 
       0x9c, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x17, 
       0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x7, 0x25, 0x2, 0x2, 0xa3, 0xa4, 
       0x7, 0x7, 0x2, 0x2, 0xa4, 0xa5, 0x5, 0x8, 0x5, 0x2, 0xa5, 0xa6, 0x7, 
       0x8, 0x2, 0x2, 0xa6, 0xaf, 0x5, 0x6, 0x4, 0x2, 0xa7, 0xa8, 0x7, 0x26, 
       0x2, 0x2, 0xa8, 0xa9, 0x7, 0x7, 0x2, 0x2, 0xa9, 0xaa, 0x5, 0x8, 0x5, 
       0x2, 0xaa, 0xab, 0x7, 0x8, 0x2, 0x2, 0xab, 0xac, 0x5, 0x6, 0x4, 0x2, 
       0xac, 0xae, 0x3, 0x2, 0x2, 0x2, 0xad, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xae, 
       0xb1, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 
       0x3, 0x2, 0x2, 0x2, 0xb0, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xaf, 0x3, 
       0x2, 0x2, 0x2, 0xb2, 0xb3, 0x7, 0x27, 0x2, 0x2, 0xb3, 0xb5, 0x5, 
       0x6, 0x4, 0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x3, 0x2, 
       0x2, 0x2, 0xb5, 0x19, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0x9, 0x2, 
       0x2, 0xb7, 0xb8, 0x5, 0x8, 0x5, 0x2, 0xb8, 0xb9, 0x7, 0x8, 0x2, 0x2, 
       0xb9, 0xba, 0x5, 0x6, 0x4, 0x2, 0xba, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xbb, 
       0xbc, 0x7, 0x2f, 0x2, 0x2, 0xbc, 0xbe, 0x7, 0x7, 0x2, 0x2, 0xbd, 
       0xbf, 0x5, 0x8, 0x5, 0x2, 0xbe, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 
       0x3, 0x2, 0x2, 0x2, 0xbf, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x7, 
       0xa, 0x2, 0x2, 0xc1, 0xc3, 0x5, 0x8, 0x5, 0x2, 0xc2, 0xc0, 0x3, 0x2, 
       0x2, 0x2, 0xc3, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc2, 0x3, 0x2, 0x2, 
       0x2, 0xc4, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc7, 0x3, 0x2, 0x2, 0x2, 
       0xc6, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0x8, 0x2, 0x2, 0xc8, 
       0x1d, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xcc, 0x5, 0x28, 0x15, 0x2, 0xca, 
       0xcd, 0x7, 0x2f, 0x2, 0x2, 0xcb, 0xcd, 0x5, 0x20, 0x11, 0x2, 0xcc, 
       0xca, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcd, 0x1f, 
       0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x5, 0xa, 0x6, 0x2, 0xcf, 0xd0, 0x7, 
       0x22, 0x2, 0x2, 0xd0, 0xd1, 0x5, 0x8, 0x5, 0x2, 0xd1, 0x21, 0x3, 
       0x2, 0x2, 0x2, 0xd2, 0xd3, 0x5, 0x28, 0x15, 0x2, 0xd3, 0xd6, 0x7, 
       0x2f, 0x2, 0x2, 0xd4, 0xd5, 0x7, 0x22, 0x2, 0x2, 0xd5, 0xd7, 0x5, 
       0x2a, 0x16, 0x2, 0xd6, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x3, 
       0x2, 0x2, 0x2, 0xd7, 0x23, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x5, 0x28, 
       0x15, 0x2, 0xd9, 0xda, 0x7, 0x2f, 0x2, 0x2, 0xda, 0xdc, 0x7, 0x7, 
       0x2, 0x2, 0xdb, 0xdd, 0x5, 0x22, 0x12, 0x2, 0xdc, 0xdb, 0x3, 0x2, 
       0x2, 0x2, 0xdc, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xe2, 0x3, 0x2, 0x2, 
       0x2, 0xde, 0xdf, 0x7, 0xa, 0x2, 0x2, 0xdf, 0xe1, 0x5, 0x22, 0x12, 
       0x2, 0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe4, 0x3, 0x2, 0x2, 0x2, 
       0xe2, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe3, 
       0xe5, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 
       0x7, 0x8, 0x2, 0x2, 0xe6, 0xe7, 0x5, 0x6, 0x4, 0x2, 0xe7, 0x25, 0x3, 
       0x2, 0x2, 0x2, 0xe8, 0xe9, 0x7, 0x28, 0x2, 0x2, 0xe9, 0xea, 0x5, 
       0x8, 0x5, 0x2, 0xea, 0xeb, 0x7, 0xb, 0x2, 0x2, 0xeb, 0xfb, 0x3, 0x2, 
       0x2, 0x2, 0xec, 0xed, 0x5, 0x1e, 0x10, 0x2, 0xed, 0xee, 0x7, 0xb, 
       0x2, 0x2, 0xee, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x5, 0x20, 
       0x11, 0x2, 0xf0, 0xf1, 0x7, 0xb, 0x2, 0x2, 0xf1, 0xfb, 0x3, 0x2, 
       0x2, 0x2, 0xf2, 0xf3, 0x5, 0x16, 0xc, 0x2, 0xf3, 0xf4, 0x7, 0xb, 
       0x2, 0x2, 0xf4, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x5, 0x1c, 
       0xf, 0x2, 0xf6, 0xf7, 0x7, 0xb, 0x2, 0x2, 0xf7, 0xfb, 0x3, 0x2, 0x2, 
       0x2, 0xf8, 0xfb, 0x5, 0x18, 0xd, 0x2, 0xf9, 0xfb, 0x5, 0x1a, 0xe, 
       0x2, 0xfa, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xec, 0x3, 0x2, 0x2, 0x2, 
       0xfa, 0xef, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xfa, 
       0xf5, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xf9, 
       0x3, 0x2, 0x2, 0x2, 0xfb, 0x27, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x100, 
       0x7, 0x29, 0x2, 0x2, 0xfd, 0xff, 0x7, 0xc, 0x2, 0x2, 0xfe, 0xfd, 
       0x3, 0x2, 0x2, 0x2, 0xff, 0x102, 0x3, 0x2, 0x2, 0x2, 0x100, 0xfe, 
       0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x3, 0x2, 0x2, 0x2, 0x101, 0x29, 
       0x3, 0x2, 0x2, 0x2, 0x102, 0x100, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 
       0x9, 0x7, 0x2, 0x2, 0x104, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x14, 0x32, 
       0x39, 0x4c, 0x71, 0x73, 0x80, 0x89, 0xa0, 0xaf, 0xb4, 0xbe, 0xc4, 
       0xcc, 0xd6, 0xdc, 0xe2, 0xfa, 0x100, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ifccParser::Initializer ifccParser::_init;
