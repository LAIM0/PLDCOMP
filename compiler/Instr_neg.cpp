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
        string var = getRegister_x86(source);
        if (var.length() == 0)
        {
            var = getMemory_x86(source);
        }
        o << "\tnegl\t" << var << "\n";
    }
}
