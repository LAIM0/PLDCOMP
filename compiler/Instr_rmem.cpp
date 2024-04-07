#include "Instr_rmem.h"
#include "BasicBlock.h"
using namespace std;

void Instr_rmem::gen_asm(ostream &o)
{
    string target = this->bb->cfg->target_architecture;
    string var1;
    string var2;
    if (target == "arm")
    {
        if (destination == "!reg")
        {
            var1 = "x0";
        }
        else
        {
            o << "\tldr x2, [sp, #" + to_string(this->bb->cfg->get_var_index(destination)) << "]\t;RMEM INSTR\n";
            var1 = "x2";
        }
        if (address == "!reg")
        {
            var2 = "x0";
        }
        else
        {
            o << "\tldr x3, [sp, #" + to_string(this->bb->cfg->get_var_index(address)) << "]\t;RMEM INSTR\n";
            var2 = "x3";
        }
        o << "\tldr " << var1 << ", [" << var2 << "]\t;RMEM INSTR\n";
    }
    else if (target == "x86")
    {
    }
}
