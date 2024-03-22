#include "Instr_neg.h"
#include "BasicBlock.h"
using namespace std;

void Instr_neg::gen_asm(ostream &o)
{

    string target = this->bb->cfg->target_architecture;
    string var;
    if (target == "arm")
    {
        o << "\tmov	w8, #0\t; NEG INSTR\n";
        if (source == "!reg")
        {
            var = "w0";
        }
        else if (source == "!regd")
        {
            var = "w1";
        }

        o << "\tsubs w8, w8, " << var << "\t; NEG INSTR\n";
        o << "\tmov " << var << ", w8\t; NEG INSTR\n";
    }
    else if (target == "x86")
    {
        if (source == "!reg")
        {
            var = REG;
        }
        else if (source == "!regd")
        {
            var = REGD;
        }
        else
        {
            var = "-" + to_string(this->bb->cfg->get_var_index(source)) + "(%rbp)";
        }
        o << "\tnegl\t" << var << "\n";
    }
}
