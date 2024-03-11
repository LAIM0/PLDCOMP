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
	 * Enter a parse tree produced by {@link ifccParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(ifccParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(ifccParser.StatementContext ctx);
}