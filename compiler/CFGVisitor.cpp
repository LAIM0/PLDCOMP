#include "CFGVisitor.h"
#include <iostream>

using namespace std;

antlrcpp::Any CFGVisitor::visitProg(ifccParser::ProgContext *ctx)
{
    for (auto function : ctx->function_declaration())
    {
        visitFunction_declaration(function);
    }
    return nullptr;
}

antlrcpp::Any CFGVisitor::visitFunction_declaration(ifccParser::Function_declarationContext *ctx)
{
    map<string, Type> FunctionTable;
    string function_name = ctx->VAR()->getText();
    // Create new CFG, and give him the functions created before
    if (currentCFG != nullptr)
    {
        FunctionTable = currentCFG->get_function_table();
        CFG *cfg = new CFG(function_name, this->target_architecture);
        currentCFG = cfg;
        currentCFG->set_function_table(FunctionTable);
    }
    else
    {
        CFG *cfg = new CFG(function_name, this->target_architecture);
        currentCFG = cfg;
    }

    currentCFG->add_to_function_table(function_name, TypeClass::getType(ctx->TYPE()->getText()));
    BasicBlock *bbepilogue = new BasicBlock(currentCFG, "epilogue");
    BasicBlock *bbfunc = new BasicBlock(currentCFG, function_name);
    bbepilogue->exit_true = nullptr;
    bbfunc->exit_true = bbepilogue;
    currentCFG->add_bb(bbfunc);
    currentCFG->current_bb = bbfunc;

    // Handle params memory allocation
    int i = 0;
    for (auto param : ctx->parameter())
    {
        currentCFG->add_to_symbol_table(param->VAR()->getText(), TypeClass::getType(param->TYPE()->getText()));
        std::string reg = "!reg" + to_string(i);
        Instr_copy *instr_copy = new Instr_copy(currentCFG->current_bb, TypeClass::getType(param->TYPE()->getText()), reg, param->VAR()->getText());
        currentCFG->current_bb->add_IRInstr(instr_copy);
        i++;
    }
    this->visitChildren(ctx);

    currentCFG->assign_var_index();

    // Generate the asm of the function
    currentCFG->gen_asm(cout);
    return 0;
}

antlrcpp::Any CFGVisitor::visitFunction_call(ifccParser::Function_callContext *ctx)
{

    string function = ctx->VAR()->getText();
    if (currentCFG->get_function_type(function) == 0)
    {
        cerr << "No function called " << function << " exists";
        exit(1);
    }
    int i = 0;
    for (auto expr : ctx->expression())
    {
        visit(expr);
        string reg_destination = "!reg" + to_string(i++);
        Instr_copy *instr_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", reg_destination);
        currentCFG->current_bb->add_IRInstr(instr_copy);
    }
    Instr_call *instr_call = new Instr_call(currentCFG->current_bb, currentCFG->get_function_type(function), function);
    currentCFG->current_bb->add_IRInstr(instr_call);
    return 0;
}

antlrcpp::Any CFGVisitor::visitReturn_stmt(ifccParser::Return_stmtContext *ctx)
{
    visit(ctx->expression());
    return 0;
}

antlrcpp::Any CFGVisitor::visitDeclaration(ifccParser::DeclarationContext *ctx)
{
    std::string varName = ctx->VAR()->getText();
    std::string varType = ctx->TYPE()->getText();
    int pointerLevel = ctx->DEREFERENCE().size();

    if (ctx->DEREFERENCE() != nullptr)
    {
        // Case of pointer declaration -> To-do
    }
    // Case of simple declaration TYPE VAR ";"
    if (ctx->VAR() != nullptr)
    {
        // If the variable has already been declared
        if (currentCFG->get_var_type(varName) != 0)
        {
            std::cerr << "Variable " << varName << " has already been declared" << std::endl;
            exit(1);
        }
        // Otherwise, we had to the symbol table with its type
        currentCFG->add_to_symbol_table(varName, TypeClass::getType(varType, pointerLevel));
    }
    // Case of declaration with affectation
    else
    {
        // If the variable has already been declared
        if (currentCFG->get_var_type(ctx->affectation()->VAR()->getText()) != 0)
        {
            std::cerr << "Variable " << ctx->affectation()->VAR()->getText() << " has already been declared" << std::endl;
            exit(1);
        }
        // Otherwise, we had to the symbol table with its type
        currentCFG->add_to_symbol_table(ctx->affectation()->VAR()->getText(), TypeClass::getType(ctx->TYPE()->getText()));
        visitChildren(ctx);
    }
    return 0;
}
antlrcpp::Any CFGVisitor::visitAffectation(ifccParser::AffectationContext *ctx)
{
    // var which we affect the value
    std::string var = ctx->VAR()->getText();
    if (currentCFG->get_var_type(ctx->VAR()->getText()) == 0)
    {
        std::cerr << "Variable " << ctx->VAR()->getText() << " has not been declared" << std::endl;
        exit(1);
    }

    // visit expression and store the result in our main register !reg
    visit(ctx->expression());

    Type var_type = currentCFG->get_var_type(var);

    // Copy the value of the main register !reg into the variable memory cell
    Instr_copy *instr = new Instr_copy(currentCFG->current_bb, var_type, "!reg", var);
    currentCFG->current_bb->add_IRInstr(instr);

    return 0;
}

antlrcpp::Any CFGVisitor::visitConst(ifccParser::ConstContext *ctx)
{
    // get the type of the constant
    Type const_type;
    if (ctx->constante()->NUMBER() != nullptr)
    {
        const_type = _INT;
    }
    else if (ctx->constante()->CHAR() != nullptr)
    {
        const_type = _CHAR;
    }
    // Copy the value of the const register !reg into the main register !reg
    Instr_ldconst *instr = new Instr_ldconst(currentCFG->current_bb, const_type, "!reg", ctx->constante()->getText());
    currentCFG->current_bb->add_IRInstr(instr);
    return 0;
}

antlrcpp::Any CFGVisitor::visitVar(ifccParser::VarContext *ctx)
{
    // if the variable has not been declared before
    if (currentCFG->get_var_type(ctx->VAR()->getText()) == 0)
    {
        std::cerr << "Variable " << ctx->VAR()->getText() << " has not been declared" << std::endl;
        exit(1);
    }

    // Get the type of the variable
    Type var_type = currentCFG->get_var_type(ctx->VAR()->getText());

    // We copy the value in the variable memory into the main register !reg
    Instr_copy *instr = new Instr_copy(currentCFG->current_bb, var_type, ctx->VAR()->getText(), "!reg");
    currentCFG->current_bb->add_IRInstr(instr);
    return 0;
}

antlrcpp::Any CFGVisitor::visitAdd(ifccParser::AddContext *ctx)
{
    visit(ctx->expression(0));
    string left_tmp_var = currentCFG->create_new_tempvar(_INT);
    Instr_copy *instr_left_tmp_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", left_tmp_var);
    currentCFG->current_bb->add_IRInstr(instr_left_tmp_copy);
    visit(ctx->expression(1));
    if (ctx->addOperator()->PLUS() != nullptr)
    {
        Instr_add *instr_add = new Instr_add(currentCFG->current_bb, _INT, left_tmp_var, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_add);
    }
    else if (ctx->addOperator()->MINUS() != nullptr)
    {
        string right_tmp_var = currentCFG->create_new_tempvar(_INT);
        Instr_copy *instr_right_tmp_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", right_tmp_var);
        currentCFG->current_bb->add_IRInstr(instr_right_tmp_copy);
        Instr_copy *instr_reg_copy = new Instr_copy(currentCFG->current_bb, _INT, left_tmp_var, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_reg_copy);
        Instr_sub *instr_sub = new Instr_sub(currentCFG->current_bb, _INT, right_tmp_var, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_sub);
    }
    return 0;
}

antlrcpp::Any CFGVisitor::visitMult(ifccParser::MultContext *ctx)
{
    visit(ctx->expression(0));
    string left_tmp_var = currentCFG->create_new_tempvar(_INT);
    Instr_copy *instr_left_tmp_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", left_tmp_var);
    currentCFG->current_bb->add_IRInstr(instr_left_tmp_copy);
    visit(ctx->expression(1));
    if (ctx->multOperator()->MULTIPLY() != nullptr)
    {
        Instr_mult *instr_mult = new Instr_mult(currentCFG->current_bb, _INT, left_tmp_var, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_mult);
    }
    else if (ctx->multOperator()->DIVIDE() != nullptr)
    {
        string right_tmp_var = currentCFG->create_new_tempvar(_INT);
        Instr_copy *instr_right_tmp_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", right_tmp_var);
        currentCFG->current_bb->add_IRInstr(instr_right_tmp_copy);
        Instr_copy *instr_reg_copy = new Instr_copy(currentCFG->current_bb, _INT, left_tmp_var, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_reg_copy);
        Instr_div *instr_div = new Instr_div(currentCFG->current_bb, _INT, right_tmp_var, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_div);
    }
    else if (ctx->multOperator()->MOD() != nullptr)
    {
        string right_tmp_var = currentCFG->create_new_tempvar(_INT);
        Instr_copy *instr_right_tmp_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", right_tmp_var);
        currentCFG->current_bb->add_IRInstr(instr_right_tmp_copy);

        Instr_copy *instr_reg_copy = new Instr_copy(currentCFG->current_bb, _INT, left_tmp_var, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_reg_copy);

        Instr_div *instr_div = new Instr_div(currentCFG->current_bb, _INT, right_tmp_var, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_div);

        Instr_mult *instr_mult = new Instr_mult(currentCFG->current_bb, _INT, right_tmp_var, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_mult);

        string sub_for_mod_tmp_var = currentCFG->create_new_tempvar(_INT);
        Instr_copy *instr_sub_for_mod_tmp_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", sub_for_mod_tmp_var);
        currentCFG->current_bb->add_IRInstr(instr_sub_for_mod_tmp_copy);

        currentCFG->current_bb->add_IRInstr(instr_reg_copy);

        Instr_sub *instr_sub = new Instr_sub(currentCFG->current_bb, _INT, sub_for_mod_tmp_var, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_sub);
    }

    return 0;
}
antlrcpp::Any CFGVisitor::visitBand(ifccParser::BandContext *ctx)
{
    // Visit left expression
    visit(ctx->expression(0));

    // Create a temporary variable for the left expression
    string left_tmp_var = currentCFG->create_new_tempvar(_INT);
    // Copy the value in the main register !reg (result of the visit of left expression) into left temporary variable memory
    Instr_copy *instr_left_tmp_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", left_tmp_var);
    currentCFG->current_bb->add_IRInstr(instr_left_tmp_copy);

    // Visit right expression
    visit(ctx->expression(1));

    // Create a temporary variable for the right expression
    string right_tmp_var = currentCFG->create_new_tempvar(_INT);
    // Copy the value in the main register !reg (result of the visit of right expression) into right temporary variable memory
    Instr_copy *instr_right_tmp_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", right_tmp_var);
    currentCFG->current_bb->add_IRInstr(instr_right_tmp_copy);

    // Copy the value in the left temporary variable memory into the main register !reg
    Instr_copy *instr_reg_copy = new Instr_copy(currentCFG->current_bb, _INT, left_tmp_var, "!reg");
    currentCFG->current_bb->add_IRInstr(instr_reg_copy);

    // AND operation with right temporary and main register !reg (i.e. is the right temporary variable)
    Instr_and *instr_and = new Instr_and(currentCFG->current_bb, _INT, right_tmp_var, "!reg");
    currentCFG->current_bb->add_IRInstr(instr_and);

    return 0;
}

antlrcpp::Any CFGVisitor::visitBor(ifccParser::BorContext *ctx)
{
    // Visit left expression
    visit(ctx->expression(0));

    // Create a temporary variable for the left expression
    string left_tmp_var = currentCFG->create_new_tempvar(_INT);
    // Copy the value in the main register !reg (result of the visit of left expression) into left temporary variable memory
    Instr_copy *instr_left_tmp_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", left_tmp_var);
    currentCFG->current_bb->add_IRInstr(instr_left_tmp_copy);

    // Visit right expression
    visit(ctx->expression(1));

    // Create a temporary variable for the right expression
    string right_tmp_var = currentCFG->create_new_tempvar(_INT);
    // Copy the value in the main register !reg (result of the visit of right expression) into right temporary variable memory
    Instr_copy *instr_right_tmp_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", right_tmp_var);
    currentCFG->current_bb->add_IRInstr(instr_right_tmp_copy);

    // Copy the value in the left temporary variable memory into the main register !reg
    Instr_copy *instr_reg_copy = new Instr_copy(currentCFG->current_bb, _INT, left_tmp_var, "!reg");
    currentCFG->current_bb->add_IRInstr(instr_reg_copy);

    // OR operation with right temporary and main register !reg (i.e. is the right temporary variable)
    Instr_or *instr_or = new Instr_or(currentCFG->current_bb, _INT, right_tmp_var, "!reg");
    currentCFG->current_bb->add_IRInstr(instr_or);

    return 0;
}

antlrcpp::Any CFGVisitor::visitBxor(ifccParser::BxorContext *ctx)
{
    // Visit left expression
    visit(ctx->expression(0));

    // Create a temporary variable for the left expression
    string left_tmp_var = currentCFG->create_new_tempvar(_INT);
    // Copy the value in the main register !reg (result of the visit of left expression) into left temporary variable memory
    Instr_copy *instr_left_tmp_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", left_tmp_var);
    currentCFG->current_bb->add_IRInstr(instr_left_tmp_copy);

    // Visit right expression
    visit(ctx->expression(1));

    // Create a temporary variable for the right expression
    string right_tmp_var = currentCFG->create_new_tempvar(_INT);
    // Copy the value in the main register !reg (result of the visit of right expression) into right temporary variable memory
    Instr_copy *instr_right_tmp_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", right_tmp_var);
    currentCFG->current_bb->add_IRInstr(instr_right_tmp_copy);

    // Copy the value in the left temporary variable memory into the main register !reg
    Instr_copy *instr_reg_copy = new Instr_copy(currentCFG->current_bb, _INT, left_tmp_var, "!reg");
    currentCFG->current_bb->add_IRInstr(instr_reg_copy);

    // XOR operation with right temporary and main register !reg (i.e. is the right temporary variable)
    Instr_xor *instr_xor = new Instr_xor(currentCFG->current_bb, _INT, right_tmp_var, "!reg");
    currentCFG->current_bb->add_IRInstr(instr_xor);

    return 0;
}

antlrcpp::Any CFGVisitor::visitUnary(ifccParser::UnaryContext *ctx)
{
    if (ctx->unaryOperator()->MINUS() != nullptr)
    {
        // Visit the expression and store the result in the main register !reg
        visit(ctx->expression());

        // NEG operator on the main register !reg
        Instr_neg *instr_neg = new Instr_neg(currentCFG->current_bb, _INT, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_neg);
    }
    else if (ctx->unaryOperator()->NOT() != nullptr)
    {
        // Visit the expression and store the result in the main register !reg
        visit(ctx->expression());
        // NOT operator on the main register !reg
        Instr_not *instr_not = new Instr_not(currentCFG->current_bb, _INT, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_not);
    }
    else if (ctx->unaryOperator()->INCREMENT() != nullptr)
    {
        string tmp_un = currentCFG->create_new_tempvar(_INT);
        Instr_ldconst *instr_ldconst = new Instr_ldconst(currentCFG->current_bb, _INT, "!reg", "1");
        currentCFG->current_bb->add_IRInstr(instr_ldconst);
        Instr_copy *instr_tmp_un_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", tmp_un);
        currentCFG->current_bb->add_IRInstr(instr_tmp_un_copy);
        visit(ctx->expression());
        Instr_add *instr_add = new Instr_add(currentCFG->current_bb, _INT, tmp_un, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_add);
    }
    else if (ctx->unaryOperator()->DECREMENT() != nullptr)
    {
        string tmp_un = currentCFG->create_new_tempvar(_INT);
        Instr_ldconst *instr_ldconst = new Instr_ldconst(currentCFG->current_bb, _INT, "!reg", "1");
        currentCFG->current_bb->add_IRInstr(instr_ldconst);
        Instr_copy *instr_tmp_un_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", tmp_un);
        currentCFG->current_bb->add_IRInstr(instr_tmp_un_copy);
        visit(ctx->expression());
        Instr_sub *instr_sub = new Instr_sub(currentCFG->current_bb, _INT, tmp_un, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_sub);
    }
    else if (ctx->unaryOperator()->DEREFERENCE() != nullptr)
    {
        // Opérateur * : To-do
    }
    else if (ctx->unaryOperator()->ADDRESSOF() != nullptr)
    {
        // Opérateur & : To-do
    }
    return 0;
}

void CFGVisitor::setTargetFlag(string target_architecture)
{
    this->target_architecture = target_architecture;
}

antlrcpp::Any CFGVisitor::visitRelational(ifccParser::RelationalContext *ctx)
{
    // Visit left expression
    visit(ctx->expression(0));

    // Create a temporary variable for the left expression
    string left_tmp_var = currentCFG->create_new_tempvar(_INT);
    // Copy the value in the main register !reg (result of the visit of left expression) into left temporary variable memory
    Instr_copy *instr_left_tmp_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", left_tmp_var);
    currentCFG->current_bb->add_IRInstr(instr_left_tmp_copy);

    // Visit right expression
    visit(ctx->expression(1));
    string right_tmp_var = currentCFG->create_new_tempvar(_INT);
    Instr_copy *instr_right_tmp_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", right_tmp_var);
    currentCFG->current_bb->add_IRInstr(instr_right_tmp_copy);
    Instr_copy *instr_reg_copy = new Instr_copy(currentCFG->current_bb, _INT, left_tmp_var, "!reg");
    currentCFG->current_bb->add_IRInstr(instr_reg_copy);

    /*
    Instr_copy *instr_reg_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", "!regd");
    currentCFG->current_bb->add_IRInstr(instr_reg_copy);
    Instr_copy *instr_left_copy = new Instr_copy(currentCFG->current_bb, _INT, left_tmp_var, "!reg");
    currentCFG->current_bb->add_IRInstr(instr_left_copy);
    */

    if (ctx->relationalOperator()->GREATER() != nullptr)
    {
        // COMP operation > with right temporary and main register !reg (i.e. is the right temporary variable)
        Instr_comp *instr_comp = new Instr_comp(currentCFG->current_bb, _INT, "!reg", right_tmp_var, Instr_comp::GreaterThan);
        currentCFG->current_bb->add_IRInstr(instr_comp);
    }
    else if (ctx->relationalOperator()->GREATEREQUAL() != nullptr)
    {
        // COMP operation >= with right temporary and main register !reg (i.e. is the right temporary variable)
        Instr_comp *instr_comp = new Instr_comp(currentCFG->current_bb, _INT, "!reg", right_tmp_var, Instr_comp::GreaterThanOrEqual);
        currentCFG->current_bb->add_IRInstr(instr_comp);
    }
    else if (ctx->relationalOperator()->LESS() != nullptr)
    {
        Instr_comp *instr_comp = new Instr_comp(currentCFG->current_bb, _INT, "!reg", right_tmp_var, Instr_comp::LessThan);
        currentCFG->current_bb->add_IRInstr(instr_comp);
    }
    else if (ctx->relationalOperator()->LESSEQUAL() != nullptr)
    {
        Instr_comp *instr_comp = new Instr_comp(currentCFG->current_bb, _INT, "!reg", right_tmp_var, Instr_comp::LessThanOrEqual);
        currentCFG->current_bb->add_IRInstr(instr_comp);
    }
    return 0;
}

antlrcpp::Any CFGVisitor::visitEquality(ifccParser::EqualityContext *ctx)
{
    /*
    visit(ctx->expression(0));

    // Create a temporary variable for the left expression
    string left_tmp_var = currentCFG->create_new_tempvar(_INT);
    Instr_copy *instr_tmp_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", left_tmp_var);
    currentCFG->current_bb->add_IRInstr(instr_tmp_copy);
    visit(ctx->expression(1));

    // Create a temporary variable for the right expression
    string right_tmp_var = currentCFG->create_new_tempvar(_INT);
    // Copy the value in the main register !reg (result of the visit of right expression) into right temporary variable memory
    Instr_copy *instr_right_tmp_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", right_tmp_var);
    currentCFG->current_bb->add_IRInstr(instr_right_tmp_copy);

    // Copy the value in the left temporary variable memory into the main register !reg
    Instr_copy *instr_reg_copy = new Instr_copy(currentCFG->current_bb, _INT, left_tmp_var, "!reg");
    currentCFG->current_bb->add_IRInstr(instr_reg_copy);
    Instr_copy *instr_left_copy = new Instr_copy(currentCFG->current_bb, _INT, left_tmp_var, "!reg");
    currentCFG->current_bb->add_IRInstr(instr_left_copy);*/

    visit(ctx->expression(0));
    string left_tmp_var = currentCFG->create_new_tempvar(_INT);
    Instr_copy *instr_left_tmp_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", left_tmp_var);
    currentCFG->current_bb->add_IRInstr(instr_left_tmp_copy);
    visit(ctx->expression(1));
    string right_tmp_var = currentCFG->create_new_tempvar(_INT);
    Instr_copy *instr_right_tmp_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", right_tmp_var);
    currentCFG->current_bb->add_IRInstr(instr_right_tmp_copy);
    Instr_copy *instr_reg_copy = new Instr_copy(currentCFG->current_bb, _INT, left_tmp_var, "!reg");
    currentCFG->current_bb->add_IRInstr(instr_reg_copy);

    if (ctx->equalityOperator()->EQUAL() != nullptr)
    {
        Instr_comp *instr_comp = new Instr_comp(currentCFG->current_bb, _INT, "!reg", right_tmp_var, Instr_comp::Equal);
        currentCFG->current_bb->add_IRInstr(instr_comp);
    }
    else if (ctx->equalityOperator()->NOTEQUAL() != nullptr)
    {
        Instr_comp *instr_comp = new Instr_comp(currentCFG->current_bb, _INT, "!reg", right_tmp_var, Instr_comp::NotEqual);
        currentCFG->current_bb->add_IRInstr(instr_comp);
    }
    return 0;
}

antlrcpp::Any CFGVisitor::visitCondition_bloc(ifccParser::Condition_blocContext *ctx)
{
    // Visit test expression
    string cmp_var = currentCFG->create_new_tempvar(_INT);
    Instr_ldconst *instr_ldconst = new Instr_ldconst(currentCFG->current_bb, _INT, "!reg", "1");
    currentCFG->current_bb->add_IRInstr(instr_ldconst);
    Instr_copy *instr_cmp_var_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", cmp_var);
    currentCFG->current_bb->add_IRInstr(instr_cmp_var_copy);

    visit(ctx->expression(0));

    Instr_comp *instr_comp = new Instr_comp(currentCFG->current_bb, _INT, "!reg", cmp_var, Instr_comp::Equal);
    currentCFG->current_bb->add_IRInstr(instr_comp);
    string test_var = currentCFG->create_new_tempvar(_INT);

    BasicBlock *thenBb = new BasicBlock(currentCFG, currentCFG->new_BB_name());
    BasicBlock *elseBb = new BasicBlock(currentCFG, currentCFG->new_BB_name());
    BasicBlock *endIfBb = new BasicBlock(currentCFG, currentCFG->new_BB_name());
    currentCFG->add_bb(thenBb);
    currentCFG->add_bb(elseBb);

    BasicBlock *testBb = currentCFG->current_bb;

    testBb->exit_true = thenBb;
    testBb->exit_false = elseBb;

    Instr_jump *instr_jump_true = new Instr_jump(testBb, testBb->exit_true, "e");
    currentCFG->current_bb->add_IRInstr(instr_jump_true);
    Instr_jump *instr_jump_false = new Instr_jump(testBb, testBb->exit_false);
    currentCFG->current_bb->add_IRInstr(instr_jump_false);

    currentCFG->current_bb = thenBb;
    visitChildren(ctx->bloc(0));

    Instr_jump *instr_jump_true_endif = new Instr_jump(thenBb, endIfBb);
    currentCFG->current_bb->add_IRInstr(instr_jump_true_endif);

    currentCFG->current_bb = testBb;

    int bloc_index = 1;
    if (ctx->ELSEIF().size() > 0)
    {
        for (auto else_if : ctx->ELSEIF())
        {
            currentCFG->current_bb = currentCFG->current_bb->exit_false;
            visit(ctx->expression(bloc_index));
            Instr_comp *instr_elseif_comp = new Instr_comp(currentCFG->current_bb, _INT, "!reg", cmp_var, Instr_comp::Equal);
            currentCFG->current_bb->add_IRInstr(instr_elseif_comp);
            string elseif_test_var = currentCFG->create_new_tempvar(_INT);

            BasicBlock *elseIfThenBb = new BasicBlock(currentCFG, currentCFG->new_BB_name());
            BasicBlock *elseIfElseBb = new BasicBlock(currentCFG, currentCFG->new_BB_name());
            currentCFG->add_bb(elseIfThenBb);
            currentCFG->add_bb(elseIfElseBb);

            BasicBlock *elseIfTestBb = currentCFG->current_bb;

            elseIfTestBb->exit_true = elseIfThenBb;
            elseIfTestBb->exit_false = elseIfElseBb;

            Instr_jump *instr_elseif_jump_true = new Instr_jump(elseIfTestBb, elseIfTestBb->exit_true, "e");
            currentCFG->current_bb->add_IRInstr(instr_elseif_jump_true);
            Instr_jump *instr_elseif_jump_false = new Instr_jump(elseIfTestBb, elseIfTestBb->exit_false);
            currentCFG->current_bb->add_IRInstr(instr_elseif_jump_false);

            currentCFG->current_bb = elseIfThenBb;
            visitChildren(ctx->bloc(bloc_index));
            Instr_jump *instr_elseif_jump_true_endif = new Instr_jump(elseIfThenBb, endIfBb);

            currentCFG->current_bb->add_IRInstr(instr_elseif_jump_true_endif);

            currentCFG->current_bb = elseIfTestBb;
            bloc_index++;
        }
    }
    if (ctx->ELSE() != nullptr)
    {
        currentCFG->current_bb = currentCFG->current_bb->exit_false;
        visitChildren(ctx->bloc(bloc_index));
        Instr_jump *instr_jump_false_endif = new Instr_jump(currentCFG->current_bb, endIfBb);
        currentCFG->current_bb->add_IRInstr(instr_jump_false_endif);
    }
    currentCFG->add_bb(endIfBb);

    currentCFG->current_bb = endIfBb;
    return 0;
}