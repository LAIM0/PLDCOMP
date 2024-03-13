// Generated from ifcc.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link ifccParser}.
 */
public interface ifccListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link ifccParser#axiom}.
	 * @param ctx the parse tree
	 */
	void enterAxiom(ifccParser.AxiomContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#axiom}.
	 * @param ctx the parse tree
	 */
	void exitAxiom(ifccParser.AxiomContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#prog}.
	 * @param ctx the parse tree
	 */
	void enterProg(ifccParser.ProgContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#prog}.
	 * @param ctx the parse tree
	 */
	void exitProg(ifccParser.ProgContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#bloc}.
	 * @param ctx the parse tree
	 */
	void enterBloc(ifccParser.BlocContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#bloc}.
	 * @param ctx the parse tree
	 */
	void exitBloc(ifccParser.BlocContext ctx);
	/**
	 * Enter a parse tree produced by the {@code par}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterPar(ifccParser.ParContext ctx);
	/**
	 * Exit a parse tree produced by the {@code par}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitPar(ifccParser.ParContext ctx);
	/**
	 * Enter a parse tree produced by the {@code add}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterAdd(ifccParser.AddContext ctx);
	/**
	 * Exit a parse tree produced by the {@code add}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitAdd(ifccParser.AddContext ctx);
	/**
	 * Enter a parse tree produced by the {@code mult}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterMult(ifccParser.MultContext ctx);
	/**
	 * Exit a parse tree produced by the {@code mult}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitMult(ifccParser.MultContext ctx);
	/**
	 * Enter a parse tree produced by the {@code or}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterOr(ifccParser.OrContext ctx);
	/**
	 * Exit a parse tree produced by the {@code or}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitOr(ifccParser.OrContext ctx);
	/**
	 * Enter a parse tree produced by the {@code const}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterConst(ifccParser.ConstContext ctx);
	/**
	 * Exit a parse tree produced by the {@code const}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitConst(ifccParser.ConstContext ctx);
	/**
	 * Enter a parse tree produced by the {@code bor}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterBor(ifccParser.BorContext ctx);
	/**
	 * Exit a parse tree produced by the {@code bor}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitBor(ifccParser.BorContext ctx);
	/**
	 * Enter a parse tree produced by the {@code var}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterVar(ifccParser.VarContext ctx);
	/**
	 * Exit a parse tree produced by the {@code var}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitVar(ifccParser.VarContext ctx);
	/**
	 * Enter a parse tree produced by the {@code unary}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterUnary(ifccParser.UnaryContext ctx);
	/**
	 * Exit a parse tree produced by the {@code unary}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitUnary(ifccParser.UnaryContext ctx);
	/**
	 * Enter a parse tree produced by the {@code bitshift}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterBitshift(ifccParser.BitshiftContext ctx);
	/**
	 * Exit a parse tree produced by the {@code bitshift}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitBitshift(ifccParser.BitshiftContext ctx);
	/**
	 * Enter a parse tree produced by the {@code func_call}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterFunc_call(ifccParser.Func_callContext ctx);
	/**
	 * Exit a parse tree produced by the {@code func_call}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitFunc_call(ifccParser.Func_callContext ctx);
	/**
	 * Enter a parse tree produced by the {@code and}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterAnd(ifccParser.AndContext ctx);
	/**
	 * Exit a parse tree produced by the {@code and}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitAnd(ifccParser.AndContext ctx);
	/**
	 * Enter a parse tree produced by the {@code bxor}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterBxor(ifccParser.BxorContext ctx);
	/**
	 * Exit a parse tree produced by the {@code bxor}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitBxor(ifccParser.BxorContext ctx);
	/**
	 * Enter a parse tree produced by the {@code relational}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterRelational(ifccParser.RelationalContext ctx);
	/**
	 * Exit a parse tree produced by the {@code relational}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitRelational(ifccParser.RelationalContext ctx);
	/**
	 * Enter a parse tree produced by the {@code band}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterBand(ifccParser.BandContext ctx);
	/**
	 * Exit a parse tree produced by the {@code band}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitBand(ifccParser.BandContext ctx);
	/**
	 * Enter a parse tree produced by the {@code equality}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterEquality(ifccParser.EqualityContext ctx);
	/**
	 * Exit a parse tree produced by the {@code equality}
	 * labeled alternative in {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitEquality(ifccParser.EqualityContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#equalityOperator}.
	 * @param ctx the parse tree
	 */
	void enterEqualityOperator(ifccParser.EqualityOperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#equalityOperator}.
	 * @param ctx the parse tree
	 */
	void exitEqualityOperator(ifccParser.EqualityOperatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#relationalOperator}.
	 * @param ctx the parse tree
	 */
	void enterRelationalOperator(ifccParser.RelationalOperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#relationalOperator}.
	 * @param ctx the parse tree
	 */
	void exitRelationalOperator(ifccParser.RelationalOperatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#bitShiftOperator}.
	 * @param ctx the parse tree
	 */
	void enterBitShiftOperator(ifccParser.BitShiftOperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#bitShiftOperator}.
	 * @param ctx the parse tree
	 */
	void exitBitShiftOperator(ifccParser.BitShiftOperatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#multOperator}.
	 * @param ctx the parse tree
	 */
	void enterMultOperator(ifccParser.MultOperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#multOperator}.
	 * @param ctx the parse tree
	 */
	void exitMultOperator(ifccParser.MultOperatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#addOperator}.
	 * @param ctx the parse tree
	 */
	void enterAddOperator(ifccParser.AddOperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#addOperator}.
	 * @param ctx the parse tree
	 */
	void exitAddOperator(ifccParser.AddOperatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#unaryOperator}.
	 * @param ctx the parse tree
	 */
	void enterUnaryOperator(ifccParser.UnaryOperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#unaryOperator}.
	 * @param ctx the parse tree
	 */
	void exitUnaryOperator(ifccParser.UnaryOperatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#condition_bloc}.
	 * @param ctx the parse tree
	 */
	void enterCondition_bloc(ifccParser.Condition_blocContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#condition_bloc}.
	 * @param ctx the parse tree
	 */
	void exitCondition_bloc(ifccParser.Condition_blocContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#loop_bloc}.
	 * @param ctx the parse tree
	 */
	void enterLoop_bloc(ifccParser.Loop_blocContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#loop_bloc}.
	 * @param ctx the parse tree
	 */
	void exitLoop_bloc(ifccParser.Loop_blocContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#function_call}.
	 * @param ctx the parse tree
	 */
	void enterFunction_call(ifccParser.Function_callContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#function_call}.
	 * @param ctx the parse tree
	 */
	void exitFunction_call(ifccParser.Function_callContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#declaration}.
	 * @param ctx the parse tree
	 */
	void enterDeclaration(ifccParser.DeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#declaration}.
	 * @param ctx the parse tree
	 */
	void exitDeclaration(ifccParser.DeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#affectation}.
	 * @param ctx the parse tree
	 */
	void enterAffectation(ifccParser.AffectationContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#affectation}.
	 * @param ctx the parse tree
	 */
	void exitAffectation(ifccParser.AffectationContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#parameter}.
	 * @param ctx the parse tree
	 */
	void enterParameter(ifccParser.ParameterContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#parameter}.
	 * @param ctx the parse tree
	 */
	void exitParameter(ifccParser.ParameterContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#function_declaration}.
	 * @param ctx the parse tree
	 */
	void enterFunction_declaration(ifccParser.Function_declarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#function_declaration}.
	 * @param ctx the parse tree
	 */
	void exitFunction_declaration(ifccParser.Function_declarationContext ctx);
	/**
	 * Enter a parse tree produced by the {@code return_stmt}
	 * labeled alternative in {@link ifccParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterReturn_stmt(ifccParser.Return_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code return_stmt}
	 * labeled alternative in {@link ifccParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitReturn_stmt(ifccParser.Return_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code declaration_stmt}
	 * labeled alternative in {@link ifccParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterDeclaration_stmt(ifccParser.Declaration_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code declaration_stmt}
	 * labeled alternative in {@link ifccParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitDeclaration_stmt(ifccParser.Declaration_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code affectation_stmt}
	 * labeled alternative in {@link ifccParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterAffectation_stmt(ifccParser.Affectation_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code affectation_stmt}
	 * labeled alternative in {@link ifccParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitAffectation_stmt(ifccParser.Affectation_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code unary_stmt}
	 * labeled alternative in {@link ifccParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterUnary_stmt(ifccParser.Unary_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code unary_stmt}
	 * labeled alternative in {@link ifccParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitUnary_stmt(ifccParser.Unary_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code func_call_stmt}
	 * labeled alternative in {@link ifccParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterFunc_call_stmt(ifccParser.Func_call_stmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code func_call_stmt}
	 * labeled alternative in {@link ifccParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitFunc_call_stmt(ifccParser.Func_call_stmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code condition}
	 * labeled alternative in {@link ifccParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterCondition(ifccParser.ConditionContext ctx);
	/**
	 * Exit a parse tree produced by the {@code condition}
	 * labeled alternative in {@link ifccParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitCondition(ifccParser.ConditionContext ctx);
	/**
	 * Enter a parse tree produced by the {@code loop}
	 * labeled alternative in {@link ifccParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterLoop(ifccParser.LoopContext ctx);
	/**
	 * Exit a parse tree produced by the {@code loop}
	 * labeled alternative in {@link ifccParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitLoop(ifccParser.LoopContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#constante}.
	 * @param ctx the parse tree
	 */
	void enterConstante(ifccParser.ConstanteContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#constante}.
	 * @param ctx the parse tree
	 */
	void exitConstante(ifccParser.ConstanteContext ctx);
}