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
	 * Enter a parse tree produced by {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpression(ifccParser.ExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpression(ifccParser.ExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#orExpression}.
	 * @param ctx the parse tree
	 */
	void enterOrExpression(ifccParser.OrExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#orExpression}.
	 * @param ctx the parse tree
	 */
	void exitOrExpression(ifccParser.OrExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#orOperation}.
	 * @param ctx the parse tree
	 */
	void enterOrOperation(ifccParser.OrOperationContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#orOperation}.
	 * @param ctx the parse tree
	 */
	void exitOrOperation(ifccParser.OrOperationContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#andExpression}.
	 * @param ctx the parse tree
	 */
	void enterAndExpression(ifccParser.AndExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#andExpression}.
	 * @param ctx the parse tree
	 */
	void exitAndExpression(ifccParser.AndExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#andOperation}.
	 * @param ctx the parse tree
	 */
	void enterAndOperation(ifccParser.AndOperationContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#andOperation}.
	 * @param ctx the parse tree
	 */
	void exitAndOperation(ifccParser.AndOperationContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#borExpression}.
	 * @param ctx the parse tree
	 */
	void enterBorExpression(ifccParser.BorExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#borExpression}.
	 * @param ctx the parse tree
	 */
	void exitBorExpression(ifccParser.BorExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#borOperation}.
	 * @param ctx the parse tree
	 */
	void enterBorOperation(ifccParser.BorOperationContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#borOperation}.
	 * @param ctx the parse tree
	 */
	void exitBorOperation(ifccParser.BorOperationContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#bxorExpression}.
	 * @param ctx the parse tree
	 */
	void enterBxorExpression(ifccParser.BxorExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#bxorExpression}.
	 * @param ctx the parse tree
	 */
	void exitBxorExpression(ifccParser.BxorExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#bxorOperation}.
	 * @param ctx the parse tree
	 */
	void enterBxorOperation(ifccParser.BxorOperationContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#bxorOperation}.
	 * @param ctx the parse tree
	 */
	void exitBxorOperation(ifccParser.BxorOperationContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#bandExpression}.
	 * @param ctx the parse tree
	 */
	void enterBandExpression(ifccParser.BandExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#bandExpression}.
	 * @param ctx the parse tree
	 */
	void exitBandExpression(ifccParser.BandExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#bandOperation}.
	 * @param ctx the parse tree
	 */
	void enterBandOperation(ifccParser.BandOperationContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#bandOperation}.
	 * @param ctx the parse tree
	 */
	void exitBandOperation(ifccParser.BandOperationContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#equalExpression}.
	 * @param ctx the parse tree
	 */
	void enterEqualExpression(ifccParser.EqualExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#equalExpression}.
	 * @param ctx the parse tree
	 */
	void exitEqualExpression(ifccParser.EqualExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#equalOperation}.
	 * @param ctx the parse tree
	 */
	void enterEqualOperation(ifccParser.EqualOperationContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#equalOperation}.
	 * @param ctx the parse tree
	 */
	void exitEqualOperation(ifccParser.EqualOperationContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#relationalExpression}.
	 * @param ctx the parse tree
	 */
	void enterRelationalExpression(ifccParser.RelationalExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#relationalExpression}.
	 * @param ctx the parse tree
	 */
	void exitRelationalExpression(ifccParser.RelationalExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#relationalOperation}.
	 * @param ctx the parse tree
	 */
	void enterRelationalOperation(ifccParser.RelationalOperationContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#relationalOperation}.
	 * @param ctx the parse tree
	 */
	void exitRelationalOperation(ifccParser.RelationalOperationContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#bitshiftExpression}.
	 * @param ctx the parse tree
	 */
	void enterBitshiftExpression(ifccParser.BitshiftExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#bitshiftExpression}.
	 * @param ctx the parse tree
	 */
	void exitBitshiftExpression(ifccParser.BitshiftExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#bitshiftOperation}.
	 * @param ctx the parse tree
	 */
	void enterBitshiftOperation(ifccParser.BitshiftOperationContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#bitshiftOperation}.
	 * @param ctx the parse tree
	 */
	void exitBitshiftOperation(ifccParser.BitshiftOperationContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#addExpression}.
	 * @param ctx the parse tree
	 */
	void enterAddExpression(ifccParser.AddExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#addExpression}.
	 * @param ctx the parse tree
	 */
	void exitAddExpression(ifccParser.AddExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#addOperation}.
	 * @param ctx the parse tree
	 */
	void enterAddOperation(ifccParser.AddOperationContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#addOperation}.
	 * @param ctx the parse tree
	 */
	void exitAddOperation(ifccParser.AddOperationContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#multExpression}.
	 * @param ctx the parse tree
	 */
	void enterMultExpression(ifccParser.MultExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#multExpression}.
	 * @param ctx the parse tree
	 */
	void exitMultExpression(ifccParser.MultExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#multOperation}.
	 * @param ctx the parse tree
	 */
	void enterMultOperation(ifccParser.MultOperationContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#multOperation}.
	 * @param ctx the parse tree
	 */
	void exitMultOperation(ifccParser.MultOperationContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#unaryExpression}.
	 * @param ctx the parse tree
	 */
	void enterUnaryExpression(ifccParser.UnaryExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#unaryExpression}.
	 * @param ctx the parse tree
	 */
	void exitUnaryExpression(ifccParser.UnaryExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#primaryExpression}.
	 * @param ctx the parse tree
	 */
	void enterPrimaryExpression(ifccParser.PrimaryExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#primaryExpression}.
	 * @param ctx the parse tree
	 */
	void exitPrimaryExpression(ifccParser.PrimaryExpressionContext ctx);
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
	 * Enter a parse tree produced by {@link ifccParser#return_stmt}.
	 * @param ctx the parse tree
	 */
	void enterReturn_stmt(ifccParser.Return_stmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#return_stmt}.
	 * @param ctx the parse tree
	 */
	void exitReturn_stmt(ifccParser.Return_stmtContext ctx);
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
	 * Enter a parse tree produced by {@link ifccParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(ifccParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(ifccParser.StatementContext ctx);
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