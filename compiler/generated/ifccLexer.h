
// Generated from ifcc.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  ifccLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, RIGHTSHIFT = 11, LEFTSHIFT = 12, MULTIPLY = 13, 
    DIVIDE = 14, MOD = 15, DECREMENT = 16, MINUS = 17, INCREMENT = 18, PLUS = 19, 
    LESSEQUAL = 20, LESS = 21, GREATEREQUAL = 22, GREATER = 23, NOTEQUAL = 24, 
    EQUAL = 25, BAND = 26, BXOR = 27, BOR = 28, AND = 29, OR = 30, EGAL = 31, 
    NOT = 32, BNOT = 33, RETURN = 34, TYPE = 35, NUMBER = 36, CHAR = 37, 
    COMMENT = 38, DIRECTIVE = 39, WS = 40, VAR = 41
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

