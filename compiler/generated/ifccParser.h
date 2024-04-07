
// Generated from ifcc.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  ifccParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, DEREFERENCE = 10, ADDRESSOF = 11, RIGHTSHIFT = 12, 
    LEFTSHIFT = 13, MULTIPLY = 14, DIVIDE = 15, MOD = 16, DECREMENT = 17, 
    MINUS = 18, INCREMENT = 19, PLUS = 20, LESSEQUAL = 21, LESS = 22, GREATEREQUAL = 23, 
    GREATER = 24, NOTEQUAL = 25, EQUAL = 26, BAND = 27, BXOR = 28, BOR = 29, 
    AND = 30, OR = 31, EGAL = 32, NOT = 33, BNOT = 34, IF = 35, ELSEIF = 36, 
    ELSE = 37, RETURN = 38, TYPE = 39, NUMBER = 40, CHAR = 41, COMMENT = 42, 
    DIRECTIVE = 43, WS = 44, VAR = 45
  };

  enum {
    RuleAxiom = 0, RuleProg = 1, RuleBloc = 2, RuleExpression = 3, RuleLvalue_expression = 4, 
    RuleEqualityOperator = 5, RuleRelationalOperator = 6, RuleBitShiftOperator = 7, 
    RuleMultOperator = 8, RuleAddOperator = 9, RuleUnaryOperator = 10, RuleCondition_bloc = 11, 
    RuleLoop_bloc = 12, RuleFunction_call = 13, RuleDeclaration = 14, RuleAffectation = 15, 
    RuleParameter = 16, RuleFunction_declaration = 17, RuleStatement = 18, 
    RuleType = 19, RuleConstante = 20
  };

  explicit ifccParser(antlr4::TokenStream *input);
  ~ifccParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class AxiomContext;
  class ProgContext;
  class BlocContext;
  class ExpressionContext;
  class Lvalue_expressionContext;
  class EqualityOperatorContext;
  class RelationalOperatorContext;
  class BitShiftOperatorContext;
  class MultOperatorContext;
  class AddOperatorContext;
  class UnaryOperatorContext;
  class Condition_blocContext;
  class Loop_blocContext;
  class Function_callContext;
  class DeclarationContext;
  class AffectationContext;
  class ParameterContext;
  class Function_declarationContext;
  class StatementContext;
  class TypeContext;
  class ConstanteContext; 

  class  AxiomContext : public antlr4::ParserRuleContext {
  public:
    AxiomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgContext *prog();
    antlr4::tree::TerminalNode *EOF();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AxiomContext* axiom();

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Function_declarationContext *> function_declaration();
    Function_declarationContext* function_declaration(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  BlocContext : public antlr4::ParserRuleContext {
  public:
    BlocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlocContext* bloc();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ParContext : public ExpressionContext {
  public:
    ParContext(ExpressionContext *ctx);

    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddContext : public ExpressionContext {
  public:
    AddContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    AddOperatorContext *addOperator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultContext : public ExpressionContext {
  public:
    MultContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    MultOperatorContext *multOperator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OrContext : public ExpressionContext {
  public:
    OrContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *OR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstContext : public ExpressionContext {
  public:
    ConstContext(ExpressionContext *ctx);

    ConstanteContext *constante();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BorContext : public ExpressionContext {
  public:
    BorContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *BOR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LvalueExpContext : public ExpressionContext {
  public:
    LvalueExpContext(ExpressionContext *ctx);

    Lvalue_expressionContext *lvalue_expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryContext : public ExpressionContext {
  public:
    UnaryContext(ExpressionContext *ctx);

    UnaryOperatorContext *unaryOperator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitshiftContext : public ExpressionContext {
  public:
    BitshiftContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    BitShiftOperatorContext *bitShiftOperator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Func_callContext : public ExpressionContext {
  public:
    Func_callContext(ExpressionContext *ctx);

    Function_callContext *function_call();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndContext : public ExpressionContext {
  public:
    AndContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *AND();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BxorContext : public ExpressionContext {
  public:
    BxorContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *BXOR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RelationalContext : public ExpressionContext {
  public:
    RelationalContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    RelationalOperatorContext *relationalOperator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BandContext : public ExpressionContext {
  public:
    BandContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *BAND();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrayAccessExpContext : public ExpressionContext {
  public:
    ArrayAccessExpContext(ExpressionContext *ctx);

    Lvalue_expressionContext *lvalue_expression();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqualityContext : public ExpressionContext {
  public:
    EqualityContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    EqualityOperatorContext *equalityOperator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  Lvalue_expressionContext : public antlr4::ParserRuleContext {
  public:
    Lvalue_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Lvalue_expressionContext() = default;
    void copyFrom(Lvalue_expressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ArrayAccessLvalueContext : public Lvalue_expressionContext {
  public:
    ArrayAccessLvalueContext(Lvalue_expressionContext *ctx);

    Lvalue_expressionContext *lvalue_expression();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddressofLvalueContext : public Lvalue_expressionContext {
  public:
    AddressofLvalueContext(Lvalue_expressionContext *ctx);

    antlr4::tree::TerminalNode *ADDRESSOF();
    Lvalue_expressionContext *lvalue_expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParLvalueContext : public Lvalue_expressionContext {
  public:
    ParLvalueContext(Lvalue_expressionContext *ctx);

    Lvalue_expressionContext *lvalue_expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DereferenceLvalueContext : public Lvalue_expressionContext {
  public:
    DereferenceLvalueContext(Lvalue_expressionContext *ctx);

    antlr4::tree::TerminalNode *DEREFERENCE();
    Lvalue_expressionContext *lvalue_expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarLvalueContext : public Lvalue_expressionContext {
  public:
    VarLvalueContext(Lvalue_expressionContext *ctx);

    antlr4::tree::TerminalNode *VAR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Lvalue_expressionContext* lvalue_expression();
  Lvalue_expressionContext* lvalue_expression(int precedence);
  class  EqualityOperatorContext : public antlr4::ParserRuleContext {
  public:
    EqualityOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *NOTEQUAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualityOperatorContext* equalityOperator();

  class  RelationalOperatorContext : public antlr4::ParserRuleContext {
  public:
    RelationalOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LESSEQUAL();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *GREATEREQUAL();
    antlr4::tree::TerminalNode *GREATER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationalOperatorContext* relationalOperator();

  class  BitShiftOperatorContext : public antlr4::ParserRuleContext {
  public:
    BitShiftOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFTSHIFT();
    antlr4::tree::TerminalNode *RIGHTSHIFT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BitShiftOperatorContext* bitShiftOperator();

  class  MultOperatorContext : public antlr4::ParserRuleContext {
  public:
    MultOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MULTIPLY();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *MOD();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultOperatorContext* multOperator();

  class  AddOperatorContext : public antlr4::ParserRuleContext {
  public:
    AddOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddOperatorContext* addOperator();

  class  UnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCREMENT();
    Lvalue_expressionContext *lvalue_expression();
    antlr4::tree::TerminalNode *DECREMENT();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *NOT();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryOperatorContext* unaryOperator();

  class  Condition_blocContext : public antlr4::ParserRuleContext {
  public:
    Condition_blocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<BlocContext *> bloc();
    BlocContext* bloc(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSEIF();
    antlr4::tree::TerminalNode* ELSEIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_blocContext* condition_bloc();

  class  Loop_blocContext : public antlr4::ParserRuleContext {
  public:
    Loop_blocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    BlocContext *bloc();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_blocContext* loop_bloc();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_callContext* function_call();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *VAR();
    AffectationContext *affectation();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  AffectationContext : public antlr4::ParserRuleContext {
  public:
    AffectationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Lvalue_expressionContext *lvalue_expression();
    antlr4::tree::TerminalNode *EGAL();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AffectationContext* affectation();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *EGAL();
    ConstanteContext *constante();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  Function_declarationContext : public antlr4::ParserRuleContext {
  public:
    Function_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *VAR();
    BlocContext *bloc();
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_declarationContext* function_declaration();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ConditionContext : public StatementContext {
  public:
    ConditionContext(StatementContext *ctx);

    Condition_blocContext *condition_bloc();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Unary_stmtContext : public StatementContext {
  public:
    Unary_stmtContext(StatementContext *ctx);

    UnaryOperatorContext *unaryOperator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Func_call_stmtContext : public StatementContext {
  public:
    Func_call_stmtContext(StatementContext *ctx);

    Function_callContext *function_call();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Declaration_stmtContext : public StatementContext {
  public:
    Declaration_stmtContext(StatementContext *ctx);

    DeclarationContext *declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LoopContext : public StatementContext {
  public:
    LoopContext(StatementContext *ctx);

    Loop_blocContext *loop_bloc();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Affectation_stmtContext : public StatementContext {
  public:
    Affectation_stmtContext(StatementContext *ctx);

    AffectationContext *affectation();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Return_stmtContext : public StatementContext {
  public:
    Return_stmtContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    std::vector<antlr4::tree::TerminalNode *> DEREFERENCE();
    antlr4::tree::TerminalNode* DEREFERENCE(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  ConstanteContext : public antlr4::ParserRuleContext {
  public:
    ConstanteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *CHAR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstanteContext* constante();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool lvalue_expressionSempred(Lvalue_expressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

