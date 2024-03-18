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

        var2 = "[sp, #" + to_string(this->bb->cfg->get_var_index(factor)) + "]";

        o << "\tldr w2, " << var2 << "\n";
        o << "\tmul " << var1 << ", " << var1 << ", w2\n";
    }
    else if (target == "x86")
    {
        if (factor == "!reg")
        {
            var1 = REG;
        }
        else if (factor == "!regd")
        {
            var1 = REGD;
        }
        else
        {
            var1 = "-" + to_string(this->bb->cfg->get_var_index(factor)) + "(%rbp)";
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
        o << "\timull \t" << var1 << ", " << var2 << "\n";
    }
}
