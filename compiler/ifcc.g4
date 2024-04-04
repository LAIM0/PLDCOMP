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
    | unaryOperator # unary
    | constante # const
    | VAR # var
    | '(' expression ')' # par
    | function_call # func_call
    ;

equalityOperator : EQUAL | NOTEQUAL;
relationalOperator : LESSEQUAL | LESS | GREATEREQUAL | GREATER;
bitShiftOperator : LEFTSHIFT | RIGHTSHIFT;
multOperator : MULTIPLY | DIVIDE | MOD;
addOperator : PLUS | MINUS;
unaryOperator : (INCREMENT  | DECREMENT | PLUS | MINUS | NOT) expression;

loop_bloc: 'while' '(' expression ')' bloc;

function_declaration:
    TYPE VAR '(' parameter? (',' parameter)* ')' bloc;

condition_bloc:
    IF '(' expression ')' bloc ( ELSEIF '(' expression ')' bloc)* (
        ELSE bloc
    )?;



function_call: VAR '(' expression? (',' expression)* ')';

declaration: TYPE ( VAR (',' VAR)* | affectation);

affectation: VAR (',' VAR)* EGAL expression;

parameter: TYPE VAR ('=' constante)?;

statement:
    RETURN expression';' # return_stmt
    | declaration ';'# declaration_stmt
    | affectation ';' #affectation_stmt
    | unaryOperator expression ';' # unary_stmt
    | condition_bloc # condition
    | loop_bloc # loop
    | function_call ';' # func_call_stmt
    | function_declaration  # function_declaration_stmt
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
IF : 'if';
ELSEIF : 'else if';
ELSE : 'else';
RETURN: 'return';
TYPE: 'int' | 'char' | 'void';
NUMBER: MINUS? [0-9]+;
CHAR: '\''[0-9a-zA-Z_]+'\'';
COMMENT: '/*' .*? '*/' -> skip;
DIRECTIVE: '#' .*? '\n' -> skip;
WS: [ \t\r\n] -> channel(HIDDEN);
VAR: [a-zA-Z][0-9a-zA-Z_]*;