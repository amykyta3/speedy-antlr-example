grammar MyGrammar;

root: (expr ';')* EOF;

expr: expr op=EXP expr              #BinaryExpr
    | expr op=(MULT|DIV|MOD) expr   #BinaryExpr
    | expr op=(PLUS|MINUS) expr     #BinaryExpr
    | <assoc=right> one=expr '?' two=expr ':' three=expr #TernaryExpr
    | literal                  #NOP
    ;

literal : xnum=number
        | xstr=string_literal
        ;

number : INT;

string_literal  : STRING;

//==============================================================================
// Lexer
//==============================================================================

SL_COMMENT : ( '//' ~[\r\n]* '\r'? ('\n'|EOF)) -> skip;
ML_COMMENT : ( '/*' .*? '*/' ) -> skip;

//------------------------------------------------------------------------------
// Literals
//------------------------------------------------------------------------------

INT     : [0-9]+ ;

fragment ESC : '\\"' | '\\\\' ;
STRING :  '"' (ESC | ~('"'|'\\'))* '"' ;

//------------------------------------------------------------------------------
// Operators
//------------------------------------------------------------------------------

PLUS    : '+' ;
MINUS   : '-' ;
MULT    : '*' ;
EXP     : '**' ;
DIV     : '/' ;
MOD     : '%' ;

//------------------------------------------------------------------------------
WS  :   [ \t\r\n]+ -> skip ;
