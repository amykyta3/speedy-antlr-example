
// Generated from MyGrammar.g4 by ANTLR 4.7.2


#include "MyGrammarVisitor.h"

#include "MyGrammarParser.h"


using namespace antlrcpp;
using namespace antlr4;

MyGrammarParser::MyGrammarParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MyGrammarParser::~MyGrammarParser() {
  delete _interpreter;
}

std::string MyGrammarParser::getGrammarFileName() const {
  return "MyGrammar.g4";
}

const std::vector<std::string>& MyGrammarParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MyGrammarParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- RootContext ------------------------------------------------------------------

MyGrammarParser::RootContext::RootContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyGrammarParser::RootContext::EOF() {
  return getToken(MyGrammarParser::EOF, 0);
}

std::vector<MyGrammarParser::ExprContext *> MyGrammarParser::RootContext::expr() {
  return getRuleContexts<MyGrammarParser::ExprContext>();
}

MyGrammarParser::ExprContext* MyGrammarParser::RootContext::expr(size_t i) {
  return getRuleContext<MyGrammarParser::ExprContext>(i);
}


size_t MyGrammarParser::RootContext::getRuleIndex() const {
  return MyGrammarParser::RuleRoot;
}


antlrcpp::Any MyGrammarParser::RootContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyGrammarVisitor*>(visitor))
    return parserVisitor->visitRoot(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::RootContext* MyGrammarParser::root() {
  RootContext *_localctx = _tracker.createInstance<RootContext>(_ctx, getState());
  enterRule(_localctx, 0, MyGrammarParser::RuleRoot);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(15);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyGrammarParser::INT

    || _la == MyGrammarParser::STRING) {
      setState(10);
      expr(0);
      setState(11);
      match(MyGrammarParser::T__0);
      setState(17);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(18);
    match(MyGrammarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

MyGrammarParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MyGrammarParser::ExprContext::getRuleIndex() const {
  return MyGrammarParser::RuleExpr;
}

void MyGrammarParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BinaryExprContext ------------------------------------------------------------------

std::vector<MyGrammarParser::ExprContext *> MyGrammarParser::BinaryExprContext::expr() {
  return getRuleContexts<MyGrammarParser::ExprContext>();
}

MyGrammarParser::ExprContext* MyGrammarParser::BinaryExprContext::expr(size_t i) {
  return getRuleContext<MyGrammarParser::ExprContext>(i);
}

tree::TerminalNode* MyGrammarParser::BinaryExprContext::EXP() {
  return getToken(MyGrammarParser::EXP, 0);
}

tree::TerminalNode* MyGrammarParser::BinaryExprContext::MULT() {
  return getToken(MyGrammarParser::MULT, 0);
}

tree::TerminalNode* MyGrammarParser::BinaryExprContext::DIV() {
  return getToken(MyGrammarParser::DIV, 0);
}

tree::TerminalNode* MyGrammarParser::BinaryExprContext::MOD() {
  return getToken(MyGrammarParser::MOD, 0);
}

tree::TerminalNode* MyGrammarParser::BinaryExprContext::PLUS() {
  return getToken(MyGrammarParser::PLUS, 0);
}

tree::TerminalNode* MyGrammarParser::BinaryExprContext::MINUS() {
  return getToken(MyGrammarParser::MINUS, 0);
}

MyGrammarParser::BinaryExprContext::BinaryExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MyGrammarParser::BinaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyGrammarVisitor*>(visitor))
    return parserVisitor->visitBinaryExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NOPContext ------------------------------------------------------------------

MyGrammarParser::LiteralContext* MyGrammarParser::NOPContext::literal() {
  return getRuleContext<MyGrammarParser::LiteralContext>(0);
}

MyGrammarParser::NOPContext::NOPContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MyGrammarParser::NOPContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyGrammarVisitor*>(visitor))
    return parserVisitor->visitNOP(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TernaryExprContext ------------------------------------------------------------------

std::vector<MyGrammarParser::ExprContext *> MyGrammarParser::TernaryExprContext::expr() {
  return getRuleContexts<MyGrammarParser::ExprContext>();
}

MyGrammarParser::ExprContext* MyGrammarParser::TernaryExprContext::expr(size_t i) {
  return getRuleContext<MyGrammarParser::ExprContext>(i);
}

MyGrammarParser::TernaryExprContext::TernaryExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MyGrammarParser::TernaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyGrammarVisitor*>(visitor))
    return parserVisitor->visitTernaryExpr(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::ExprContext* MyGrammarParser::expr() {
   return expr(0);
}

MyGrammarParser::ExprContext* MyGrammarParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MyGrammarParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  MyGrammarParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, MyGrammarParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<NOPContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(21);
    literal();
    _ctx->stop = _input->LT(-1);
    setState(40);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(38);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BinaryExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(23);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(24);
          dynamic_cast<BinaryExprContext *>(_localctx)->op = match(MyGrammarParser::EXP);
          setState(25);
          expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BinaryExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(26);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(27);
          dynamic_cast<BinaryExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << MyGrammarParser::MULT)
            | (1ULL << MyGrammarParser::DIV)
            | (1ULL << MyGrammarParser::MOD))) != 0))) {
            dynamic_cast<BinaryExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(28);
          expr(5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BinaryExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(29);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(30);
          dynamic_cast<BinaryExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == MyGrammarParser::PLUS

          || _la == MyGrammarParser::MINUS)) {
            dynamic_cast<BinaryExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(31);
          expr(4);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<TernaryExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->one = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(32);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(33);
          match(MyGrammarParser::T__1);
          setState(34);
          dynamic_cast<TernaryExprContext *>(_localctx)->two = expr(0);
          setState(35);
          match(MyGrammarParser::T__2);
          setState(36);
          dynamic_cast<TernaryExprContext *>(_localctx)->three = expr(2);
          break;
        }

        } 
      }
      setState(42);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

MyGrammarParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyGrammarParser::NumberContext* MyGrammarParser::LiteralContext::number() {
  return getRuleContext<MyGrammarParser::NumberContext>(0);
}

MyGrammarParser::String_literalContext* MyGrammarParser::LiteralContext::string_literal() {
  return getRuleContext<MyGrammarParser::String_literalContext>(0);
}


size_t MyGrammarParser::LiteralContext::getRuleIndex() const {
  return MyGrammarParser::RuleLiteral;
}


antlrcpp::Any MyGrammarParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyGrammarVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::LiteralContext* MyGrammarParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 4, MyGrammarParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(45);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyGrammarParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(43);
        dynamic_cast<LiteralContext *>(_localctx)->xnum = number();
        break;
      }

      case MyGrammarParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(44);
        dynamic_cast<LiteralContext *>(_localctx)->xstr = string_literal();
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

//----------------- NumberContext ------------------------------------------------------------------

MyGrammarParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyGrammarParser::NumberContext::INT() {
  return getToken(MyGrammarParser::INT, 0);
}


size_t MyGrammarParser::NumberContext::getRuleIndex() const {
  return MyGrammarParser::RuleNumber;
}


antlrcpp::Any MyGrammarParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyGrammarVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::NumberContext* MyGrammarParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 6, MyGrammarParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47);
    match(MyGrammarParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_literalContext ------------------------------------------------------------------

MyGrammarParser::String_literalContext::String_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyGrammarParser::String_literalContext::STRING() {
  return getToken(MyGrammarParser::STRING, 0);
}


size_t MyGrammarParser::String_literalContext::getRuleIndex() const {
  return MyGrammarParser::RuleString_literal;
}


antlrcpp::Any MyGrammarParser::String_literalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyGrammarVisitor*>(visitor))
    return parserVisitor->visitString_literal(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::String_literalContext* MyGrammarParser::string_literal() {
  String_literalContext *_localctx = _tracker.createInstance<String_literalContext>(_ctx, getState());
  enterRule(_localctx, 8, MyGrammarParser::RuleString_literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    match(MyGrammarParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool MyGrammarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MyGrammarParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> MyGrammarParser::_decisionToDFA;
atn::PredictionContextCache MyGrammarParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MyGrammarParser::_atn;
std::vector<uint16_t> MyGrammarParser::_serializedATN;

std::vector<std::string> MyGrammarParser::_ruleNames = {
  "root", "expr", "literal", "number", "string_literal"
};

std::vector<std::string> MyGrammarParser::_literalNames = {
  "", "';'", "'?'", "':'", "", "", "", "", "'+'", "'-'", "'*'", "'**'", 
  "'/'", "'%'"
};

std::vector<std::string> MyGrammarParser::_symbolicNames = {
  "", "", "", "", "SL_COMMENT", "ML_COMMENT", "INT", "STRING", "PLUS", "MINUS", 
  "MULT", "EXP", "DIV", "MOD", "WS"
};

dfa::Vocabulary MyGrammarParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MyGrammarParser::_tokenNames;

MyGrammarParser::Initializer::Initializer() {
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
    0x3, 0x10, 0x36, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x7, 0x2, 0x10, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x13, 0xb, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x29, 
    0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x2c, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 
    0x4, 0x30, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x2, 0x3, 0x4, 0x7, 0x2, 0x4, 0x6, 0x8, 0xa, 0x2, 0x4, 0x4, 0x2, 0xc, 
    0xc, 0xe, 0xf, 0x3, 0x2, 0xa, 0xb, 0x2, 0x36, 0x2, 0x11, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x16, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0xa, 0x33, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x5, 
    0x4, 0x3, 0x2, 0xd, 0xe, 0x7, 0x3, 0x2, 0x2, 0xe, 0x10, 0x3, 0x2, 0x2, 
    0x2, 0xf, 0xc, 0x3, 0x2, 0x2, 0x2, 0x10, 0x13, 0x3, 0x2, 0x2, 0x2, 0x11, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x11, 0x12, 0x3, 0x2, 0x2, 0x2, 0x12, 0x14, 
    0x3, 0x2, 0x2, 0x2, 0x13, 0x11, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15, 0x7, 
    0x2, 0x2, 0x3, 0x15, 0x3, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x8, 0x3, 
    0x1, 0x2, 0x17, 0x18, 0x5, 0x6, 0x4, 0x2, 0x18, 0x2a, 0x3, 0x2, 0x2, 
    0x2, 0x19, 0x1a, 0xc, 0x7, 0x2, 0x2, 0x1a, 0x1b, 0x7, 0xd, 0x2, 0x2, 
    0x1b, 0x29, 0x5, 0x4, 0x3, 0x8, 0x1c, 0x1d, 0xc, 0x6, 0x2, 0x2, 0x1d, 
    0x1e, 0x9, 0x2, 0x2, 0x2, 0x1e, 0x29, 0x5, 0x4, 0x3, 0x7, 0x1f, 0x20, 
    0xc, 0x5, 0x2, 0x2, 0x20, 0x21, 0x9, 0x3, 0x2, 0x2, 0x21, 0x29, 0x5, 
    0x4, 0x3, 0x6, 0x22, 0x23, 0xc, 0x4, 0x2, 0x2, 0x23, 0x24, 0x7, 0x4, 
    0x2, 0x2, 0x24, 0x25, 0x5, 0x4, 0x3, 0x2, 0x25, 0x26, 0x7, 0x5, 0x2, 
    0x2, 0x26, 0x27, 0x5, 0x4, 0x3, 0x4, 0x27, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0x19, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0x28, 0x22, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2c, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0x2b, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2a, 0x3, 0x2, 
    0x2, 0x2, 0x2d, 0x30, 0x5, 0x8, 0x5, 0x2, 0x2e, 0x30, 0x5, 0xa, 0x6, 
    0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2e, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x7, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x7, 0x8, 0x2, 0x2, 0x32, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x7, 0x9, 0x2, 0x2, 0x34, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x11, 0x28, 0x2a, 0x2f, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MyGrammarParser::Initializer MyGrammarParser::_init;
