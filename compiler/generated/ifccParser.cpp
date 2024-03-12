
// Generated from ifcc.g4 by ANTLR 4.7.2


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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    prog();
    setState(73);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::TYPE) {
      setState(75);
      function_declaration();
      setState(80);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(ifccParser::T__0);
    setState(85);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::T__2)
      | (1ULL << ifccParser::T__4)
      | (1ULL << ifccParser::T__7)
      | (1ULL << ifccParser::DECREMENT)
      | (1ULL << ifccParser::MINUS)
      | (1ULL << ifccParser::INCREMENT)
      | (1ULL << ifccParser::PLUS)
      | (1ULL << ifccParser::NOT)
      | (1ULL << ifccParser::BNOT)
      | (1ULL << ifccParser::RETURN)
      | (1ULL << ifccParser::TYPE)
      | (1ULL << ifccParser::NUMBER)
      | (1ULL << ifccParser::CHAR)
      | (1ULL << ifccParser::VAR))) != 0)) {
      setState(82);
      statement();
      setState(87);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(88);
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

ifccParser::PrimaryExpressionContext* ifccParser::ExpressionContext::primaryExpression() {
  return getRuleContext<ifccParser::PrimaryExpressionContext>(0);
}

std::vector<ifccParser::ExpressionContext *> ifccParser::ExpressionContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

tree::TerminalNode* ifccParser::ExpressionContext::MULTIPLY() {
  return getToken(ifccParser::MULTIPLY, 0);
}

tree::TerminalNode* ifccParser::ExpressionContext::PLUS() {
  return getToken(ifccParser::PLUS, 0);
}


size_t ifccParser::ExpressionContext::getRuleIndex() const {
  return ifccParser::RuleExpression;
}

antlrcpp::Any ifccParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
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

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(91);
    primaryExpression();
    _ctx->stop = _input->LT(-1);
    setState(101);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(99);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(93);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(94);
          match(ifccParser::MULTIPLY);
          setState(95);
          expression(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(96);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(97);
          match(ifccParser::PLUS);
          setState(98);
          expression(3);
          break;
        }

        } 
      }
      setState(103);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- OrExpressionContext ------------------------------------------------------------------

ifccParser::OrExpressionContext::OrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::AndExpressionContext* ifccParser::OrExpressionContext::andExpression() {
  return getRuleContext<ifccParser::AndExpressionContext>(0);
}

std::vector<ifccParser::OrOperationContext *> ifccParser::OrExpressionContext::orOperation() {
  return getRuleContexts<ifccParser::OrOperationContext>();
}

ifccParser::OrOperationContext* ifccParser::OrExpressionContext::orOperation(size_t i) {
  return getRuleContext<ifccParser::OrOperationContext>(i);
}


size_t ifccParser::OrExpressionContext::getRuleIndex() const {
  return ifccParser::RuleOrExpression;
}

antlrcpp::Any ifccParser::OrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitOrExpression(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::OrExpressionContext* ifccParser::orExpression() {
  OrExpressionContext *_localctx = _tracker.createInstance<OrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 8, ifccParser::RuleOrExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    andExpression();
    setState(108);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::OR) {
      setState(105);
      orOperation();
      setState(110);
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

//----------------- OrOperationContext ------------------------------------------------------------------

ifccParser::OrOperationContext::OrOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::OrOperationContext::OR() {
  return getToken(ifccParser::OR, 0);
}

ifccParser::AndExpressionContext* ifccParser::OrOperationContext::andExpression() {
  return getRuleContext<ifccParser::AndExpressionContext>(0);
}


size_t ifccParser::OrOperationContext::getRuleIndex() const {
  return ifccParser::RuleOrOperation;
}

antlrcpp::Any ifccParser::OrOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitOrOperation(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::OrOperationContext* ifccParser::orOperation() {
  OrOperationContext *_localctx = _tracker.createInstance<OrOperationContext>(_ctx, getState());
  enterRule(_localctx, 10, ifccParser::RuleOrOperation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(ifccParser::OR);
    setState(112);
    andExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndExpressionContext ------------------------------------------------------------------

ifccParser::AndExpressionContext::AndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::BorExpressionContext* ifccParser::AndExpressionContext::borExpression() {
  return getRuleContext<ifccParser::BorExpressionContext>(0);
}

std::vector<ifccParser::AndOperationContext *> ifccParser::AndExpressionContext::andOperation() {
  return getRuleContexts<ifccParser::AndOperationContext>();
}

ifccParser::AndOperationContext* ifccParser::AndExpressionContext::andOperation(size_t i) {
  return getRuleContext<ifccParser::AndOperationContext>(i);
}


size_t ifccParser::AndExpressionContext::getRuleIndex() const {
  return ifccParser::RuleAndExpression;
}

antlrcpp::Any ifccParser::AndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAndExpression(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::AndExpressionContext* ifccParser::andExpression() {
  AndExpressionContext *_localctx = _tracker.createInstance<AndExpressionContext>(_ctx, getState());
  enterRule(_localctx, 12, ifccParser::RuleAndExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    borExpression();
    setState(118);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::AND) {
      setState(115);
      andOperation();
      setState(120);
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

//----------------- AndOperationContext ------------------------------------------------------------------

ifccParser::AndOperationContext::AndOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::AndOperationContext::AND() {
  return getToken(ifccParser::AND, 0);
}

ifccParser::BorExpressionContext* ifccParser::AndOperationContext::borExpression() {
  return getRuleContext<ifccParser::BorExpressionContext>(0);
}


size_t ifccParser::AndOperationContext::getRuleIndex() const {
  return ifccParser::RuleAndOperation;
}

antlrcpp::Any ifccParser::AndOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAndOperation(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::AndOperationContext* ifccParser::andOperation() {
  AndOperationContext *_localctx = _tracker.createInstance<AndOperationContext>(_ctx, getState());
  enterRule(_localctx, 14, ifccParser::RuleAndOperation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(ifccParser::AND);
    setState(122);
    borExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BorExpressionContext ------------------------------------------------------------------

ifccParser::BorExpressionContext::BorExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::BxorExpressionContext* ifccParser::BorExpressionContext::bxorExpression() {
  return getRuleContext<ifccParser::BxorExpressionContext>(0);
}

std::vector<ifccParser::BorOperationContext *> ifccParser::BorExpressionContext::borOperation() {
  return getRuleContexts<ifccParser::BorOperationContext>();
}

ifccParser::BorOperationContext* ifccParser::BorExpressionContext::borOperation(size_t i) {
  return getRuleContext<ifccParser::BorOperationContext>(i);
}


size_t ifccParser::BorExpressionContext::getRuleIndex() const {
  return ifccParser::RuleBorExpression;
}

antlrcpp::Any ifccParser::BorExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBorExpression(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::BorExpressionContext* ifccParser::borExpression() {
  BorExpressionContext *_localctx = _tracker.createInstance<BorExpressionContext>(_ctx, getState());
  enterRule(_localctx, 16, ifccParser::RuleBorExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
    bxorExpression();
    setState(128);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::BOR) {
      setState(125);
      borOperation();
      setState(130);
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

//----------------- BorOperationContext ------------------------------------------------------------------

ifccParser::BorOperationContext::BorOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::BorOperationContext::BOR() {
  return getToken(ifccParser::BOR, 0);
}

ifccParser::BxorExpressionContext* ifccParser::BorOperationContext::bxorExpression() {
  return getRuleContext<ifccParser::BxorExpressionContext>(0);
}


size_t ifccParser::BorOperationContext::getRuleIndex() const {
  return ifccParser::RuleBorOperation;
}

antlrcpp::Any ifccParser::BorOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBorOperation(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::BorOperationContext* ifccParser::borOperation() {
  BorOperationContext *_localctx = _tracker.createInstance<BorOperationContext>(_ctx, getState());
  enterRule(_localctx, 18, ifccParser::RuleBorOperation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(ifccParser::BOR);
    setState(132);
    bxorExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BxorExpressionContext ------------------------------------------------------------------

ifccParser::BxorExpressionContext::BxorExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::BandExpressionContext* ifccParser::BxorExpressionContext::bandExpression() {
  return getRuleContext<ifccParser::BandExpressionContext>(0);
}

std::vector<ifccParser::BxorOperationContext *> ifccParser::BxorExpressionContext::bxorOperation() {
  return getRuleContexts<ifccParser::BxorOperationContext>();
}

ifccParser::BxorOperationContext* ifccParser::BxorExpressionContext::bxorOperation(size_t i) {
  return getRuleContext<ifccParser::BxorOperationContext>(i);
}


size_t ifccParser::BxorExpressionContext::getRuleIndex() const {
  return ifccParser::RuleBxorExpression;
}

antlrcpp::Any ifccParser::BxorExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBxorExpression(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::BxorExpressionContext* ifccParser::bxorExpression() {
  BxorExpressionContext *_localctx = _tracker.createInstance<BxorExpressionContext>(_ctx, getState());
  enterRule(_localctx, 20, ifccParser::RuleBxorExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    bandExpression();
    setState(138);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::BXOR) {
      setState(135);
      bxorOperation();
      setState(140);
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

//----------------- BxorOperationContext ------------------------------------------------------------------

ifccParser::BxorOperationContext::BxorOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::BxorOperationContext::BXOR() {
  return getToken(ifccParser::BXOR, 0);
}

ifccParser::BandExpressionContext* ifccParser::BxorOperationContext::bandExpression() {
  return getRuleContext<ifccParser::BandExpressionContext>(0);
}


size_t ifccParser::BxorOperationContext::getRuleIndex() const {
  return ifccParser::RuleBxorOperation;
}

antlrcpp::Any ifccParser::BxorOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBxorOperation(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::BxorOperationContext* ifccParser::bxorOperation() {
  BxorOperationContext *_localctx = _tracker.createInstance<BxorOperationContext>(_ctx, getState());
  enterRule(_localctx, 22, ifccParser::RuleBxorOperation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    match(ifccParser::BXOR);
    setState(142);
    bandExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BandExpressionContext ------------------------------------------------------------------

ifccParser::BandExpressionContext::BandExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::EqualExpressionContext* ifccParser::BandExpressionContext::equalExpression() {
  return getRuleContext<ifccParser::EqualExpressionContext>(0);
}

std::vector<ifccParser::BandOperationContext *> ifccParser::BandExpressionContext::bandOperation() {
  return getRuleContexts<ifccParser::BandOperationContext>();
}

ifccParser::BandOperationContext* ifccParser::BandExpressionContext::bandOperation(size_t i) {
  return getRuleContext<ifccParser::BandOperationContext>(i);
}


size_t ifccParser::BandExpressionContext::getRuleIndex() const {
  return ifccParser::RuleBandExpression;
}

antlrcpp::Any ifccParser::BandExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBandExpression(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::BandExpressionContext* ifccParser::bandExpression() {
  BandExpressionContext *_localctx = _tracker.createInstance<BandExpressionContext>(_ctx, getState());
  enterRule(_localctx, 24, ifccParser::RuleBandExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    equalExpression();
    setState(148);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::BAND) {
      setState(145);
      bandOperation();
      setState(150);
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

//----------------- BandOperationContext ------------------------------------------------------------------

ifccParser::BandOperationContext::BandOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::BandOperationContext::BAND() {
  return getToken(ifccParser::BAND, 0);
}

ifccParser::EqualExpressionContext* ifccParser::BandOperationContext::equalExpression() {
  return getRuleContext<ifccParser::EqualExpressionContext>(0);
}


size_t ifccParser::BandOperationContext::getRuleIndex() const {
  return ifccParser::RuleBandOperation;
}

antlrcpp::Any ifccParser::BandOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBandOperation(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::BandOperationContext* ifccParser::bandOperation() {
  BandOperationContext *_localctx = _tracker.createInstance<BandOperationContext>(_ctx, getState());
  enterRule(_localctx, 26, ifccParser::RuleBandOperation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    match(ifccParser::BAND);
    setState(152);
    equalExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualExpressionContext ------------------------------------------------------------------

ifccParser::EqualExpressionContext::EqualExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::RelationalExpressionContext* ifccParser::EqualExpressionContext::relationalExpression() {
  return getRuleContext<ifccParser::RelationalExpressionContext>(0);
}

std::vector<ifccParser::EqualOperationContext *> ifccParser::EqualExpressionContext::equalOperation() {
  return getRuleContexts<ifccParser::EqualOperationContext>();
}

ifccParser::EqualOperationContext* ifccParser::EqualExpressionContext::equalOperation(size_t i) {
  return getRuleContext<ifccParser::EqualOperationContext>(i);
}


size_t ifccParser::EqualExpressionContext::getRuleIndex() const {
  return ifccParser::RuleEqualExpression;
}

antlrcpp::Any ifccParser::EqualExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitEqualExpression(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::EqualExpressionContext* ifccParser::equalExpression() {
  EqualExpressionContext *_localctx = _tracker.createInstance<EqualExpressionContext>(_ctx, getState());
  enterRule(_localctx, 28, ifccParser::RuleEqualExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    relationalExpression();
    setState(158);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::NOTEQUAL

    || _la == ifccParser::EQUAL) {
      setState(155);
      equalOperation();
      setState(160);
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

//----------------- EqualOperationContext ------------------------------------------------------------------

ifccParser::EqualOperationContext::EqualOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::RelationalExpressionContext* ifccParser::EqualOperationContext::relationalExpression() {
  return getRuleContext<ifccParser::RelationalExpressionContext>(0);
}

tree::TerminalNode* ifccParser::EqualOperationContext::EQUAL() {
  return getToken(ifccParser::EQUAL, 0);
}

tree::TerminalNode* ifccParser::EqualOperationContext::NOTEQUAL() {
  return getToken(ifccParser::NOTEQUAL, 0);
}


size_t ifccParser::EqualOperationContext::getRuleIndex() const {
  return ifccParser::RuleEqualOperation;
}

antlrcpp::Any ifccParser::EqualOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitEqualOperation(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::EqualOperationContext* ifccParser::equalOperation() {
  EqualOperationContext *_localctx = _tracker.createInstance<EqualOperationContext>(_ctx, getState());
  enterRule(_localctx, 30, ifccParser::RuleEqualOperation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    _la = _input->LA(1);
    if (!(_la == ifccParser::NOTEQUAL

    || _la == ifccParser::EQUAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(162);
    relationalExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationalExpressionContext ------------------------------------------------------------------

ifccParser::RelationalExpressionContext::RelationalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::BitshiftExpressionContext* ifccParser::RelationalExpressionContext::bitshiftExpression() {
  return getRuleContext<ifccParser::BitshiftExpressionContext>(0);
}

std::vector<ifccParser::RelationalOperationContext *> ifccParser::RelationalExpressionContext::relationalOperation() {
  return getRuleContexts<ifccParser::RelationalOperationContext>();
}

ifccParser::RelationalOperationContext* ifccParser::RelationalExpressionContext::relationalOperation(size_t i) {
  return getRuleContext<ifccParser::RelationalOperationContext>(i);
}


size_t ifccParser::RelationalExpressionContext::getRuleIndex() const {
  return ifccParser::RuleRelationalExpression;
}

antlrcpp::Any ifccParser::RelationalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitRelationalExpression(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::RelationalExpressionContext* ifccParser::relationalExpression() {
  RelationalExpressionContext *_localctx = _tracker.createInstance<RelationalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 32, ifccParser::RuleRelationalExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    bitshiftExpression();
    setState(168);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::LESSEQUAL)
      | (1ULL << ifccParser::LESS)
      | (1ULL << ifccParser::GREATEREQUAL)
      | (1ULL << ifccParser::GREATER))) != 0)) {
      setState(165);
      relationalOperation();
      setState(170);
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

//----------------- RelationalOperationContext ------------------------------------------------------------------

ifccParser::RelationalOperationContext::RelationalOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::BitshiftExpressionContext* ifccParser::RelationalOperationContext::bitshiftExpression() {
  return getRuleContext<ifccParser::BitshiftExpressionContext>(0);
}

tree::TerminalNode* ifccParser::RelationalOperationContext::LESSEQUAL() {
  return getToken(ifccParser::LESSEQUAL, 0);
}

tree::TerminalNode* ifccParser::RelationalOperationContext::LESS() {
  return getToken(ifccParser::LESS, 0);
}

tree::TerminalNode* ifccParser::RelationalOperationContext::GREATEREQUAL() {
  return getToken(ifccParser::GREATEREQUAL, 0);
}

tree::TerminalNode* ifccParser::RelationalOperationContext::GREATER() {
  return getToken(ifccParser::GREATER, 0);
}


size_t ifccParser::RelationalOperationContext::getRuleIndex() const {
  return ifccParser::RuleRelationalOperation;
}

antlrcpp::Any ifccParser::RelationalOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitRelationalOperation(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::RelationalOperationContext* ifccParser::relationalOperation() {
  RelationalOperationContext *_localctx = _tracker.createInstance<RelationalOperationContext>(_ctx, getState());
  enterRule(_localctx, 34, ifccParser::RuleRelationalOperation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
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
    setState(172);
    bitshiftExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitshiftExpressionContext ------------------------------------------------------------------

ifccParser::BitshiftExpressionContext::BitshiftExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::AddExpressionContext* ifccParser::BitshiftExpressionContext::addExpression() {
  return getRuleContext<ifccParser::AddExpressionContext>(0);
}

std::vector<ifccParser::BitshiftOperationContext *> ifccParser::BitshiftExpressionContext::bitshiftOperation() {
  return getRuleContexts<ifccParser::BitshiftOperationContext>();
}

ifccParser::BitshiftOperationContext* ifccParser::BitshiftExpressionContext::bitshiftOperation(size_t i) {
  return getRuleContext<ifccParser::BitshiftOperationContext>(i);
}


size_t ifccParser::BitshiftExpressionContext::getRuleIndex() const {
  return ifccParser::RuleBitshiftExpression;
}

antlrcpp::Any ifccParser::BitshiftExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBitshiftExpression(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::BitshiftExpressionContext* ifccParser::bitshiftExpression() {
  BitshiftExpressionContext *_localctx = _tracker.createInstance<BitshiftExpressionContext>(_ctx, getState());
  enterRule(_localctx, 36, ifccParser::RuleBitshiftExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    addExpression();
    setState(178);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::RIGHTSHIFT

    || _la == ifccParser::LEFTSHIFT) {
      setState(175);
      bitshiftOperation();
      setState(180);
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

//----------------- BitshiftOperationContext ------------------------------------------------------------------

ifccParser::BitshiftOperationContext::BitshiftOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::AddExpressionContext* ifccParser::BitshiftOperationContext::addExpression() {
  return getRuleContext<ifccParser::AddExpressionContext>(0);
}

tree::TerminalNode* ifccParser::BitshiftOperationContext::LEFTSHIFT() {
  return getToken(ifccParser::LEFTSHIFT, 0);
}

tree::TerminalNode* ifccParser::BitshiftOperationContext::RIGHTSHIFT() {
  return getToken(ifccParser::RIGHTSHIFT, 0);
}


size_t ifccParser::BitshiftOperationContext::getRuleIndex() const {
  return ifccParser::RuleBitshiftOperation;
}

antlrcpp::Any ifccParser::BitshiftOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBitshiftOperation(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::BitshiftOperationContext* ifccParser::bitshiftOperation() {
  BitshiftOperationContext *_localctx = _tracker.createInstance<BitshiftOperationContext>(_ctx, getState());
  enterRule(_localctx, 38, ifccParser::RuleBitshiftOperation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    _la = _input->LA(1);
    if (!(_la == ifccParser::RIGHTSHIFT

    || _la == ifccParser::LEFTSHIFT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(182);
    addExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddExpressionContext ------------------------------------------------------------------

ifccParser::AddExpressionContext::AddExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::MultExpressionContext* ifccParser::AddExpressionContext::multExpression() {
  return getRuleContext<ifccParser::MultExpressionContext>(0);
}

std::vector<ifccParser::AddOperationContext *> ifccParser::AddExpressionContext::addOperation() {
  return getRuleContexts<ifccParser::AddOperationContext>();
}

ifccParser::AddOperationContext* ifccParser::AddExpressionContext::addOperation(size_t i) {
  return getRuleContext<ifccParser::AddOperationContext>(i);
}


size_t ifccParser::AddExpressionContext::getRuleIndex() const {
  return ifccParser::RuleAddExpression;
}

antlrcpp::Any ifccParser::AddExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAddExpression(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::AddExpressionContext* ifccParser::addExpression() {
  AddExpressionContext *_localctx = _tracker.createInstance<AddExpressionContext>(_ctx, getState());
  enterRule(_localctx, 40, ifccParser::RuleAddExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    multExpression();
    setState(188);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::MINUS

    || _la == ifccParser::PLUS) {
      setState(185);
      addOperation();
      setState(190);
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

//----------------- AddOperationContext ------------------------------------------------------------------

ifccParser::AddOperationContext::AddOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::MultExpressionContext* ifccParser::AddOperationContext::multExpression() {
  return getRuleContext<ifccParser::MultExpressionContext>(0);
}

tree::TerminalNode* ifccParser::AddOperationContext::PLUS() {
  return getToken(ifccParser::PLUS, 0);
}

tree::TerminalNode* ifccParser::AddOperationContext::MINUS() {
  return getToken(ifccParser::MINUS, 0);
}


size_t ifccParser::AddOperationContext::getRuleIndex() const {
  return ifccParser::RuleAddOperation;
}

antlrcpp::Any ifccParser::AddOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAddOperation(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::AddOperationContext* ifccParser::addOperation() {
  AddOperationContext *_localctx = _tracker.createInstance<AddOperationContext>(_ctx, getState());
  enterRule(_localctx, 42, ifccParser::RuleAddOperation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(191);
    _la = _input->LA(1);
    if (!(_la == ifccParser::MINUS

    || _la == ifccParser::PLUS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(192);
    multExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultExpressionContext ------------------------------------------------------------------

ifccParser::MultExpressionContext::MultExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::UnaryExpressionContext* ifccParser::MultExpressionContext::unaryExpression() {
  return getRuleContext<ifccParser::UnaryExpressionContext>(0);
}

std::vector<ifccParser::MultOperationContext *> ifccParser::MultExpressionContext::multOperation() {
  return getRuleContexts<ifccParser::MultOperationContext>();
}

ifccParser::MultOperationContext* ifccParser::MultExpressionContext::multOperation(size_t i) {
  return getRuleContext<ifccParser::MultOperationContext>(i);
}


size_t ifccParser::MultExpressionContext::getRuleIndex() const {
  return ifccParser::RuleMultExpression;
}

antlrcpp::Any ifccParser::MultExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitMultExpression(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::MultExpressionContext* ifccParser::multExpression() {
  MultExpressionContext *_localctx = _tracker.createInstance<MultExpressionContext>(_ctx, getState());
  enterRule(_localctx, 44, ifccParser::RuleMultExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    unaryExpression();
    setState(198);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::MULTIPLY)
      | (1ULL << ifccParser::DIVIDE)
      | (1ULL << ifccParser::MOD))) != 0)) {
      setState(195);
      multOperation();
      setState(200);
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

//----------------- MultOperationContext ------------------------------------------------------------------

ifccParser::MultOperationContext::MultOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::UnaryExpressionContext* ifccParser::MultOperationContext::unaryExpression() {
  return getRuleContext<ifccParser::UnaryExpressionContext>(0);
}

tree::TerminalNode* ifccParser::MultOperationContext::MULTIPLY() {
  return getToken(ifccParser::MULTIPLY, 0);
}

tree::TerminalNode* ifccParser::MultOperationContext::DIVIDE() {
  return getToken(ifccParser::DIVIDE, 0);
}

tree::TerminalNode* ifccParser::MultOperationContext::MOD() {
  return getToken(ifccParser::MOD, 0);
}


size_t ifccParser::MultOperationContext::getRuleIndex() const {
  return ifccParser::RuleMultOperation;
}

antlrcpp::Any ifccParser::MultOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitMultOperation(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::MultOperationContext* ifccParser::multOperation() {
  MultOperationContext *_localctx = _tracker.createInstance<MultOperationContext>(_ctx, getState());
  enterRule(_localctx, 46, ifccParser::RuleMultOperation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
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
    setState(202);
    unaryExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpressionContext ------------------------------------------------------------------

ifccParser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::PrimaryExpressionContext* ifccParser::UnaryExpressionContext::primaryExpression() {
  return getRuleContext<ifccParser::PrimaryExpressionContext>(0);
}

tree::TerminalNode* ifccParser::UnaryExpressionContext::INCREMENT() {
  return getToken(ifccParser::INCREMENT, 0);
}

tree::TerminalNode* ifccParser::UnaryExpressionContext::DECREMENT() {
  return getToken(ifccParser::DECREMENT, 0);
}

tree::TerminalNode* ifccParser::UnaryExpressionContext::PLUS() {
  return getToken(ifccParser::PLUS, 0);
}

tree::TerminalNode* ifccParser::UnaryExpressionContext::MINUS() {
  return getToken(ifccParser::MINUS, 0);
}

tree::TerminalNode* ifccParser::UnaryExpressionContext::NOT() {
  return getToken(ifccParser::NOT, 0);
}

tree::TerminalNode* ifccParser::UnaryExpressionContext::BNOT() {
  return getToken(ifccParser::BNOT, 0);
}


size_t ifccParser::UnaryExpressionContext::getRuleIndex() const {
  return ifccParser::RuleUnaryExpression;
}

antlrcpp::Any ifccParser::UnaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitUnaryExpression(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::UnaryExpressionContext* ifccParser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 48, ifccParser::RuleUnaryExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(207);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::DECREMENT:
      case ifccParser::MINUS:
      case ifccParser::INCREMENT:
      case ifccParser::PLUS:
      case ifccParser::NOT:
      case ifccParser::BNOT: {
        enterOuterAlt(_localctx, 1);
        setState(204);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ifccParser::DECREMENT)
          | (1ULL << ifccParser::MINUS)
          | (1ULL << ifccParser::INCREMENT)
          | (1ULL << ifccParser::PLUS)
          | (1ULL << ifccParser::NOT)
          | (1ULL << ifccParser::BNOT))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(205);
        primaryExpression();
        break;
      }

      case ifccParser::T__2:
      case ifccParser::NUMBER:
      case ifccParser::CHAR:
      case ifccParser::VAR: {
        enterOuterAlt(_localctx, 2);
        setState(206);
        primaryExpression();
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

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

ifccParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::PrimaryExpressionContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::ConstanteContext* ifccParser::PrimaryExpressionContext::constante() {
  return getRuleContext<ifccParser::ConstanteContext>(0);
}

ifccParser::ExpressionContext* ifccParser::PrimaryExpressionContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}


size_t ifccParser::PrimaryExpressionContext::getRuleIndex() const {
  return ifccParser::RulePrimaryExpression;
}

antlrcpp::Any ifccParser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::PrimaryExpressionContext* ifccParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 50, ifccParser::RulePrimaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(215);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::VAR: {
        enterOuterAlt(_localctx, 1);
        setState(209);
        match(ifccParser::VAR);
        break;
      }

      case ifccParser::NUMBER:
      case ifccParser::CHAR: {
        enterOuterAlt(_localctx, 2);
        setState(210);
        constante();
        break;
      }

      case ifccParser::T__2: {
        enterOuterAlt(_localctx, 3);
        setState(211);
        match(ifccParser::T__2);
        setState(212);
        expression(0);
        setState(213);
        match(ifccParser::T__3);
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
  enterRule(_localctx, 52, ifccParser::RuleCondition_bloc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    match(ifccParser::T__4);
    setState(218);
    expression(0);
    setState(219);
    match(ifccParser::T__3);
    setState(220);
    bloc();
    setState(228);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::T__5) {
      setState(221);
      match(ifccParser::T__5);
      setState(222);
      expression(0);
      setState(223);
      match(ifccParser::T__3);
      setState(224);
      bloc();
      setState(230);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(233);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ifccParser::T__6) {
      setState(231);
      match(ifccParser::T__6);
      setState(232);
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
  enterRule(_localctx, 54, ifccParser::RuleLoop_bloc);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    match(ifccParser::T__7);
    setState(236);
    expression(0);
    setState(237);
    match(ifccParser::T__3);
    setState(238);
    bloc();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_stmtContext ------------------------------------------------------------------

ifccParser::Return_stmtContext::Return_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::Return_stmtContext::RETURN() {
  return getToken(ifccParser::RETURN, 0);
}

ifccParser::ExpressionContext* ifccParser::Return_stmtContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}


size_t ifccParser::Return_stmtContext::getRuleIndex() const {
  return ifccParser::RuleReturn_stmt;
}

antlrcpp::Any ifccParser::Return_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitReturn_stmt(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::Return_stmtContext* ifccParser::return_stmt() {
  Return_stmtContext *_localctx = _tracker.createInstance<Return_stmtContext>(_ctx, getState());
  enterRule(_localctx, 56, ifccParser::RuleReturn_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    match(ifccParser::RETURN);
    setState(241);
    expression(0);
   
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
  enterRule(_localctx, 58, ifccParser::RuleFunction_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    match(ifccParser::VAR);
    setState(244);
    match(ifccParser::T__2);
    setState(245);
    expression(0);
    setState(250);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::T__8) {
      setState(246);
      match(ifccParser::T__8);
      setState(247);
      expression(0);
      setState(252);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(253);
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
  enterRule(_localctx, 60, ifccParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(255);
    match(ifccParser::TYPE);
    setState(258);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(256);
      match(ifccParser::VAR);
      break;
    }

    case 2: {
      setState(257);
      affectation();
      break;
    }

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
  enterRule(_localctx, 62, ifccParser::RuleAffectation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(260);
    match(ifccParser::VAR);
    setState(261);
    match(ifccParser::EGAL);
    setState(262);
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
  enterRule(_localctx, 64, ifccParser::RuleParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(264);
    match(ifccParser::TYPE);
    setState(265);
    match(ifccParser::VAR);
    setState(268);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ifccParser::EGAL) {
      setState(266);
      match(ifccParser::EGAL);
      setState(267);
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
  enterRule(_localctx, 66, ifccParser::RuleFunction_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    match(ifccParser::TYPE);
    setState(271);
    match(ifccParser::VAR);
    setState(272);
    match(ifccParser::T__2);
    setState(274);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ifccParser::TYPE) {
      setState(273);
      parameter();
    }
    setState(280);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::T__8) {
      setState(276);
      match(ifccParser::T__8);
      setState(277);
      parameter();
      setState(282);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(283);
    match(ifccParser::T__3);
    setState(284);
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

ifccParser::Return_stmtContext* ifccParser::StatementContext::return_stmt() {
  return getRuleContext<ifccParser::Return_stmtContext>(0);
}

ifccParser::DeclarationContext* ifccParser::StatementContext::declaration() {
  return getRuleContext<ifccParser::DeclarationContext>(0);
}

ifccParser::AffectationContext* ifccParser::StatementContext::affectation() {
  return getRuleContext<ifccParser::AffectationContext>(0);
}

ifccParser::UnaryExpressionContext* ifccParser::StatementContext::unaryExpression() {
  return getRuleContext<ifccParser::UnaryExpressionContext>(0);
}

ifccParser::Function_callContext* ifccParser::StatementContext::function_call() {
  return getRuleContext<ifccParser::Function_callContext>(0);
}

ifccParser::Condition_blocContext* ifccParser::StatementContext::condition_bloc() {
  return getRuleContext<ifccParser::Condition_blocContext>(0);
}

ifccParser::Loop_blocContext* ifccParser::StatementContext::loop_bloc() {
  return getRuleContext<ifccParser::Loop_blocContext>(0);
}


size_t ifccParser::StatementContext::getRuleIndex() const {
  return ifccParser::RuleStatement;
}

antlrcpp::Any ifccParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::StatementContext* ifccParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 68, ifccParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(303);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(286);
      return_stmt();
      setState(287);
      match(ifccParser::T__9);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(289);
      declaration();
      setState(290);
      match(ifccParser::T__9);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(292);
      affectation();
      setState(293);
      match(ifccParser::T__9);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(295);
      unaryExpression();
      setState(296);
      match(ifccParser::T__9);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(298);
      function_call();
      setState(299);
      match(ifccParser::T__9);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(301);
      condition_bloc();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(302);
      loop_bloc();
      break;
    }

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
  enterRule(_localctx, 70, ifccParser::RuleConstante);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
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
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

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
  "axiom", "prog", "bloc", "expression", "orExpression", "orOperation", 
  "andExpression", "andOperation", "borExpression", "borOperation", "bxorExpression", 
  "bxorOperation", "bandExpression", "bandOperation", "equalExpression", 
  "equalOperation", "relationalExpression", "relationalOperation", "bitshiftExpression", 
  "bitshiftOperation", "addExpression", "addOperation", "multExpression", 
  "multOperation", "unaryExpression", "primaryExpression", "condition_bloc", 
  "loop_bloc", "return_stmt", "function_call", "declaration", "affectation", 
  "parameter", "function_declaration", "statement", "constante"
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

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x2b, 0x136, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x7, 0x3, 0x4f, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x52, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x56, 
    0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x59, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x7, 0x5, 0x66, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x69, 0xb, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x6d, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 
    0x70, 0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x7, 
    0x8, 0x77, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x7a, 0xb, 0x8, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x81, 0xa, 0xa, 0xc, 0xa, 
    0xe, 0xa, 0x84, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x7, 0xc, 0x8b, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x8e, 0xb, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x95, 0xa, 0xe, 
    0xc, 0xe, 0xe, 0xe, 0x98, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0x10, 0x3, 0x10, 0x7, 0x10, 0x9f, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xa2, 
    0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x7, 
    0x12, 0xa9, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xac, 0xb, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0xb3, 0xa, 0x14, 
    0xc, 0x14, 0xe, 0x14, 0xb6, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0xbd, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 
    0xc0, 0xb, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 
    0x7, 0x18, 0xc7, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0xca, 0xb, 0x18, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 
    0xd2, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x5, 0x1b, 0xda, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 
    0x1c, 0xe5, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0xe8, 0xb, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x5, 0x1c, 0xec, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0xfb, 0xa, 0x1f, 0xc, 
    0x1f, 0xe, 0x1f, 0xfe, 0xb, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x20, 0x5, 0x20, 0x105, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 
    0x22, 0x10f, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x5, 0x23, 0x115, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x119, 
    0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x11c, 0xb, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
    0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x132, 
    0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x2, 0x3, 0x8, 0x26, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
    0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 
    0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x2, 0x9, 
    0x3, 0x2, 0x1a, 0x1b, 0x3, 0x2, 0x16, 0x19, 0x3, 0x2, 0xd, 0xe, 0x4, 
    0x2, 0x13, 0x13, 0x15, 0x15, 0x3, 0x2, 0xf, 0x11, 0x4, 0x2, 0x12, 0x15, 
    0x22, 0x23, 0x3, 0x2, 0x26, 0x27, 0x2, 0x12f, 0x2, 0x4a, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x50, 0x3, 0x2, 0x2, 0x2, 0x6, 0x53, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x5c, 0x3, 0x2, 0x2, 0x2, 0xa, 0x6a, 0x3, 0x2, 0x2, 0x2, 0xc, 0x71, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x74, 0x3, 0x2, 0x2, 0x2, 0x10, 0x7b, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x14, 0x85, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x88, 0x3, 0x2, 0x2, 0x2, 0x18, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x92, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x20, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0xa6, 0x3, 0x2, 0x2, 0x2, 0x24, 0xad, 0x3, 0x2, 0x2, 0x2, 0x26, 0xb0, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xba, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xc4, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x32, 0xd1, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x36, 0xdb, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0xed, 0x3, 0x2, 0x2, 0x2, 0x3a, 0xf2, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0xf5, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x101, 0x3, 0x2, 0x2, 0x2, 0x40, 0x106, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x44, 0x110, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x131, 0x3, 0x2, 0x2, 0x2, 0x48, 0x133, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x4b, 0x5, 0x4, 0x3, 0x2, 0x4b, 0x4c, 0x7, 0x2, 0x2, 
    0x3, 0x4c, 0x3, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4f, 0x5, 0x44, 0x23, 0x2, 
    0x4e, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x52, 0x3, 0x2, 0x2, 0x2, 0x50, 
    0x4e, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x53, 0x57, 0x7, 
    0x3, 0x2, 0x2, 0x54, 0x56, 0x5, 0x46, 0x24, 0x2, 0x55, 0x54, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x59, 0x3, 0x2, 0x2, 0x2, 0x57, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x57, 0x58, 0x3, 0x2, 0x2, 0x2, 0x58, 0x5a, 0x3, 0x2, 0x2, 0x2, 
    0x59, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0x4, 0x2, 0x2, 0x5b, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x8, 0x5, 0x1, 0x2, 0x5d, 0x5e, 
    0x5, 0x34, 0x1b, 0x2, 0x5e, 0x67, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0xc, 
    0x5, 0x2, 0x2, 0x60, 0x61, 0x7, 0xf, 0x2, 0x2, 0x61, 0x66, 0x5, 0x8, 
    0x5, 0x6, 0x62, 0x63, 0xc, 0x4, 0x2, 0x2, 0x63, 0x64, 0x7, 0x15, 0x2, 
    0x2, 0x64, 0x66, 0x5, 0x8, 0x5, 0x5, 0x65, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x65, 0x62, 0x3, 0x2, 0x2, 0x2, 0x66, 0x69, 0x3, 0x2, 0x2, 0x2, 0x67, 
    0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x3, 0x2, 0x2, 0x2, 0x68, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x69, 0x67, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6e, 0x5, 
    0xe, 0x8, 0x2, 0x6b, 0x6d, 0x5, 0xc, 0x7, 0x2, 0x6c, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x6d, 0x70, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6f, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x7, 0x20, 0x2, 0x2, 0x72, 
    0x73, 0x5, 0xe, 0x8, 0x2, 0x73, 0xd, 0x3, 0x2, 0x2, 0x2, 0x74, 0x78, 
    0x5, 0x12, 0xa, 0x2, 0x75, 0x77, 0x5, 0x10, 0x9, 0x2, 0x76, 0x75, 0x3, 
    0x2, 0x2, 0x2, 0x77, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x78, 0x76, 0x3, 0x2, 
    0x2, 0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 0x2, 0x79, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0x1f, 0x2, 0x2, 
    0x7c, 0x7d, 0x5, 0x12, 0xa, 0x2, 0x7d, 0x11, 0x3, 0x2, 0x2, 0x2, 0x7e, 
    0x82, 0x5, 0x16, 0xc, 0x2, 0x7f, 0x81, 0x5, 0x14, 0xb, 0x2, 0x80, 0x7f, 
    0x3, 0x2, 0x2, 0x2, 0x81, 0x84, 0x3, 0x2, 0x2, 0x2, 0x82, 0x80, 0x3, 
    0x2, 0x2, 0x2, 0x82, 0x83, 0x3, 0x2, 0x2, 0x2, 0x83, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x7, 0x1e, 0x2, 
    0x2, 0x86, 0x87, 0x5, 0x16, 0xc, 0x2, 0x87, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x88, 0x8c, 0x5, 0x1a, 0xe, 0x2, 0x89, 0x8b, 0x5, 0x18, 0xd, 0x2, 0x8a, 
    0x89, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8a, 
    0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x1d, 
    0x2, 0x2, 0x90, 0x91, 0x5, 0x1a, 0xe, 0x2, 0x91, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x92, 0x96, 0x5, 0x1e, 0x10, 0x2, 0x93, 0x95, 0x5, 0x1c, 0xf, 0x2, 
    0x94, 0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 0x98, 0x3, 0x2, 0x2, 0x2, 0x96, 
    0x94, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x3, 0x2, 0x2, 0x2, 0x97, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x96, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x7, 
    0x1c, 0x2, 0x2, 0x9a, 0x9b, 0x5, 0x1e, 0x10, 0x2, 0x9b, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0x9c, 0xa0, 0x5, 0x22, 0x12, 0x2, 0x9d, 0x9f, 0x5, 0x20, 0x11, 
    0x2, 0x9e, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa2, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa1, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 
    0x9, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x5, 0x22, 0x12, 0x2, 0xa5, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0xa6, 0xaa, 0x5, 0x26, 0x14, 0x2, 0xa7, 0xa9, 0x5, 0x24, 
    0x13, 0x2, 0xa8, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xac, 0x3, 0x2, 0x2, 
    0x2, 0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0xab, 0x23, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xad, 
    0xae, 0x9, 0x3, 0x2, 0x2, 0xae, 0xaf, 0x5, 0x26, 0x14, 0x2, 0xaf, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0xb0, 0xb4, 0x5, 0x2a, 0x16, 0x2, 0xb1, 0xb3, 0x5, 
    0x28, 0x15, 0x2, 0xb2, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb6, 0x3, 0x2, 
    0x2, 0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x3, 0x2, 0x2, 
    0x2, 0xb5, 0x27, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb4, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xb8, 0x9, 0x4, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0x2a, 0x16, 0x2, 0xb9, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbe, 0x5, 0x2e, 0x18, 0x2, 0xbb, 0xbd, 
    0x5, 0x2c, 0x17, 0x2, 0xbc, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xc0, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x3, 0x2, 
    0x2, 0x2, 0xbf, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 
    0x2, 0xc1, 0xc2, 0x9, 0x5, 0x2, 0x2, 0xc2, 0xc3, 0x5, 0x2e, 0x18, 0x2, 
    0xc3, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc8, 0x5, 0x32, 0x1a, 0x2, 0xc5, 
    0xc7, 0x5, 0x30, 0x19, 0x2, 0xc6, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xca, 
    0x3, 0x2, 0x2, 0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x3, 
    0x2, 0x2, 0x2, 0xc9, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xca, 0xc8, 0x3, 0x2, 
    0x2, 0x2, 0xcb, 0xcc, 0x9, 0x6, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x32, 0x1a, 
    0x2, 0xcd, 0x31, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x9, 0x7, 0x2, 0x2, 
    0xcf, 0xd2, 0x5, 0x34, 0x1b, 0x2, 0xd0, 0xd2, 0x5, 0x34, 0x1b, 0x2, 
    0xd1, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd2, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xda, 0x7, 0x2b, 0x2, 0x2, 0xd4, 0xda, 
    0x5, 0x48, 0x25, 0x2, 0xd5, 0xd6, 0x7, 0x5, 0x2, 0x2, 0xd6, 0xd7, 0x5, 
    0x8, 0x5, 0x2, 0xd7, 0xd8, 0x7, 0x6, 0x2, 0x2, 0xd8, 0xda, 0x3, 0x2, 
    0x2, 0x2, 0xd9, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xd4, 0x3, 0x2, 0x2, 
    0x2, 0xd9, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xda, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0xdb, 0xdc, 0x7, 0x7, 0x2, 0x2, 0xdc, 0xdd, 0x5, 0x8, 0x5, 0x2, 0xdd, 
    0xde, 0x7, 0x6, 0x2, 0x2, 0xde, 0xe6, 0x5, 0x6, 0x4, 0x2, 0xdf, 0xe0, 
    0x7, 0x8, 0x2, 0x2, 0xe0, 0xe1, 0x5, 0x8, 0x5, 0x2, 0xe1, 0xe2, 0x7, 
    0x6, 0x2, 0x2, 0xe2, 0xe3, 0x5, 0x6, 0x4, 0x2, 0xe3, 0xe5, 0x3, 0x2, 
    0x2, 0x2, 0xe4, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe8, 0x3, 0x2, 0x2, 
    0x2, 0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 0x2, 0x2, 
    0xe7, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe9, 
    0xea, 0x7, 0x9, 0x2, 0x2, 0xea, 0xec, 0x5, 0x6, 0x4, 0x2, 0xeb, 0xe9, 
    0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x3, 0x2, 0x2, 0x2, 0xec, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0xed, 0xee, 0x7, 0xa, 0x2, 0x2, 0xee, 0xef, 0x5, 0x8, 
    0x5, 0x2, 0xef, 0xf0, 0x7, 0x6, 0x2, 0x2, 0xf0, 0xf1, 0x5, 0x6, 0x4, 
    0x2, 0xf1, 0x39, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x7, 0x24, 0x2, 0x2, 
    0xf3, 0xf4, 0x5, 0x8, 0x5, 0x2, 0xf4, 0x3b, 0x3, 0x2, 0x2, 0x2, 0xf5, 
    0xf6, 0x7, 0x2b, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x5, 0x2, 0x2, 0xf7, 0xfc, 
    0x5, 0x8, 0x5, 0x2, 0xf8, 0xf9, 0x7, 0xb, 0x2, 0x2, 0xf9, 0xfb, 0x5, 
    0x8, 0x5, 0x2, 0xfa, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfe, 0x3, 0x2, 
    0x2, 0x2, 0xfc, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 
    0x2, 0xfd, 0xff, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfc, 0x3, 0x2, 0x2, 0x2, 
    0xff, 0x100, 0x7, 0x6, 0x2, 0x2, 0x100, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x101, 
    0x104, 0x7, 0x25, 0x2, 0x2, 0x102, 0x105, 0x7, 0x2b, 0x2, 0x2, 0x103, 
    0x105, 0x5, 0x40, 0x21, 0x2, 0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 0x104, 
    0x103, 0x3, 0x2, 0x2, 0x2, 0x105, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 
    0x7, 0x2b, 0x2, 0x2, 0x107, 0x108, 0x7, 0x21, 0x2, 0x2, 0x108, 0x109, 
    0x5, 0x8, 0x5, 0x2, 0x109, 0x41, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x7, 
    0x25, 0x2, 0x2, 0x10b, 0x10e, 0x7, 0x2b, 0x2, 0x2, 0x10c, 0x10d, 0x7, 
    0x21, 0x2, 0x2, 0x10d, 0x10f, 0x5, 0x48, 0x25, 0x2, 0x10e, 0x10c, 0x3, 
    0x2, 0x2, 0x2, 0x10e, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x43, 0x3, 0x2, 
    0x2, 0x2, 0x110, 0x111, 0x7, 0x25, 0x2, 0x2, 0x111, 0x112, 0x7, 0x2b, 
    0x2, 0x2, 0x112, 0x114, 0x7, 0x5, 0x2, 0x2, 0x113, 0x115, 0x5, 0x42, 
    0x22, 0x2, 0x114, 0x113, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x3, 0x2, 
    0x2, 0x2, 0x115, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x7, 0xb, 
    0x2, 0x2, 0x117, 0x119, 0x5, 0x42, 0x22, 0x2, 0x118, 0x116, 0x3, 0x2, 
    0x2, 0x2, 0x119, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x118, 0x3, 0x2, 
    0x2, 0x2, 0x11a, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11d, 0x3, 0x2, 
    0x2, 0x2, 0x11c, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x7, 0x6, 
    0x2, 0x2, 0x11e, 0x11f, 0x5, 0x6, 0x4, 0x2, 0x11f, 0x45, 0x3, 0x2, 0x2, 
    0x2, 0x120, 0x121, 0x5, 0x3a, 0x1e, 0x2, 0x121, 0x122, 0x7, 0xc, 0x2, 
    0x2, 0x122, 0x132, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x5, 0x3e, 0x20, 
    0x2, 0x124, 0x125, 0x7, 0xc, 0x2, 0x2, 0x125, 0x132, 0x3, 0x2, 0x2, 
    0x2, 0x126, 0x127, 0x5, 0x40, 0x21, 0x2, 0x127, 0x128, 0x7, 0xc, 0x2, 
    0x2, 0x128, 0x132, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x5, 0x32, 0x1a, 
    0x2, 0x12a, 0x12b, 0x7, 0xc, 0x2, 0x2, 0x12b, 0x132, 0x3, 0x2, 0x2, 
    0x2, 0x12c, 0x12d, 0x5, 0x3c, 0x1f, 0x2, 0x12d, 0x12e, 0x7, 0xc, 0x2, 
    0x2, 0x12e, 0x132, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x132, 0x5, 0x36, 0x1c, 
    0x2, 0x130, 0x132, 0x5, 0x38, 0x1d, 0x2, 0x131, 0x120, 0x3, 0x2, 0x2, 
    0x2, 0x131, 0x123, 0x3, 0x2, 0x2, 0x2, 0x131, 0x126, 0x3, 0x2, 0x2, 
    0x2, 0x131, 0x129, 0x3, 0x2, 0x2, 0x2, 0x131, 0x12c, 0x3, 0x2, 0x2, 
    0x2, 0x131, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x131, 0x130, 0x3, 0x2, 0x2, 
    0x2, 0x132, 0x47, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x9, 0x8, 0x2, 0x2, 
    0x134, 0x49, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x50, 0x57, 0x65, 0x67, 0x6e, 
    0x78, 0x82, 0x8c, 0x96, 0xa0, 0xaa, 0xb4, 0xbe, 0xc8, 0xd1, 0xd9, 0xe6, 
    0xeb, 0xfc, 0x104, 0x10e, 0x114, 0x11a, 0x131, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ifccParser::Initializer ifccParser::_init;
