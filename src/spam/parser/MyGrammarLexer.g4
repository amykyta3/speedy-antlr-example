lexer grammar MyGrammarLexer;

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

SEMICOLON : ';';
COLON : ':';
QMARK : '?';

//------------------------------------------------------------------------------
WS  :   [ \t\r\n]+ -> skip ;
