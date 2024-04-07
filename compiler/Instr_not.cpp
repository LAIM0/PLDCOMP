#include "Instr_not.h"
#include "BasicBlock.h"
using namespace std;

void Instr_not::gen_asm(ostream &o)
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
        o << "\tsubs " << var << ", " << var << ", #0\t; NOT INSTR\n";
        o << "\tcset " << var << ", eq\t; NOT INSTR\n";
        o << "\tand " << var << ", " << var << ", #0x1\t; NOT INSTR\n";
    }
    else if (target == "x86")
    {
        string var = getRegister_x86(source);
        if (var.length() == 0)
        {
            var = getMemory_x86(source);
        }
        o << "\tcmpl\t$0, " << var << "\n";
        o << "\tsete\t%al\n"
          << "\tmovzbl\t%al, " << getRegister_x86("!reg") << "\n";
    }
}
