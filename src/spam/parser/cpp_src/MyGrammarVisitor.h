
// Generated from MyGrammar.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "MyGrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MyGrammarParser.
 */
class  MyGrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MyGrammarParser.
   */
    virtual antlrcpp::Any visitRoot(MyGrammarParser::RootContext *context) = 0;

    virtual antlrcpp::Any visitBinaryExpr(MyGrammarParser::BinaryExprContext *context) = 0;

    virtual antlrcpp::Any visitNOP(MyGrammarParser::NOPContext *context) = 0;

    virtual antlrcpp::Any visitTernaryExpr(MyGrammarParser::TernaryExprContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(MyGrammarParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitNumber(MyGrammarParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitString_literal(MyGrammarParser::String_literalContext *context) = 0;


};

