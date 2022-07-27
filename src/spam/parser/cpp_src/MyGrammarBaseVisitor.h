
// Generated from MyGrammar.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "MyGrammarVisitor.h"


/**
 * This class provides an empty implementation of MyGrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MyGrammarBaseVisitor : public MyGrammarVisitor {
public:

  virtual std::any visitRoot(MyGrammarParser::RootContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinaryExpr(MyGrammarParser::BinaryExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNOP(MyGrammarParser::NOPContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTernaryExpr(MyGrammarParser::TernaryExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(MyGrammarParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(MyGrammarParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString_literal(MyGrammarParser::String_literalContext *ctx) override {
    return visitChildren(ctx);
  }


};

