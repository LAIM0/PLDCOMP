#include "Instr_and.h"
#include "BasicBlock.h"
using namespace std;

void Instr_and::gen_asm(ostream &o)
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
            o << "\tldr w2, [sp, #" + to_string(this->bb->cfg->get_var_index(destination)) << "]\t;ADD INSTR\n";
            var1 = "w2";
        }

        if (source == "!reg")
        {
            var2 = "w0";
        }
        else
        {
            o << "\tldr w3, [sp, #" + to_string(this->bb->cfg->get_var_index(source)) << "]\t;ADD INSTR\n";
            var2 = "w3";
        }

        o << "\tand " << var1 << ", " << var1 << ", " << var2 << "\t;ADD INSTR\n";
        // o << "\tmov x0, " << var1 << "\t;ADD INSTR\n";   Normalement on en a pas jamais besoin de cette ligne avec un codeGenoptimisé
    }
    else if (target == "x86")
    {
        string var1 = getRegister_x86(source);
        if (var1.length() == 0)
        {
            var1 = getMemory_x86(source);
        }

        string var2 = getRegister_x86(destination);
        if (var2.length() == 0)
        {
            var2 = getMemory_x86(destination);
        }
        o << "\tandl\t" << var1 << ", " << var2 << "\n";
    }
}