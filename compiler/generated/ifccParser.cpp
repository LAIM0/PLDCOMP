
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
    setState(26);
    prog();
    setState(27);
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

tree::TerminalNode* ifccParser::ProgContext::TYPE() {
  return getToken(ifccParser::TYPE, 0);
}

std::vector<ifccParser::StatementContext *> ifccParser::ProgContext::statement() {
  return getRuleContexts<ifccParser::StatementContext>();
}

ifccParser::StatementContext* ifccParser::ProgContext::statement(size_t i) {
  return getRuleContext<ifccParser::StatementContext>(i);
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
    setState(29);
    match(ifccParser::TYPE);
    setState(30);
    match(ifccParser::T__0);
    setState(31);
    match(ifccParser::T__1);
    setState(32);
    match(ifccParser::T__2);
    setState(33);
    match(ifccParser::T__3);
    setState(37);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::T__1)
      | (1ULL << ifccParser::DECREMENT)
      | (1ULL << ifccParser::MINUS)
      | (1ULL << ifccParser::INCREMENT)
      | (1ULL << ifccParser::PLUS)
      | (1ULL << ifccParser::NOT)
      | (1ULL << ifccParser::BNOT)
      | (1ULL << ifccParser::RETURN)
      | (1ULL << ifccParser::TYPE)
      | (1ULL << ifccParser::CONST)
      | (1ULL << ifccParser::VAR))) != 0)) {
      setState(34);
      statement();
      setState(39);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(40);
    match(ifccParser::T__4);
   
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

ifccParser::AddExpressionContext* ifccParser::ExpressionContext::addExpression() {
  return getRuleContext<ifccParser::AddExpressionContext>(0);
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
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, ifccParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
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
  enterRule(_localctx, 6, ifccParser::RuleAddExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    multExpression();
    setState(48);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::MINUS

    || _la == ifccParser::PLUS) {
      setState(45);
      addOperation();
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
  enterRule(_localctx, 8, ifccParser::RuleAddOperation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    _la = _input->LA(1);
    if (!(_la == ifccParser::MINUS

    || _la == ifccParser::PLUS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(52);
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
  enterRule(_localctx, 10, ifccParser::RuleMultExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    unaryExpression();
    setState(58);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::MULTIPLY)
      | (1ULL << ifccParser::DIVIDE)
      | (1ULL << ifccParser::MOD))) != 0)) {
      setState(55);
      multOperation();
      setState(60);
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
  enterRule(_localctx, 12, ifccParser::RuleMultOperation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
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
    setState(62);
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
  enterRule(_localctx, 14, ifccParser::RuleUnaryExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(67);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::DECREMENT:
      case ifccParser::MINUS:
      case ifccParser::INCREMENT:
      case ifccParser::PLUS:
      case ifccParser::NOT:
      case ifccParser::BNOT: {
        enterOuterAlt(_localctx, 1);
        setState(64);
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
        setState(65);
        primaryExpression();
        break;
      }

      case ifccParser::T__1:
      case ifccParser::CONST:
      case ifccParser::VAR: {
        enterOuterAlt(_localctx, 2);
        setState(66);
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

tree::TerminalNode* ifccParser::PrimaryExpressionContext::CONST() {
  return getToken(ifccParser::CONST, 0);
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
  enterRule(_localctx, 16, ifccParser::RulePrimaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(75);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::VAR: {
        enterOuterAlt(_localctx, 1);
        setState(69);
        match(ifccParser::VAR);
        break;
      }

      case ifccParser::CONST: {
        enterOuterAlt(_localctx, 2);
        setState(70);
        match(ifccParser::CONST);
        break;
      }

      case ifccParser::T__1: {
        enterOuterAlt(_localctx, 3);
        setState(71);
        match(ifccParser::T__1);
        setState(72);
        expression();
        setState(73);
        match(ifccParser::T__2);
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
  enterRule(_localctx, 18, ifccParser::RuleReturn_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
    match(ifccParser::RETURN);
    setState(78);
    expression();
   
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
  enterRule(_localctx, 20, ifccParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    match(ifccParser::TYPE);
    setState(83);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(81);
      match(ifccParser::VAR);
      break;
    }

    case 2: {
      setState(82);
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
  enterRule(_localctx, 22, ifccParser::RuleAffectation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(ifccParser::VAR);
    setState(86);
    match(ifccParser::EGAL);
    setState(87);
    expression();
   
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
  enterRule(_localctx, 24, ifccParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(101);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(89);
      return_stmt();
      setState(90);
      match(ifccParser::T__5);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(92);
      declaration();
      setState(93);
      match(ifccParser::T__5);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(95);
      affectation();
      setState(96);
      match(ifccParser::T__5);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(98);
      unaryExpression();
      setState(99);
      match(ifccParser::T__5);
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

// Static vars and initialization.
std::vector<dfa::DFA> ifccParser::_decisionToDFA;
atn::PredictionContextCache ifccParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ifccParser::_atn;
std::vector<uint16_t> ifccParser::_serializedATN;

std::vector<std::string> ifccParser::_ruleNames = {
  "axiom", "prog", "expression", "addExpression", "addOperation", "multExpression", 
  "multOperation", "unaryExpression", "primaryExpression", "return_stmt", 
  "declaration", "affectation", "statement"
};

std::vector<std::string> ifccParser::_literalNames = {
  "", "'main'", "'('", "')'", "'{'", "'}'", "';'", "'*'", "'/'", "'%'", 
  "'--'", "'-'", "'++'", "'+'", "'<='", "'<'", "'>='", "'>'", "'!='", "'=='", 
  "'&'", "'^'", "'|'", "'&&'", "'||'", "'='", "'!'", "'~'", "'return'", 
  "'int'"
};

std::vector<std::string> ifccParser::_symbolicNames = {
  "", "", "", "", "", "", "", "MULTIPLY", "DIVIDE", "MOD", "DECREMENT", 
  "MINUS", "INCREMENT", "PLUS", "LESSEQUAL", "LESS", "GREATEREQUAL", "GREATER", 
  "NOTEQUAL", "EQUAL", "BAND", "XOR", "BOR", "AND", "OR", "EGAL", "NOT", 
  "BNOT", "RETURN", "TYPE", "CONST", "COMMENT", "DIRECTIVE", "WS", "VAR"
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
    0x3, 0x24, 0x6a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x7, 0x3, 0x26, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x29, 0xb, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x7, 
    0x5, 0x31, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x34, 0xb, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x3b, 0xa, 0x7, 0xc, 0x7, 
    0xe, 0x7, 0x3e, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x5, 0x9, 0x46, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x4e, 0xa, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x56, 0xa, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x68, 0xa, 0xe, 0x3, 0xe, 0x2, 0x2, 0xf, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x2, 0x5, 0x4, 0x2, 0xd, 0xd, 0xf, 0xf, 0x3, 0x2, 0x9, 0xb, 0x4, 0x2, 
    0xc, 0xf, 0x1c, 0x1d, 0x2, 0x66, 0x2, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2e, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x35, 0x3, 0x2, 0x2, 0x2, 0xc, 0x38, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x10, 0x45, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x14, 0x4f, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x52, 0x3, 0x2, 0x2, 0x2, 0x18, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x67, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0x5, 0x4, 0x3, 0x2, 0x1d, 0x1e, 
    0x7, 0x2, 0x2, 0x3, 0x1e, 0x3, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x7, 
    0x1f, 0x2, 0x2, 0x20, 0x21, 0x7, 0x3, 0x2, 0x2, 0x21, 0x22, 0x7, 0x4, 
    0x2, 0x2, 0x22, 0x23, 0x7, 0x5, 0x2, 0x2, 0x23, 0x27, 0x7, 0x6, 0x2, 
    0x2, 0x24, 0x26, 0x5, 0x1a, 0xe, 0x2, 0x25, 0x24, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0x29, 0x3, 0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 
    0x28, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x29, 0x27, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x7, 0x2, 0x2, 0x2b, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x2d, 0x5, 0x8, 0x5, 0x2, 0x2d, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x2e, 0x32, 0x5, 0xc, 0x7, 0x2, 0x2f, 0x31, 0x5, 0xa, 0x6, 
    0x2, 0x30, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x31, 0x34, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0x34, 0x32, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 
    0x9, 0x2, 0x2, 0x2, 0x36, 0x37, 0x5, 0xc, 0x7, 0x2, 0x37, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x3c, 0x5, 0x10, 0x9, 0x2, 0x39, 0x3b, 0x5, 0xe, 
    0x8, 0x2, 0x3a, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3e, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x3, 0x2, 0x2, 0x2, 
    0x3d, 0xd, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3f, 
    0x40, 0x9, 0x3, 0x2, 0x2, 0x40, 0x41, 0x5, 0x10, 0x9, 0x2, 0x41, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x9, 0x4, 0x2, 0x2, 0x43, 0x46, 0x5, 
    0x12, 0xa, 0x2, 0x44, 0x46, 0x5, 0x12, 0xa, 0x2, 0x45, 0x42, 0x3, 0x2, 
    0x2, 0x2, 0x45, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 0x11, 0x3, 0x2, 0x2, 
    0x2, 0x47, 0x4e, 0x7, 0x24, 0x2, 0x2, 0x48, 0x4e, 0x7, 0x20, 0x2, 0x2, 
    0x49, 0x4a, 0x7, 0x4, 0x2, 0x2, 0x4a, 0x4b, 0x5, 0x6, 0x4, 0x2, 0x4b, 
    0x4c, 0x7, 0x5, 0x2, 0x2, 0x4c, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x47, 
    0x3, 0x2, 0x2, 0x2, 0x4d, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x4e, 0x13, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x7, 0x1e, 
    0x2, 0x2, 0x50, 0x51, 0x5, 0x6, 0x4, 0x2, 0x51, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x52, 0x55, 0x7, 0x1f, 0x2, 0x2, 0x53, 0x56, 0x7, 0x24, 0x2, 0x2, 
    0x54, 0x56, 0x5, 0x18, 0xd, 0x2, 0x55, 0x53, 0x3, 0x2, 0x2, 0x2, 0x55, 
    0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 0x17, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 
    0x7, 0x24, 0x2, 0x2, 0x58, 0x59, 0x7, 0x1b, 0x2, 0x2, 0x59, 0x5a, 0x5, 
    0x6, 0x4, 0x2, 0x5a, 0x19, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x5, 0x14, 
    0xb, 0x2, 0x5c, 0x5d, 0x7, 0x8, 0x2, 0x2, 0x5d, 0x68, 0x3, 0x2, 0x2, 
    0x2, 0x5e, 0x5f, 0x5, 0x16, 0xc, 0x2, 0x5f, 0x60, 0x7, 0x8, 0x2, 0x2, 
    0x60, 0x68, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x5, 0x18, 0xd, 0x2, 0x62, 
    0x63, 0x7, 0x8, 0x2, 0x2, 0x63, 0x68, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 
    0x5, 0x10, 0x9, 0x2, 0x65, 0x66, 0x7, 0x8, 0x2, 0x2, 0x66, 0x68, 0x3, 
    0x2, 0x2, 0x2, 0x67, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x67, 0x5e, 0x3, 0x2, 
    0x2, 0x2, 0x67, 0x61, 0x3, 0x2, 0x2, 0x2, 0x67, 0x64, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x9, 0x27, 0x32, 0x3c, 0x45, 0x4d, 
    0x55, 0x67, 
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
