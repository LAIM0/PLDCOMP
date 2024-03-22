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
        else if (source == "!regd")
        {
            var = "w1";
        }
        o << "\tsubs " << var << ", " << var << ", #0\t; NOT INSTR\n";
        o << "\tcset " << var << ", eq\t; NOT INSTR\n";
        o << "\tand " << var << ", " << var << ", #0x1\t; NOT INSTR\n";
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
        o << "\tcmpl\t$0, " << var << "\n";
        o << "\tsete\t%al\n"
          << "\tmovzbl\t%al, " << REG << "\n";
    }
}
