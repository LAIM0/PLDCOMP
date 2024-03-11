grammar ifcc;

axiom : prog EOF;

prog : 'int' 'main' '(' ')' '{' statement* '}' ;

statement : return_stmt ';' | declaration ';' | affectation ';' ;

return_stmt: RETURN expr;

declaration : TYPE ( VAR | affectation);

affectation : VAR EGAL expr;

expr : (VAR | CONST);

RETURN : 'return' ;
TYPE : 'int';
CONST : [0-9]+ ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
EGAL : '=';
WS    : [ \t\r\n] -> channel(HIDDEN);
VAR :  [a-zA-Z][0-9a-zA-Z_]* ;