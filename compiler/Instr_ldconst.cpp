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
        o << "\tmov " << var << ", #" << constant << "\t; LD CONST INSTR\n";
    }
    else if (target == "x86")
    {
        string var = getRegister_x86(destination);
        if (var.length() == 0)
        {
            var = getMemory_x86(destination);
        }
        o << "\tmovl \t$" << constant << ", " << var << "\n";
    }
}
