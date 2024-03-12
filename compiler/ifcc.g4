grammar ifcc;

axiom: prog EOF;

prog: function_declaration*;

bloc: '{' statement* '}';

expression: orExpression;

orExpression: andExpression orOperation*;
orOperation: OR andExpression;

andExpression: borExpression andOperation*;
andOperation: AND borExpression;

borExpression: bxorExpression borOperation*;
borOperation: BOR bxorExpression;

bxorExpression: bandExpression bxorOperation*;
bxorOperation: BXOR bandExpression;

bandExpression: equalExpression bandOperation*;
bandOperation: BAND equalExpression;

equalExpression: relationalExpression equalOperation*;
equalOperation: (EQUAL | NOTEQUAL) relationalExpression;

relationalExpression: bitshiftExpression relationalOperation*;
relationalOperation: (LESSEQUAL | LESS | GREATEREQUAL | GREATER) bitshiftExpression;

bitshiftExpression: addExpression bitshiftOperation*;
<<<<<<< HEAD
bitshiftOperation: (SHIFTLEFT | SHIFTRIGHT) addExpression;
=======
bitshiftOperation: (LEFTSHIFT | RIGHTSHIFT) addExpression;
>>>>>>> chore: chchanging grammar - not completed

addExpression: multExpression addOperation*;
addOperation: (PLUS | MINUS) multExpression;

multExpression: unaryExpression multOperation*;
multOperation: (MULTIPLY | DIVIDE | MOD) unaryExpression;

unaryExpression: (
        (INCREMENT | DECREMENT | PLUS | MINUS | NOT | BNOT) primaryExpression
    )
    | primaryExpression;
primaryExpression: VAR | constante | '(' expression ')';

condition_bloc:
    'if(' expression ')' bloc ('else if(' expression ')' bloc)* (
        'else' bloc
    )?;

loop_bloc: 'while(' expression ')' bloc;

return_stmt: RETURN expression;

function_call: VAR '(' expression (',' expression)* ')';

declaration: TYPE ( VAR | affectation);

affectation: VAR EGAL expression;

parameter: TYPE VAR ('=' constante)?;

function_declaration:
    TYPE VAR '(' parameter? (',' parameter)* ')' bloc;

statement:
    return_stmt ';'
    | declaration ';'
    | affectation ';'
    | unaryExpression ';'
    | function_call ';'
    | condition_bloc
    | loop_bloc;

constante: NUMBER | CHAR;

<<<<<<< HEAD
SHIFTRIGHT: '>>';
SHIFTLEFT: '<<';
=======
RIGHTSHIFT: '>>';
LEFTSHIFT: '<<';
>>>>>>> chore: chchanging grammar - not completed
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