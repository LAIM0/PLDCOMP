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

        var2 = "[sp, #" + to_string(this->bb->cfg->get_var_index(subed)) + "]";

        o << "\tldr w2, " << var2 << "\n";
        o << "\tsub " << var1 << ", " << var1 << ", w2\n";
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
