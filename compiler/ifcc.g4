grammar ifcc;

axiom: prog EOF;

prog: function_declaration*;

bloc: '{' statement* '}';

expression : expression multOperator expression # mult
    | expression addOperator expression # add
    | expression bitShiftOperator expression # bitshift
    | expression relationalOperator expression # relational
    | expression equalityOperator expression # equality
    | expression BAND expression # band
    | expression BXOR expression # bxor 
    | expression BOR expression # bor 
    | expression AND expression # and
    | expression OR expression # or
    | unaryOperator expression # unary
    | constante # const
    | VAR # var
    | '(' expression ')' # par
    | function_call # func_call
    ;

equalityOperator : EQUAL | NOTEQUAL;
relationalOperator : LESSEQUAL | LESS | GREATEREQUAL | GREATER;
bitShiftOperator : LEFTSHIFT | RIGHTSHIFT;
multOperator : MULT | DIVIDE | MOD;
addOperator : PLUS | MINUS;
unaryOperator : INCREMENT | DECREMENT | PLUS | MINUS | NOT;

condition_bloc:
    'if(' expression ')' bloc ('else if(' expression ')' bloc)* (
        'else' bloc
    )?;

loop_bloc: 'while(' expression ')' bloc;


function_call: VAR '(' expression (',' expression)* ')';

declaration: TYPE ( VAR | affectation);

affectation: VAR EGAL expression;

parameter: TYPE VAR ('=' constante)?;

function_declaration:
    TYPE VAR '(' parameter? (',' parameter)* ')' bloc;

statement:
    RETURN expression';' # return_stmt
    | declaration ';'# declaration_stmt
    | affectation ';' #affectation_stmt
    | unaryOperator expression ';' # unary_stmt
    | function_call ';' # func_call_stmt
    | condition_bloc # condition
    | loop_bloc # loop
    ;

constante: NUMBER | CHAR;

RIGHTSHIFT: '>>';
LEFTSHIFT: '<<';
MULTIPLY: '*';
DIVIDE: '/';
MOD: '%';
DECREMENT: '--';
MINUS: '-';
INCREMENT: '++';
PLUS: '+';
LESSEQUAL: '<=';
LESS: '<';
GREATEREQUAL: '>=';
GREATER: '>';
NOTEQUAL: '!=';
EQUAL: '==';
BAND: '&';
BXOR: '^';
BOR: '|';
AND: '&&';
OR: '||';
EGAL: '=';
NOT: '!';
BNOT: '~';
RETURN: 'return';
TYPE: 'int' | 'char';
NUMBER: MINUS? [0-9]+;
CHAR: [a-zA-Z][0-9a-zA-Z_];
COMMENT: '/*' .*? '*/' -> skip;
DIRECTIVE: '#' .*? '\n' -> skip;
WS: [ \t\r\n] -> channel(HIDDEN);
VAR: [a-zA-Z][0-9a-zA-Z_]*;