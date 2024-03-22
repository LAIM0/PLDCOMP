#include "Instr_ldconst.h"
#include "BasicBlock.h"
using namespace std;

void Instr_ldconst::gen_asm(ostream &o)
{
    string target = this->bb->cfg->target_architecture;
    string var;
    if (target == "arm")
    {
        if (destination == "!reg")
        {
            var = "w0";
        }
        else if (destination == "!regd")
        {
            var = "w1";
        }
        o << "\tmov " << var << ", #" << constant << "\t; LD CONST INSTR\n";
    }
    else if (target == "x86")
    {
        if (destination == "!reg")
        {
            var = REG;
        }
        else if (destination == "!regd")
        {
            var = REGD;
        }
        else
        {
            var = "-" + to_string(this->bb->cfg->get_var_index(destination)) + "(%rbp)";
        }
        o << "\tmovl \t$" << constant << ", " << var << "\n";
    }
}
