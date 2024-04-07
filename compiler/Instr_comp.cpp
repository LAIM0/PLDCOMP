#include "Instr_comp.h"
#include "BasicBlock.h"
using namespace std;

void Instr_comp::gen_asm(ostream &o)
{
    string var1;
    string var2;
    string target = this->bb->cfg->target_architecture;
    if (target == "arm")
    {
        if (comp_left == "!reg")
        {
            var1 = "w0";
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
        o << "\tmov	x0, " << var1 << "\t;COMP INSTR\n";
    }
    else if (target == "x86")
    {
        string left = getRegister_x86(comp_left);
        if (left.length() == 0)
        {
            left = getMemory_x86(comp_left);
        }

        string right = getRegister_x86(comp_right);
        if (right.length() == 0)
        {
            right = getMemory_x86(comp_right);
        }
        o << "\tcmpl\t" << right << ", " << left << "\n";
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
        o << "\tmovzbl\t%al, " << getRegister_x86("!reg") << "\n";
    }
}
