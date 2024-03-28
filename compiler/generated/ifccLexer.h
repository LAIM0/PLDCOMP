
// Generated from ifcc.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  ifccLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    DEREFERENCE = 8, ADDRESSOF = 9, RIGHTSHIFT = 10, LEFTSHIFT = 11, MULTIPLY = 12, 
    DIVIDE = 13, MOD = 14, DECREMENT = 15, MINUS = 16, INCREMENT = 17, PLUS = 18, 
    LESSEQUAL = 19, LESS = 20, GREATEREQUAL = 21, GREATER = 22, NOTEQUAL = 23, 
    EQUAL = 24, BAND = 25, BXOR = 26, BOR = 27, AND = 28, OR = 29, EGAL = 30, 
    NOT = 31, BNOT = 32, IF = 33, ELSEIF = 34, ELSE = 35, RETURN = 36, TYPE = 37, 
    NUMBER = 38, CHAR = 39, COMMENT = 40, DIRECTIVE = 41, WS = 42, VAR = 43
  };

  explicit ifccLexer(antlr4::CharStream *input);
  ~ifccLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

