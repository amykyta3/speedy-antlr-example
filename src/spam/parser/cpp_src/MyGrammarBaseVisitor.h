
// Generated from MyGrammar.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "MyGrammarVisitor.h"


/**
 * This class provides an empty implementation of MyGrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MyGrammarBaseVisitor : public MyGrammarVisitor {
public:

  virtual antlrcpp::Any visitRoot(MyGrammarParser::RootContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryExpr(MyGrammarParser::BinaryExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNOP(MyGrammarParser::NOPContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTernaryExpr(MyGrammarParser::TernaryExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(MyGrammarParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(MyGrammarParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_literal(MyGrammarParser::String_literalContext *ctx) override {
    return visitChildren(ctx);
  }


};

