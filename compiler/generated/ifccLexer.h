
// Generated from ifcc.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  ifccLexer : public antlr4::Lexer {
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

