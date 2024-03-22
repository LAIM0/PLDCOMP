#include "Instr_sub.h"
#include "BasicBlock.h"
using namespace std;

void Instr_sub::gen_asm(ostream &o)
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
            o << "\tldr w4, [sp, #" + to_string(this->bb->cfg->get_var_index(destination)) << "]\t;SUB INSTR\n";
            var1 = "w4";
        }

        if (subed == "!reg")
        {
            var2 = "w0";
        }
        else if (subed == "!regd")
        {
            var2 = "w1";
        }
        else
        {
            o << "\tldr w5, [sp, #" + to_string(this->bb->cfg->get_var_index(subed)) << "]\t;SUB INSTR\n";
            var2 = "w5";
        }

        o << "\tsubs " << var1 << ", " << var1 << ", " << var2 << "\t;SUB INSTR\n";
        // o << "\tmov w0, " << var1 << "\t;ADD INSTR\n";   Normalement on en a pas jamais besoin de cette ligne avec un codeGenoptimisé
    }
    else if (target == "x86")
    {
        string var1;
        if (subed == "!reg")
        {
            var1 = REG;
        }
        else if (subed == "!regd")
        {
            var1 = REGD;
        }
        else
        {
            var1 = "-" + to_string(this->bb->cfg->get_var_index(subed)) + "(%rbp)";
        }
        string var2;
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
        o << "\tsubl \t" << var1 << ", " << var2 << "\n";
    }
}
