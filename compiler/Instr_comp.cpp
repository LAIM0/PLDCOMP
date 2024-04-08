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

        // Génération de la comparaison
        o << "\tcmp\t" << var1 << ", " << var2 << "\t;COMP INSTR\n";

        // Utilisation directe des flags de condition pour le branchement ou la mise à jour d'un registre
        switch (op)
        {
        case Equal:
            o << "\tcset\tw0, eq\t;COMP INSTR\n";
            break;
        case NotEqual:
            o << "\tcset\tw0, ne\t;COMP INSTR\n";
            break;
        case LessThan:
            o << "\tcset\tw0, lt\t;COMP INSTR\n";
            break;
        case LessThanOrEqual:
            o << "\tcset\tw0, le\t;COMP INSTR\n";
            break;
        case GreaterThan:
            o << "\tcset\tw0, gt\t;COMP INSTR\n";
            break;
        case GreaterThanOrEqual:
            o << "\tcset\tw0, ge\t;COMP INSTR\n";
            break;
        }
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
