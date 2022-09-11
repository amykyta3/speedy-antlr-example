
// Generated from MyGrammar.g4 by ANTLR 4.11.1


#include "MyGrammarVisitor.h"

#include "MyGrammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MyGrammarParserStaticData final {
  MyGrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MyGrammarParserStaticData(const MyGrammarParserStaticData&) = delete;
  MyGrammarParserStaticData(MyGrammarParserStaticData&&) = delete;
  MyGrammarParserStaticData& operator=(const MyGrammarParserStaticData&) = delete;
  MyGrammarParserStaticData& operator=(MyGrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mygrammarParserOnceFlag;
MyGrammarParserStaticData *mygrammarParserStaticData = nullptr;

void mygrammarParserInitialize() {
  assert(mygrammarParserStaticData == nullptr);
  auto staticData = std::make_unique<MyGrammarParserStaticData>(
    std::vector<std::string>{
      "root", "expr", "literal", "number", "string_literal"
    },
    std::vector<std::string>{
      "", "';'", "'\\u003F'", "':'", "", "", "", "", "'+'", "'-'", "'*'", 
      "'**'", "'/'", "'%'"
    },
    std::vector<std::string>{
      "", "", "", "", "SL_COMMENT", "ML_COMMENT", "INT", "STRING", "PLUS", 
      "MINUS", "MULT", "EXP", "DIV", "MOD", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,14,52,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,1,0,1,0,5,0,14,
  	8,0,10,0,12,0,17,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,39,8,1,10,1,12,1,42,9,1,1,2,1,2,3,
  	2,46,8,2,1,3,1,3,1,4,1,4,1,4,0,1,2,5,0,2,4,6,8,0,2,2,0,10,10,12,13,1,
  	0,8,9,52,0,15,1,0,0,0,2,20,1,0,0,0,4,45,1,0,0,0,6,47,1,0,0,0,8,49,1,0,
  	0,0,10,11,3,2,1,0,11,12,5,1,0,0,12,14,1,0,0,0,13,10,1,0,0,0,14,17,1,0,
  	0,0,15,13,1,0,0,0,15,16,1,0,0,0,16,18,1,0,0,0,17,15,1,0,0,0,18,19,5,0,
  	0,1,19,1,1,0,0,0,20,21,6,1,-1,0,21,22,3,4,2,0,22,40,1,0,0,0,23,24,10,
  	5,0,0,24,25,5,11,0,0,25,39,3,2,1,6,26,27,10,4,0,0,27,28,7,0,0,0,28,39,
  	3,2,1,5,29,30,10,3,0,0,30,31,7,1,0,0,31,39,3,2,1,4,32,33,10,2,0,0,33,
  	34,5,2,0,0,34,35,3,2,1,0,35,36,5,3,0,0,36,37,3,2,1,2,37,39,1,0,0,0,38,
  	23,1,0,0,0,38,26,1,0,0,0,38,29,1,0,0,0,38,32,1,0,0,0,39,42,1,0,0,0,40,
  	38,1,0,0,0,40,41,1,0,0,0,41,3,1,0,0,0,42,40,1,0,0,0,43,46,3,6,3,0,44,
  	46,3,8,4,0,45,43,1,0,0,0,45,44,1,0,0,0,46,5,1,0,0,0,47,48,5,6,0,0,48,
  	7,1,0,0,0,49,50,5,7,0,0,50,9,1,0,0,0,4,15,38,40,45
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mygrammarParserStaticData = staticData.release();
}

}

MyGrammarParser::MyGrammarParser(TokenStream *input) : MyGrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

MyGrammarParser::MyGrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  MyGrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mygrammarParserStaticData->atn, mygrammarParserStaticData->decisionToDFA, mygrammarParserStaticData->sharedContextCache, options);
}

MyGrammarParser::~MyGrammarParser() {
  delete _interpreter;
}

const atn::ATN& MyGrammarParser::getATN() const {
  return *mygrammarParserStaticData->atn;
}

std::string MyGrammarParser::getGrammarFileName() const {
  return "MyGrammar.g4";
}

const std::vector<std::string>& MyGrammarParser::getRuleNames() const {
  return mygrammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& MyGrammarParser::getVocabulary() const {
  return mygrammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MyGrammarParser::getSerializedATN() const {
  return mygrammarParserStaticData->serializedATN;
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


std::any MyGrammarParser::RootContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyGrammarVisitor*>(visitor))
    return parserVisitor->visitRoot(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::RootContext* MyGrammarParser::root() {
  RootContext *_localctx = _tracker.createInstance<RootContext>(_ctx, getState());
  enterRule(_localctx, 0, MyGrammarParser::RuleRoot);
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


std::any MyGrammarParser::BinaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any MyGrammarParser::NOPContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any MyGrammarParser::TernaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
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
          antlrcpp::downCast<BinaryExprContext *>(_localctx)->op = match(MyGrammarParser::EXP);
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
          antlrcpp::downCast<BinaryExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 13312) != 0)) {
            antlrcpp::downCast<BinaryExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
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
          antlrcpp::downCast<BinaryExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == MyGrammarParser::PLUS

          || _la == MyGrammarParser::MINUS)) {
            antlrcpp::downCast<BinaryExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
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
          antlrcpp::downCast<TernaryExprContext *>(_localctx)->two = expr(0);
          setState(35);
          match(MyGrammarParser::T__2);
          setState(36);
          antlrcpp::downCast<TernaryExprContext *>(_localctx)->three = expr(2);
          break;
        }

        default:
          break;
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


std::any MyGrammarParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyGrammarVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::LiteralContext* MyGrammarParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 4, MyGrammarParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(45);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyGrammarParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(43);
        antlrcpp::downCast<LiteralContext *>(_localctx)->xnum = number();
        break;
      }

      case MyGrammarParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(44);
        antlrcpp::downCast<LiteralContext *>(_localctx)->xstr = string_literal();
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


std::any MyGrammarParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyGrammarVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::NumberContext* MyGrammarParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 6, MyGrammarParser::RuleNumber);

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


std::any MyGrammarParser::String_literalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyGrammarVisitor*>(visitor))
    return parserVisitor->visitString_literal(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::String_literalContext* MyGrammarParser::string_literal() {
  String_literalContext *_localctx = _tracker.createInstance<String_literalContext>(_ctx, getState());
  enterRule(_localctx, 8, MyGrammarParser::RuleString_literal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
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
    case 1: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

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

void MyGrammarParser::initialize() {
  ::antlr4::internal::call_once(mygrammarParserOnceFlag, mygrammarParserInitialize);
}
