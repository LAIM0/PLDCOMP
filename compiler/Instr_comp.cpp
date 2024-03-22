#include "Instr_comp.h"
#include "BasicBlock.h"
using namespace std;

void Instr_comp::gen_asm(ostream &o)
{
    string target = this->bb->cfg->target_architecture;
    string var1;
    string var2;
    if (target == "arm")
    {
        if (comp_left == "!reg")
        {
            var1 = "w0";
        }
        else if (comp_left == "!regd")
        {
            var1 = "w1";
        }
        else
        {
            o << "\tldr w2, [sp, #" + to_string(this->bb->cfg->get_var_index(comp_left)) << "]\t;COMP INSTR\n";
            var1 = "w2";
        }
        if (comp_right == "!reg")
        {
            var2 = "w0";
        }
        else if (comp_right == "!regd")
        {
            var2 = "w1";
        }
        else
        {
            o << "\tldr w3, [sp, #" + to_string(this->bb->cfg->get_var_index(comp_right)) << "]\t;COMP INSTR\n";
            var2 = "w3";
        }

        string operateur;
        string var;

        switch (op)
        {
        case Equal:
            operateur = "eq";
            break;
        case NotEqual:
            operateur = "ne";

            break;
        case LessThan:
            operateur = "lt";
            break;
        case LessThanOrEqual:
            operateur = "le";
            break;
        case GreaterThan:
            operateur = "gt";
            break;
        case GreaterThanOrEqual:
            operateur = "ge";
            break;
        }

        o << "\tsubs	" << var1 << ", " << var1 << ", " << var2 << "\t;COMP INSTR\n";
        o << "\tcset	" << var1 << ", " << operateur << "\t;COMP INSTR\n";
        o << "\tand	" << var1 << ", " << var1 << ", #0x1\t;COMP INSTR\n";
        o << "\tmov	w0, " << var1 << "\t;COMP INSTR\n";
    }
    else if (target == "x86")
    {
        if (comp_left == "!reg")
        {
            var1 = REG;
        }
        else if (comp_left == "!regd")
        {
            var1 = REGD;
        }
        else
        {
            var1 = "-" + to_string(this->bb->cfg->get_var_index(comp_left)) + "(%rbp)";
        }
        string var2;
        if (comp_right == "!reg")
        {
            var2 = REG;
        }
        else if (comp_right == "!regd")
        {
            var2 = REGD;
        }
        else
        {
            var2 = "-" + to_string(this->bb->cfg->get_var_index(comp_right)) + "(%rbp)";
        }
        o << "\tcmpl\t" << var1 << ", " << var2 << "\n";
        switch (op)
        {
        case Equal:
            o << "\tsete\t%al\n";
            break;
        case NotEqual:
            o << "\tsetne\t%al\n";
            break;
        case LessThan:
            o << "\tsetl\t%al\n";
            break;
        case LessThanOrEqual:
            o << "\tsetle\t%al\n";
            break;
        case GreaterThan:
            o << "\tsetg\t%al\n";
            break;
        case GreaterThanOrEqual:
            o << "\tsetge\t%al\n";
            break;
        }
        o << "\tmovzbl\t%al, " << REG << "\n";
    }
}