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

    currentCFG->add_to_function_table(function_name, TypeClass::getType(ctx->type()->TYPE()->getText()));
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
        currentCFG->add_to_symbol_table(param->VAR()->getText(), TypeClass::getType(param->type()->TYPE()->getText()), param->type()->DEREFERENCE().size());
        std::string reg = "!reg" + to_string(i);
        Instr_copy *instr_copy = new Instr_copy(currentCFG->current_bb, TypeClass::getType(param->type()->TYPE()->getText()), reg, param->VAR()->getText());
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

std::string CFGVisitor::extractVarName(ifccParser::Lvalue_expressionContext *ctx)
{
    // Exemple générique pour tenter d'accéder aux enfants ou aux tokens spécifiques
    for (auto child : ctx->children)
    {
        // Vérifier si l'enfant est un nœud VAR et agir en conséquence
        if (antlr4::tree::TerminalNode *tn = dynamic_cast<antlr4::tree::TerminalNode *>(child))
        {
            if (tn->getSymbol()->getType() == ifccParser::VAR)
            {
                return tn->getText();
            }
        }
        // Si l'enfant est un autre lvalue_expression, le visiter récursivement
        else if (auto lvalueChild = dynamic_cast<ifccParser::Lvalue_expressionContext *>(child))
        {
            std::string name = extractVarName(lvalueChild);
            if (!name.empty())
                return name;
        }
    }
    return "";
}

antlrcpp::Any CFGVisitor::visitLvalueExp(ifccParser::LvalueExpContext *ctx)
{
    visit(ctx->lvalue_expression());
    return 0;
}

antlrcpp::Any CFGVisitor::visitPar(ifccParser::ParContext *ctx)
{
    visit(ctx->expression());
    return 0;
}
antlrcpp::Any CFGVisitor::visitParLvalue(ifccParser::ParLvalueContext *ctx)
{
    visit(ctx->lvalue_expression());
    return 0;
}

antlrcpp::Any CFGVisitor::visitDereferenceLvalue(ifccParser::DereferenceLvalueContext *ctx)
{
    if (declaration)
    {
        declaration = false;
        std::cerr << "Erreur de déclaration d'une valeur déréférencée" << std::endl;
        exit(1);
    }
    return 0;
}
antlrcpp::Any CFGVisitor::visitAddressofLvalue(ifccParser::AddressofLvalueContext *ctx)
{
    if (declaration)
    {
        declaration = false;
        std::cerr << "Erreur de déclaration d'une adresse" << std::endl;
        exit(1);
    }
    return 0;
}
antlrcpp::Any CFGVisitor::visitArrayAccessExp(ifccParser::ArrayAccessExpContext *ctx)
{
    return 0;
}
antlrcpp::Any CFGVisitor::visitArrayAccessLvalue(ifccParser::ArrayAccessLvalueContext *ctx)
{
    return 0;
}

antlrcpp::Any CFGVisitor::visitDeclaration(ifccParser::DeclarationContext *ctx)
{
    /*
    // Case of simple declaration TYPE VAR ";"
    if (ctx->VAR() != nullptr)
    {
        // If the variable has already been declared
        if (currentCFG->get_var_type(ctx->VAR()->getText()) != 0)
        {
            std::cerr << "Variable " << ctx->VAR()->getText() << " has already been declared" << std::endl;
            exit(1);
        }
        // Otherwise, we had to the symbol table with its type
        currentCFG->add_to_symbol_table(ctx->VAR()->getText(), TypeClass::getType(ctx->type()->TYPE()->getText()), ctx->type()->DEREFERENCE().size());
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
        currentCFG->add_to_symbol_table(ctx->affectation()->getText(), TypeClass::getType(ctx->TYPE()->getText()), ctx->affectation()->DEREFERENCE().size());
        visitChildren(ctx);
    }
    return 0;
    */

    std::string varName;
    int pointerLevel = 0; // Niveau de pointeur, déterminé par le nombre de '*'
    Type varType;

    // Traitement commun pour extraire le nom de la variable et le niveau de pointeur
    if (ctx->VAR() != nullptr)
    {
        varName = ctx->VAR()->getText();
        pointerLevel = ctx->type()->DEREFERENCE().size();
        varType = TypeClass::getType(ctx->type()->TYPE()->getText());
    }
    else
    {
        declaration = true;
        varName = extractVarName(ctx->affectation()->lvalue_expression());
        pointerLevel = ctx->type()->DEREFERENCE().size();
        varType = TypeClass::getType(ctx->type()->TYPE()->getText());
    }

    // Vérification si la variable a déjà été déclarée
    if (currentCFG->get_var_type(varName) != 0)
    {
        std::cerr << "Variable " << varName << " has already been declared" << std::endl;
        exit(1);
    }

    // Ajout de la variable à la table des symboles avec son type
    currentCFG->add_to_symbol_table(varName, varType, pointerLevel);

    // Traitement spécifique pour les déclarations avec affectation
    if (ctx->affectation() != nullptr)
    {
        // Traiter l'affectation ici si nécessaire, en tenant compte du type et du niveau de pointeur
        visitAffectation(ctx->affectation());
    }
    return 0;
}
antlrcpp::Any CFGVisitor::visitAffectation(ifccParser::AffectationContext *ctx)
{
    // var which we affect the value
    string variable_in_to_affect = extractVarName(ctx->lvalue_expression());

    // visit expression and store the result in our main register !reg
    visit(ctx->expression());

    // Type expression_type = currentCFG->current_bb->instrs.back()->getType();
    // if(expression_type != currentCFG->get_var_type(var)){
    //     std::cerr << "Wrong type for " << var << endl;
    //     exit(1);
    // }

    Type var_type = currentCFG->get_var_type(variable_in_to_affect);

    int pointerLevel = 0; // ctx->DEREFERENCE().size();

    if (pointerLevel == 0)
    {
        // Copy the value of the main register !reg into the variable memory cell
        Instr_copy *instr = new Instr_copy(currentCFG->current_bb, var_type, "!reg", variable_in_to_affect);
        currentCFG->current_bb->add_IRInstr(instr);
    }
    else
    {

        string tmp_reg = currentCFG->create_new_tempvar(_INT);
        Instr_ldaddr *instr_load_adress = new Instr_ldaddr(currentCFG->current_bb, var_type, tmp_reg, variable_in_to_affect);
        currentCFG->current_bb->add_IRInstr(instr_load_adress);

        for (int i = 0; i < pointerLevel - 1; i++)
        {
            Instr_rmem *instr_read_mem = new Instr_rmem(currentCFG->current_bb, var_type, tmp_reg, tmp_reg);
            currentCFG->current_bb->add_IRInstr(instr_read_mem);
        }
        Instr_wmem *instr_write = new Instr_wmem(currentCFG->current_bb, var_type, "!reg", tmp_reg);
        currentCFG->current_bb->add_IRInstr(instr_write);
    }

    /*

        1. Evaluer 'expression' et stocker le résultat dans expr_result
        2. Si aucun DEREFERENCE n'est présent :
            2.1. ldaddr var_address, VAR  // Charger l'adresse directe de VAR
        3. Si DEREFERENCE est présent (pour N déréférencements) :
            3.1. ldaddr temp_reg, VAR    // Charger l'adresse de VAR dans temp_reg
            3.2. Pour chaque DEREFERENCE (à l'exception du dernier) :
                3.2.1. rmem temp_reg, [temp_reg]  // Déréférencer et charger l'adresse contenue dans temp_reg
            3.3. var_address = temp_reg  // Le dernier registre temporaire contient l'adresse finale pour l'affectation
        4. wmem [var_address], expr_result  // Écrire le résultat de 'expression' à l'adresse déterminée

    */

    return 0;
}

antlrcpp::Any CFGVisitor::visitConst(ifccParser::ConstContext *ctx)
{
    // get the type of the constant
    string const_type;
    if (ctx->constante()->NUMBER() != nullptr)
    {
        const_type = "int";
    }
    else if (ctx->constante()->CHAR() != nullptr)
    {
        const_type = "char";
    }
    // Copy the value of the const register !reg into the main register !reg
    Instr_ldconst *instr = new Instr_ldconst(currentCFG->current_bb, TypeClass::getType(const_type), "!reg", ctx->constante()->getText());
    currentCFG->current_bb->add_IRInstr(instr);
    return 0;
}

antlrcpp::Any CFGVisitor::visitVarLvalue(ifccParser::VarLvalueContext *ctx)
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
        visit(ctx->unaryOperator()->lvalue_expression());

        // NEG operator on the main register !reg
        Instr_neg *instr_neg = new Instr_neg(currentCFG->current_bb, _INT, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_neg);
    }
    else if (ctx->unaryOperator()->NOT() != nullptr)
    {
        // Visit the expression and store the result in the main register !reg
        visit(ctx->unaryOperator()->lvalue_expression());
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
        visit(ctx->unaryOperator()->lvalue_expression());
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
        visit(ctx->unaryOperator()->lvalue_expression());
        Instr_sub *instr_sub = new Instr_sub(currentCFG->current_bb, _INT, tmp_un, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_sub);
    }
    /*
    else if (ctx->unaryOperator()->ADDRESSOF() != nullptr)
    {
        string varName = visit(ctx->unaryOperator()->lvalue_expression());
        Instr_ldaddr *instr_load_adress = new Instr_ldaddr(currentCFG->current_bb, _INT, "!reg", varName);
        currentCFG->current_bb->add_IRInstr(instr_load_adress);
    }
    else if (ctx->unaryOperator()->DEREFERENCE() != nullptr)
    {
        string varName = visit(ctx->unaryOperator()->lvalue_expression());
        Instr_rmem *instr_read_mem = new Instr_rmem(currentCFG->current_bb, _INT, varName, "!reg");
        currentCFG->current_bb->add_IRInstr(instr_read_mem);
    }*/
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

antlrcpp::Any CFGVisitor::visitLoop_bloc(ifccParser::Loop_blocContext *ctx)
{
    // Visit test expression
    BasicBlock *testBb = new BasicBlock(currentCFG, currentCFG->new_BB_name());
    currentCFG->current_bb = testBb;
    currentCFG->add_bb(testBb);

    string cmp_var = currentCFG->create_new_tempvar(_INT);
    Instr_ldconst *instr_ldconst = new Instr_ldconst(currentCFG->current_bb, _INT, "!reg", "1");
    currentCFG->current_bb->add_IRInstr(instr_ldconst);
    Instr_copy *instr_cmp_var_copy = new Instr_copy(currentCFG->current_bb, _INT, "!reg", cmp_var);
    currentCFG->current_bb->add_IRInstr(instr_cmp_var_copy);

    visit(ctx->expression());

    Instr_comp *instr_comp = new Instr_comp(currentCFG->current_bb, _INT, "!reg", cmp_var, Instr_comp::Equal);
    currentCFG->current_bb->add_IRInstr(instr_comp);
    string test_var = currentCFG->create_new_tempvar(_INT);

    BasicBlock *whileBb = new BasicBlock(currentCFG, currentCFG->new_BB_name());
    BasicBlock *endWhileBb = new BasicBlock(currentCFG, currentCFG->new_BB_name());
    currentCFG->add_bb(whileBb);
    currentCFG->add_bb(endWhileBb);

    testBb->exit_true = whileBb;
    testBb->exit_false = endWhileBb;

    Instr_jump *instr_jump_true = new Instr_jump(testBb, testBb->exit_true, "e");
    currentCFG->current_bb->add_IRInstr(instr_jump_true);
    Instr_jump *instr_jump_false = new Instr_jump(testBb, testBb->exit_false);
    currentCFG->current_bb->add_IRInstr(instr_jump_false);

    currentCFG->current_bb = whileBb;
    visitChildren(ctx->bloc());

    Instr_jump *instr_jump_end_while = new Instr_jump(whileBb, testBb);
    currentCFG->current_bb->add_IRInstr(instr_jump_end_while);

    currentCFG->current_bb = endWhileBb;
    return 0;
}