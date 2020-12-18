parser grammar MyGrammarParser;

options {
    tokenVocab=MyGrammarLexer;
}

root: (expr SEMICOLON)* EOF;

expr: expr op=EXP expr              #BinaryExpr
    | expr op=(MULT|DIV|MOD) expr   #BinaryExpr
    | expr op=(PLUS|MINUS) expr     #BinaryExpr
    | <assoc=right> one=expr QMARK two=expr COLON three=expr #TernaryExpr
    | literal                  #NOP
    ;

literal : xnum=number
        | xstr=string_literal
        ;

number : INT;

string_literal  : STRING;
