#include "Instr_mult.h"
#include "BasicBlock.h"
using namespace std;

void Instr_mult::gen_asm(ostream &o)
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
        else if (destination == "!regd")
        {
            var1 = "w1";
        }
        else
        {
            o << "\tldr w2, [sp, #" + to_string(this->bb->cfg->get_var_index(destination)) << "]\t;MUL INSTR\n";
            var1 = "w2";
        }

        if (factor == "!reg")
        {
            var2 = "w0";
        }
        else if (factor == "!regd")
        {
            var2 = "w1";
        }
        else
        {
            o << "\tldr w3, [sp, #" + to_string(this->bb->cfg->get_var_index(factor)) << "]\t;MUL INSTR\n";
            var2 = "w3";
        }

        o << "\tmul " << var1 << ", " << var1 << ", " << var2 << "\t;MUL INSTR\n";
        // o << "\tmov w0, " << var1 << "\t;ADD INSTR\n";   Normalement on en a pas jamais besoin de cette ligne avec un codeGenoptimisé
    }
    else if (target == "x86")
    {
        string var1 = getRegister_x86(factor);
        if (var1.length() == 0)
        {
            var1 = getMemory_x86(factor);
        }

        string var2 = getRegister_x86(destination);
        if (var2.length() == 0)
        {
            var2 = getMemory_x86(destination);
        }
        o << "\timull \t" << var1 << ", " << var2 << "\n";
    }
}
