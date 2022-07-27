
// Generated from MyGrammar.g4 by ANTLR 4.10.1

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
    virtual std::any visitRoot(MyGrammarParser::RootContext *context) = 0;

    virtual std::any visitBinaryExpr(MyGrammarParser::BinaryExprContext *context) = 0;

    virtual std::any visitNOP(MyGrammarParser::NOPContext *context) = 0;

    virtual std::any visitTernaryExpr(MyGrammarParser::TernaryExprContext *context) = 0;

    virtual std::any visitLiteral(MyGrammarParser::LiteralContext *context) = 0;

    virtual std::any visitNumber(MyGrammarParser::NumberContext *context) = 0;

    virtual std::any visitString_literal(MyGrammarParser::String_literalContext *context) = 0;


};

