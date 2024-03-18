
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
    setState(38);
    prog();
    setState(39);
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
    setState(44);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::TYPE) {
      setState(41);
      function_declaration();
      setState(46);
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
    setState(47);
    match(ifccParser::T__0);
    setState(51);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::T__4)
      | (1ULL << ifccParser::T__7)
      | (1ULL << ifccParser::DECREMENT)
      | (1ULL << ifccParser::MINUS)
      | (1ULL << ifccParser::INCREMENT)
      | (1ULL << ifccParser::PLUS)
      | (1ULL << ifccParser::NOT)
      | (1ULL << ifccParser::RETURN)
      | (1ULL << ifccParser::TYPE)
      | (1ULL << ifccParser::VAR))) != 0)) {
      setState(48);
      statement();
      setState(53);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(54);
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
//----------------- VarContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::VarContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::VarContext::VarContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::VarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryContext ------------------------------------------------------------------

ifccParser::UnaryOperatorContext* ifccParser::UnaryContext::unaryOperator() {
  return getRuleContext<ifccParser::UnaryOperatorContext>(0);
}

ifccParser::ExpressionContext* ifccParser::UnaryContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
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
    setState(67);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<UnaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(57);
      unaryOperator();
      setState(58);
      expression(5);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ConstContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(60);
      constante();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<VarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(61);
      match(ifccParser::VAR);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ParContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(62);
      match(ifccParser::T__2);
      setState(63);
      expression(0);
      setState(64);
      match(ifccParser::T__3);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<Func_callContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(66);
      function_call();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(106);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(104);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(69);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(70);
          multOperator();
          setState(71);
          expression(16);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(73);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(74);
          addOperator();
          setState(75);
          expression(15);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BitshiftContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(77);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(78);
          bitShiftOperator();
          setState(79);
          expression(14);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<RelationalContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(81);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(82);
          relationalOperator();
          setState(83);
          expression(13);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<EqualityContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(85);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(86);
          equalityOperator();
          setState(87);
          expression(12);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<BandContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(89);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(90);
          match(ifccParser::BAND);
          setState(91);
          expression(11);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<BxorContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(92);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(93);
          match(ifccParser::BXOR);
          setState(94);
          expression(10);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BorContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(95);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(96);
          match(ifccParser::BOR);
          setState(97);
          expression(9);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<AndContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(98);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(99);
          match(ifccParser::AND);
          setState(100);
          expression(8);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<OrContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(101);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(102);
          match(ifccParser::OR);
          setState(103);
          expression(7);
          break;
        }

        default:
          break;
        } 
      }
      setState(108);
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
  enterRule(_localctx, 8, ifccParser::RuleEqualityOperator);
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
    setState(109);
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
  enterRule(_localctx, 10, ifccParser::RuleRelationalOperator);
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
    setState(111);
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
  enterRule(_localctx, 12, ifccParser::RuleBitShiftOperator);
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
    setState(113);
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
  enterRule(_localctx, 14, ifccParser::RuleMultOperator);
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
    setState(115);
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
  enterRule(_localctx, 16, ifccParser::RuleAddOperator);
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
    setState(117);
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
  enterRule(_localctx, 18, ifccParser::RuleUnaryOperator);
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
    setState(119);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::DECREMENT)
      | (1ULL << ifccParser::MINUS)
      | (1ULL << ifccParser::INCREMENT)
      | (1ULL << ifccParser::PLUS)
      | (1ULL << ifccParser::NOT))) != 0))) {
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

//----------------- Condition_blocContext ------------------------------------------------------------------

ifccParser::Condition_blocContext::Condition_blocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
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
  enterRule(_localctx, 20, ifccParser::RuleCondition_bloc);
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
    setState(121);
    match(ifccParser::T__4);
    setState(122);
    expression(0);
    setState(123);
    match(ifccParser::T__3);
    setState(124);
    bloc();
    setState(132);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::T__5) {
      setState(125);
      match(ifccParser::T__5);
      setState(126);
      expression(0);
      setState(127);
      match(ifccParser::T__3);
      setState(128);
      bloc();
      setState(134);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(137);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ifccParser::T__6) {
      setState(135);
      match(ifccParser::T__6);
      setState(136);
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
  enterRule(_localctx, 22, ifccParser::RuleLoop_bloc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    match(ifccParser::T__7);
    setState(140);
    expression(0);
    setState(141);
    match(ifccParser::T__3);
    setState(142);
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
  enterRule(_localctx, 24, ifccParser::RuleFunction_call);
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
    match(ifccParser::VAR);
    setState(145);
    match(ifccParser::T__2);
    setState(146);
    expression(0);
    setState(151);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::T__8) {
      setState(147);
      match(ifccParser::T__8);
      setState(148);
      expression(0);
      setState(153);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(154);
    match(ifccParser::T__3);
   
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

tree::TerminalNode* ifccParser::DeclarationContext::TYPE() {
  return getToken(ifccParser::TYPE, 0);
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
  enterRule(_localctx, 26, ifccParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(ifccParser::TYPE);
    setState(159);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(157);
      match(ifccParser::VAR);
      break;
    }

    case 2: {
      setState(158);
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

tree::TerminalNode* ifccParser::AffectationContext::VAR() {
  return getToken(ifccParser::VAR, 0);
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
  enterRule(_localctx, 28, ifccParser::RuleAffectation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    match(ifccParser::VAR);
    setState(162);
    match(ifccParser::EGAL);
    setState(163);
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

tree::TerminalNode* ifccParser::ParameterContext::TYPE() {
  return getToken(ifccParser::TYPE, 0);
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
  enterRule(_localctx, 30, ifccParser::RuleParameter);
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
    setState(165);
    match(ifccParser::TYPE);
    setState(166);
    match(ifccParser::VAR);
    setState(169);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ifccParser::EGAL) {
      setState(167);
      match(ifccParser::EGAL);
      setState(168);
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

tree::TerminalNode* ifccParser::Function_declarationContext::TYPE() {
  return getToken(ifccParser::TYPE, 0);
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
  enterRule(_localctx, 32, ifccParser::RuleFunction_declaration);
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
    setState(171);
    match(ifccParser::TYPE);
    setState(172);
    match(ifccParser::VAR);
    setState(173);
    match(ifccParser::T__2);
    setState(175);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ifccParser::TYPE) {
      setState(174);
      parameter();
    }
    setState(181);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::T__8) {
      setState(177);
      match(ifccParser::T__8);
      setState(178);
      parameter();
      setState(183);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(184);
    match(ifccParser::T__3);
    setState(185);
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

ifccParser::ExpressionContext* ifccParser::Unary_stmtContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
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
  enterRule(_localctx, 34, ifccParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(206);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::Return_stmtContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(187);
      match(ifccParser::RETURN);
      setState(188);
      expression(0);
      setState(189);
      match(ifccParser::T__9);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::Declaration_stmtContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(191);
      declaration();
      setState(192);
      match(ifccParser::T__9);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::Affectation_stmtContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(194);
      affectation();
      setState(195);
      match(ifccParser::T__9);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::Unary_stmtContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(197);
      unaryOperator();
      setState(198);
      expression(0);
      setState(199);
      match(ifccParser::T__9);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::Func_call_stmtContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(201);
      function_call();
      setState(202);
      match(ifccParser::T__9);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::ConditionContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(204);
      condition_bloc();
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::LoopContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(205);
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
  enterRule(_localctx, 36, ifccParser::RuleConstante);
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

  default:
    break;
  }
  return true;
}

bool ifccParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 15);
    case 1: return precpred(_ctx, 14);
    case 2: return precpred(_ctx, 13);
    case 3: return precpred(_ctx, 12);
    case 4: return precpred(_ctx, 11);
    case 5: return precpred(_ctx, 10);
    case 6: return precpred(_ctx, 9);
    case 7: return precpred(_ctx, 8);
    case 8: return precpred(_ctx, 7);
    case 9: return precpred(_ctx, 6);

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
  "axiom", "prog", "bloc", "expression", "equalityOperator", "relationalOperator", 
  "bitShiftOperator", "multOperator", "addOperator", "unaryOperator", "condition_bloc", 
  "loop_bloc", "function_call", "declaration", "affectation", "parameter", 
  "function_declaration", "statement", "constante"
};

std::vector<std::string> ifccParser::_literalNames = {
  "", "'{'", "'}'", "'('", "')'", "'if('", "'else if('", "'else'", "'while('", 
  "','", "';'", "'>>'", "'<<'", "'*'", "'/'", "'%'", "'--'", "'-'", "'++'", 
  "'+'", "'<='", "'<'", "'>='", "'>'", "'!='", "'=='", "'&'", "'^'", "'|'", 
  "'&&'", "'||'", "'='", "'!'", "'~'", "'return'"
};

std::vector<std::string> ifccParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "RIGHTSHIFT", "LEFTSHIFT", 
  "MULTIPLY", "DIVIDE", "MOD", "DECREMENT", "MINUS", "INCREMENT", "PLUS", 
  "LESSEQUAL", "LESS", "GREATEREQUAL", "GREATER", "NOTEQUAL", "EQUAL", "BAND", 
  "BXOR", "BOR", "AND", "OR", "EGAL", "NOT", "BNOT", "RETURN", "TYPE", "NUMBER", 
  "CHAR", "COMMENT", "DIRECTIVE", "WS", "VAR"
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
       0x3, 0x2b, 0xd5, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x7, 0x3, 0x2d, 
       0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x30, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 
       0x7, 0x4, 0x34, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x37, 0xb, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 
       0x5, 0x46, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x6b, 0xa, 
       0x5, 0xc, 0x5, 0xe, 0x5, 0x6e, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 
       0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 
       0x85, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x88, 0xb, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x5, 0xc, 0x8c, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
       0x7, 0xe, 0x98, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x9b, 0xb, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xa2, 0xa, 
       0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xac, 0xa, 0x11, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xb2, 0xa, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x7, 0x12, 0xb6, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 
       0xb9, 0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 
       0x13, 0xd1, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x2, 0x3, 
       0x8, 0x15, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
       0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x2, 0x9, 0x3, 0x2, 
       0x1a, 0x1b, 0x3, 0x2, 0x16, 0x19, 0x3, 0x2, 0xd, 0xe, 0x3, 0x2, 0xf, 
       0x11, 0x4, 0x2, 0x13, 0x13, 0x15, 0x15, 0x4, 0x2, 0x12, 0x15, 0x22, 
       0x22, 0x3, 0x2, 0x26, 0x27, 0x2, 0xde, 0x2, 0x28, 0x3, 0x2, 0x2, 
       0x2, 0x4, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x6, 0x31, 0x3, 0x2, 0x2, 0x2, 
       0x8, 0x45, 0x3, 0x2, 0x2, 0x2, 0xa, 0x6f, 0x3, 0x2, 0x2, 0x2, 0xc, 
       0x71, 0x3, 0x2, 0x2, 0x2, 0xe, 0x73, 0x3, 0x2, 0x2, 0x2, 0x10, 0x75, 
       0x3, 0x2, 0x2, 0x2, 0x12, 0x77, 0x3, 0x2, 0x2, 0x2, 0x14, 0x79, 0x3, 
       0x2, 0x2, 0x2, 0x16, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x18, 0x8d, 0x3, 0x2, 
       0x2, 0x2, 0x1a, 0x92, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x9e, 0x3, 0x2, 0x2, 
       0x2, 0x1e, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x20, 0xa7, 0x3, 0x2, 0x2, 0x2, 
       0x22, 0xad, 0x3, 0x2, 0x2, 0x2, 0x24, 0xd0, 0x3, 0x2, 0x2, 0x2, 0x26, 
       0xd2, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x5, 0x4, 0x3, 0x2, 0x29, 0x2a, 
       0x7, 0x2, 0x2, 0x3, 0x2a, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2d, 0x5, 
       0x22, 0x12, 0x2, 0x2c, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x30, 0x3, 
       0x2, 0x2, 0x2, 0x2e, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x3, 0x2, 
       0x2, 0x2, 0x2f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2e, 0x3, 0x2, 0x2, 
       0x2, 0x31, 0x35, 0x7, 0x3, 0x2, 0x2, 0x32, 0x34, 0x5, 0x24, 0x13, 
       0x2, 0x33, 0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 0x37, 0x3, 0x2, 0x2, 0x2, 
       0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 0x2, 0x2, 0x36, 
       0x38, 0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 
       0x7, 0x4, 0x2, 0x2, 0x39, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x8, 
       0x5, 0x1, 0x2, 0x3b, 0x3c, 0x5, 0x14, 0xb, 0x2, 0x3c, 0x3d, 0x5, 
       0x8, 0x5, 0x7, 0x3d, 0x46, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x46, 0x5, 0x26, 
       0x14, 0x2, 0x3f, 0x46, 0x7, 0x2b, 0x2, 0x2, 0x40, 0x41, 0x7, 0x5, 
       0x2, 0x2, 0x41, 0x42, 0x5, 0x8, 0x5, 0x2, 0x42, 0x43, 0x7, 0x6, 0x2, 
       0x2, 0x43, 0x46, 0x3, 0x2, 0x2, 0x2, 0x44, 0x46, 0x5, 0x1a, 0xe, 
       0x2, 0x45, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x45, 0x3e, 0x3, 0x2, 0x2, 0x2, 
       0x45, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x45, 0x40, 0x3, 0x2, 0x2, 0x2, 0x45, 
       0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 
       0xc, 0x11, 0x2, 0x2, 0x48, 0x49, 0x5, 0x10, 0x9, 0x2, 0x49, 0x4a, 
       0x5, 0x8, 0x5, 0x12, 0x4a, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 
       0xc, 0x10, 0x2, 0x2, 0x4c, 0x4d, 0x5, 0x12, 0xa, 0x2, 0x4d, 0x4e, 
       0x5, 0x8, 0x5, 0x11, 0x4e, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 
       0xc, 0xf, 0x2, 0x2, 0x50, 0x51, 0x5, 0xe, 0x8, 0x2, 0x51, 0x52, 0x5, 
       0x8, 0x5, 0x10, 0x52, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0xc, 
       0xe, 0x2, 0x2, 0x54, 0x55, 0x5, 0xc, 0x7, 0x2, 0x55, 0x56, 0x5, 0x8, 
       0x5, 0xf, 0x56, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0xc, 0xd, 0x2, 
       0x2, 0x58, 0x59, 0x5, 0xa, 0x6, 0x2, 0x59, 0x5a, 0x5, 0x8, 0x5, 0xe, 
       0x5a, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0xc, 0xc, 0x2, 0x2, 0x5c, 
       0x5d, 0x7, 0x1c, 0x2, 0x2, 0x5d, 0x6b, 0x5, 0x8, 0x5, 0xd, 0x5e, 
       0x5f, 0xc, 0xb, 0x2, 0x2, 0x5f, 0x60, 0x7, 0x1d, 0x2, 0x2, 0x60, 
       0x6b, 0x5, 0x8, 0x5, 0xc, 0x61, 0x62, 0xc, 0xa, 0x2, 0x2, 0x62, 0x63, 
       0x7, 0x1e, 0x2, 0x2, 0x63, 0x6b, 0x5, 0x8, 0x5, 0xb, 0x64, 0x65, 
       0xc, 0x9, 0x2, 0x2, 0x65, 0x66, 0x7, 0x1f, 0x2, 0x2, 0x66, 0x6b, 
       0x5, 0x8, 0x5, 0xa, 0x67, 0x68, 0xc, 0x8, 0x2, 0x2, 0x68, 0x69, 0x7, 
       0x20, 0x2, 0x2, 0x69, 0x6b, 0x5, 0x8, 0x5, 0x9, 0x6a, 0x47, 0x3, 
       0x2, 0x2, 0x2, 0x6a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x4f, 0x3, 0x2, 
       0x2, 0x2, 0x6a, 0x53, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x57, 0x3, 0x2, 0x2, 
       0x2, 0x6a, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x5e, 0x3, 0x2, 0x2, 0x2, 
       0x6a, 0x61, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x64, 0x3, 0x2, 0x2, 0x2, 0x6a, 
       0x67, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6a, 
       0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x9, 0x3, 
       0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x9, 0x2, 
       0x2, 0x2, 0x70, 0xb, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x9, 0x3, 0x2, 
       0x2, 0x72, 0xd, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x9, 0x4, 0x2, 0x2, 
       0x74, 0xf, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x9, 0x5, 0x2, 0x2, 0x76, 
       0x11, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x9, 0x6, 0x2, 0x2, 0x78, 0x13, 
       0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x9, 0x7, 0x2, 0x2, 0x7a, 0x15, 0x3, 
       0x2, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0x7, 0x2, 0x2, 0x7c, 0x7d, 0x5, 0x8, 
       0x5, 0x2, 0x7d, 0x7e, 0x7, 0x6, 0x2, 0x2, 0x7e, 0x86, 0x5, 0x6, 0x4, 
       0x2, 0x7f, 0x80, 0x7, 0x8, 0x2, 0x2, 0x80, 0x81, 0x5, 0x8, 0x5, 0x2, 
       0x81, 0x82, 0x7, 0x6, 0x2, 0x2, 0x82, 0x83, 0x5, 0x6, 0x4, 0x2, 0x83, 
       0x85, 0x3, 0x2, 0x2, 0x2, 0x84, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x85, 0x88, 
       0x3, 0x2, 0x2, 0x2, 0x86, 0x84, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 
       0x2, 0x2, 0x2, 0x87, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 
       0x2, 0x2, 0x89, 0x8a, 0x7, 0x9, 0x2, 0x2, 0x8a, 0x8c, 0x5, 0x6, 0x4, 
       0x2, 0x8b, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 
       0x8c, 0x17, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0xa, 0x2, 0x2, 0x8e, 
       0x8f, 0x5, 0x8, 0x5, 0x2, 0x8f, 0x90, 0x7, 0x6, 0x2, 0x2, 0x90, 0x91, 
       0x5, 0x6, 0x4, 0x2, 0x91, 0x19, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x7, 
       0x2b, 0x2, 0x2, 0x93, 0x94, 0x7, 0x5, 0x2, 0x2, 0x94, 0x99, 0x5, 
       0x8, 0x5, 0x2, 0x95, 0x96, 0x7, 0xb, 0x2, 0x2, 0x96, 0x98, 0x5, 0x8, 
       0x5, 0x2, 0x97, 0x95, 0x3, 0x2, 0x2, 0x2, 0x98, 0x9b, 0x3, 0x2, 0x2, 
       0x2, 0x99, 0x97, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 
       0x9a, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9c, 
       0x9d, 0x7, 0x6, 0x2, 0x2, 0x9d, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa1, 
       0x7, 0x25, 0x2, 0x2, 0x9f, 0xa2, 0x7, 0x2b, 0x2, 0x2, 0xa0, 0xa2, 
       0x5, 0x1e, 0x10, 0x2, 0xa1, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa0, 
       0x3, 0x2, 0x2, 0x2, 0xa2, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x7, 
       0x2b, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0x21, 0x2, 0x2, 0xa5, 0xa6, 0x5, 
       0x8, 0x5, 0x2, 0xa6, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x7, 0x25, 
       0x2, 0x2, 0xa8, 0xab, 0x7, 0x2b, 0x2, 0x2, 0xa9, 0xaa, 0x7, 0x21, 
       0x2, 0x2, 0xaa, 0xac, 0x5, 0x26, 0x14, 0x2, 0xab, 0xa9, 0x3, 0x2, 
       0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 0x21, 0x3, 0x2, 0x2, 
       0x2, 0xad, 0xae, 0x7, 0x25, 0x2, 0x2, 0xae, 0xaf, 0x7, 0x2b, 0x2, 
       0x2, 0xaf, 0xb1, 0x7, 0x5, 0x2, 0x2, 0xb0, 0xb2, 0x5, 0x20, 0x11, 
       0x2, 0xb1, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x3, 0x2, 0x2, 0x2, 
       0xb2, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x7, 0xb, 0x2, 0x2, 0xb4, 
       0xb6, 0x5, 0x20, 0x11, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb6, 
       0xb9, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 
       0x3, 0x2, 0x2, 0x2, 0xb8, 0xba, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 
       0x2, 0x2, 0x2, 0xba, 0xbb, 0x7, 0x6, 0x2, 0x2, 0xbb, 0xbc, 0x5, 0x6, 
       0x4, 0x2, 0xbc, 0x23, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x7, 0x24, 
       0x2, 0x2, 0xbe, 0xbf, 0x5, 0x8, 0x5, 0x2, 0xbf, 0xc0, 0x7, 0xc, 0x2, 
       0x2, 0xc0, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x5, 0x1c, 0xf, 
       0x2, 0xc2, 0xc3, 0x7, 0xc, 0x2, 0x2, 0xc3, 0xd1, 0x3, 0x2, 0x2, 0x2, 
       0xc4, 0xc5, 0x5, 0x1e, 0x10, 0x2, 0xc5, 0xc6, 0x7, 0xc, 0x2, 0x2, 
       0xc6, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x5, 0x14, 0xb, 0x2, 
       0xc8, 0xc9, 0x5, 0x8, 0x5, 0x2, 0xc9, 0xca, 0x7, 0xc, 0x2, 0x2, 0xca, 
       0xd1, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x5, 0x1a, 0xe, 0x2, 0xcc, 
       0xcd, 0x7, 0xc, 0x2, 0x2, 0xcd, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xce, 0xd1, 
       0x5, 0x16, 0xc, 0x2, 0xcf, 0xd1, 0x5, 0x18, 0xd, 0x2, 0xd0, 0xbd, 
       0x3, 0x2, 0x2, 0x2, 0xd0, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xc4, 0x3, 
       0x2, 0x2, 0x2, 0xd0, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xcb, 0x3, 0x2, 
       0x2, 0x2, 0xd0, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xcf, 0x3, 0x2, 0x2, 
       0x2, 0xd1, 0x25, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x9, 0x8, 0x2, 0x2, 
       0xd3, 0x27, 0x3, 0x2, 0x2, 0x2, 0xf, 0x2e, 0x35, 0x45, 0x6a, 0x6c, 
       0x86, 0x8b, 0x99, 0xa1, 0xab, 0xb1, 0xb7, 0xd0, 
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
