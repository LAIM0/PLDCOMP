#include "Instr_xor.h"
#include "BasicBlock.h"
using namespace std;

void Instr_xor::gen_asm(ostream &o)
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
            o << "\tldr w2, [sp, #" + to_string(this->bb->cfg->get_var_index(destination)) << "]\t;ADD INSTR\n";
            var1 = "w2";
        }

        if (source == "!reg")
        {
            var2 = "w0";
        }
        else if (source == "!regd")
        {
            var2 = "w1";
        }
        else
        {
            o << "\tldr w3, [sp, #" + to_string(this->bb->cfg->get_var_index(source)) << "]\t;ADD INSTR\n";
            var2 = "w3";
        }

        o << "\teor " << var1 << ", " << var1 << ", " << var2 << "\t;ADD INSTR\n";
        // o << "\tmov w0, " << var1 << "\t;ADD INSTR\n";   Normalement on en a pas jamais besoin de cette ligne avec un codeGenoptimisé
    }
    else if (target == "x86")
    {
        if (source == "!reg")
        {
            var1 = REG;
        }
        else if (source == "!regd")
        {
            var1 = REGD;
        }
        else
        {
            var1 = "-" + to_string(this->bb->cfg->get_var_index(source)) + "(%rbp)";
        }
        if (destination == "!reg")
        {
            var2 = REG;
        }
        else if (destination == "!regd")
        {
            var2 = REGD;
        }
        else
        {
            var2 = "-" + to_string(this->bb->cfg->get_var_index(destination)) + "(%rbp)";
        }
        o << "\txorl\t" << var1 << ", " << var2 << "\n";
    }
}
