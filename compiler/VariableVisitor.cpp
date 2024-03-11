#include "VariableVisitor.h"

antlrcpp::Any VariableVisitor::visitProg(ifccParser::ProgContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any VariableVisitor::visitAffectation(ifccParser::AffectationContext *ctx)
{
    std::string variable = ctx->VAR()->getText();
    if (!checkVariableDeclared(variable))
    {
        std::cout << "Variable " << variable << " has not been declared" << std::endl;
    }
    else
    {
        if (ctx->VAR() != nullptr)
        {
            std::string assignedVariable = ctx->VAR()->getText();
            //std::cout << "Variable " << variable << " is assigned the value of " << assignedVariable << "\r\n";
            usedVariables.insert(variable);
        }
        else if (ctx->expr()->CONST() != nullptr)
        {
            std::string assignedConstant = ctx->expr()->CONST()->getText();
            //std::cout << variable << " is assigned the value " << assignedConstant << "\r\n";
        }
    }
    return visitChildren(ctx);
}

antlrcpp::Any VariableVisitor::visitReturn_stmt(ifccParser::Return_stmtContext *ctx)
{
    if (ctx->expr()->CONST() != nullptr)
    {
        std::string constant = ctx->expr()->CONST()->getText();
        //std::cout << "Constant " << constant << " is returned at line " << ctx->CONST()->getSymbol()->getLine() << "\r\n";
    }
    else if (ctx->expr()->VAR() != nullptr)
    {
        std::string variable = ctx->expr()->VAR()->getText();
        usedVariables.insert(variable);
        //std::cout << "Variable " << variable << " is returned at line " << ctx->VAR()->getSymbol()->getLine() << "\r\n";
    }
    checkVariablesUsage();
    int nbVar = usedVariables.size();
    int maxMem = nbVar/4*16+8;
    memoryProg = maxMem + 8;
    int startMem = maxMem - (nbVar-1)*4;
    std::cout << "nbVar : " << nbVar << " | maxMem " << maxMem << " | declared vars " << declaredVariables.size() << "\r\n";
    SymbolTable = {};
    //std::cout << usedVariables.size() << "\n";
    for (std::string var : usedVariables) {
        SymbolTable[var] = startMem;
        std::cout << var << "\n";
        startMem += 4;
    }
    return visitChildren(ctx);
}

antlrcpp::Any VariableVisitor::visitDeclaration(ifccParser::DeclarationContext *ctx)
{
    std::string type = ctx->TYPE()->getText();
    if (ctx->affectation() != nullptr)
    {
        std::string variable = ctx->affectation()->VAR()->getText();
        if (!checkVariableDeclared(variable))
        {
            //std::cout << "Variable " << variable << " of type " << type << " is declared and affected" << std::endl;
            declaredVariables.insert(variable);
        }
        else
        {
            //std::cout << "Variable " << variable << " has already been declared " << std::endl;
        }
        visitAffectation(ctx->affectation());
    }
    else
    {
        std::string variable = ctx->VAR()->getText();
        if (!checkVariableDeclared(variable))
        {
            //std::cout << "Variable " << variable << " of type " << type << " is declared " << std::endl;
            declaredVariables.insert(variable);
        }
        else
        {
            //std::cout << "Variable " << variable << " has already been declared " << std::endl;
        }
    }
    return nullptr;
}

bool VariableVisitor::checkVariableDeclared(const std::string &variable)
{
    if (declaredVariables.find(variable) == declaredVariables.end())
    {
        return false;
    }
    else
    {
        return true;
    }
}

void VariableVisitor::checkVariablesUsage()
{
    for (const std::string &variable : declaredVariables)
    {
        if (usedVariables.find(variable) == usedVariables.end())
        {
            //std::cout << "Variable " << variable << " is declared but never used." << std::endl;
        }
    }
}