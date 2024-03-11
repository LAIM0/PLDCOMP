grammar ifcc;

axiom : prog EOF;

prog : 'int' 'main' '(' ')' '{' statement* '}' ;

expression : addExpression;
addExpression : multExpression addOperation*;
addOperation : (PLUS | MINUS ) multExpression;
multExpression : unaryExpression multOperation*;
multOperation : (MULTIPLY | DIVIDE | MOD ) unaryExpression;
unaryExpression : ((INCREMENT | DECREMENT | PLUS | MINUS | NOT | BNOT ) primaryExpression) | primaryExpression;
primaryExpression : VAR | CONST | '(' expression ')';

return_stmt: RETURN expression;

declaration : TYPE ( VAR | affectation);

affectation : VAR EGAL expression;

statement : return_stmt ';' | declaration ';' | affectation ';' | unaryExpression ';' ;


MULTIPLY : '*';
DIVIDE : '/';
MOD : '%';
DECREMENT : '--';
MINUS : '-';
INCREMENT : '++';
PLUS : '+';
LESSEQUAL : '<=';
LESS : '<';
GREATEREQUAL : '>=';
GREATER : '>';
NOTEQUAL : '!=' ;
EQUAL : '==';
BAND : '&';
XOR : '^';
BOR : '|' ;
AND : '&&';
OR : '||' ;
EGAL : '=';
NOT : '!';
BNOT : '~';
RETURN : 'return' ;
TYPE : 'int';
CONST : MINUS? [0-9]+ ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
VAR :  [a-zA-Z][0-9a-zA-Z_]* ;
