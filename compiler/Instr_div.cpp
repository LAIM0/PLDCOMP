#include "Instr_div.h"
#include "BasicBlock.h"
using namespace std;

void Instr_div::gen_asm(ostream &o)

{
    string target = this->bb->cfg->target_architecture;
    string var1;
    string var2;
    if (target == "arm")
    {
        if (destination == "!reg")
        {
            var1 = "w0";
        }
        else
        {
            o << "\tldr w4, [sp, #" + to_string(this->bb->cfg->get_var_index(destination)) << "]\t;DIV INSTR\n";
            var1 = "w4";
        }

        if (divfactor == "!reg")
        {
            var2 = "w0";
        }
        else
        {
            o << "\tldr w5, [sp, #" + to_string(this->bb->cfg->get_var_index(divfactor)) << "]\t;DIV INSTR\n";
            var2 = "w5";
        }

        o << "\tsdiv " << var1 << ", " << var1 << ", " << var2 << "\t;DIV INSTR\n";
        // o << "\tmov x0, " << var1 << "\t;ADD INSTR\n";   Normalement on en a pas jamais besoin de cette ligne avec un codeGenoptimisé
    }
    else if (target == "x86")
    {
        string var = getRegister_x86(divfactor);
        if (var.length() == 0)
        {
            var = getMemory_x86(divfactor);
        }
        o << "\tcltd\n\tidivl \t" << var << "\n";
    }
}
