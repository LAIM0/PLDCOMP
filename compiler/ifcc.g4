grammar ifcc;

axiom: prog EOF;

prog: function_declaration*;

bloc: '{' statement* '}';

expression:
	expression multOperator expression			# mult
	| expression addOperator expression			# add
	| expression bitShiftOperator expression	# bitshift
	| expression relationalOperator expression	# relational
	| expression equalityOperator expression	# equality
	| expression BAND expression				# band
	| expression BXOR expression				# bxor
	| expression BOR expression					# bor
	| expression AND expression					# and
	| expression OR expression					# or
	| unaryOperator								# unary
	| constante									# const
	| lvalue_expression							# lvalueExp
	| lvalue_expression '[' expression ']'		# arrayAccessExp
	| '(' expression ')'						# par
	| function_call								# func_call;

lvalue_expression:
	VAR										# varLvalue
	| DEREFERENCE lvalue_expression			# dereferenceLvalue
	| ADDRESSOF lvalue_expression			# addressofLvalue
	| lvalue_expression '[' expression ']'	# arrayAccessLvalue
	| '(' lvalue_expression ')'				# parLvalue;

equalityOperator: EQUAL | NOTEQUAL;
relationalOperator: LESSEQUAL | LESS | GREATEREQUAL | GREATER;
bitShiftOperator: LEFTSHIFT | RIGHTSHIFT;
multOperator: MULTIPLY | DIVIDE | MOD;
addOperator: PLUS | MINUS;

unaryOperator:
	INCREMENT lvalue_expression
	| DECREMENT lvalue_expression
	| PLUS lvalue_expression
	| MINUS lvalue_expression
	| NOT expression;

condition_bloc:
	IF '(' expression ')' bloc (ELSEIF '(' expression ')' bloc)* (
		ELSE bloc
	)?;

loop_bloc: 'while(' expression ')' bloc;

function_call: VAR '(' expression? (',' expression)* ')';

declaration: type ( VAR | affectation);

affectation: lvalue_expression EGAL expression;

parameter: type VAR ('=' constante)?;

function_declaration:
	type VAR '(' parameter? (',' parameter)* ')' bloc;

statement:
	RETURN expression ';'	# return_stmt
	| declaration ';'		# declaration_stmt
	| affectation ';'		# affectation_stmt
	| unaryOperator ';'		# unary_stmt
	| function_call ';'		# func_call_stmt
	| condition_bloc		# condition
	| loop_bloc				# loop;

type: TYPE (DEREFERENCE)*;

constante: NUMBER | CHAR;

DEREFERENCE: '*';
ADDRESSOF: '&';
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
IF: 'if';
ELSEIF: 'else if';
ELSE: 'else';
RETURN: 'return';
TYPE: 'int' | 'char' | 'void';
NUMBER: MINUS? [0-9]+;
CHAR: '\'' [0-9a-zA-Z_]+ '\'';
COMMENT: '/*' .*? '*/' -> skip;
DIRECTIVE: '#' .*? '\n' -> skip;
WS: [ \t\r\n] -> channel(HIDDEN);
VAR: [a-zA-Z][0-9a-zA-Z_]*;