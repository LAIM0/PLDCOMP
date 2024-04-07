#include "Instr_wmem.h"
#include "BasicBlock.h"
using namespace std;

void Instr_wmem::gen_asm(ostream &o)
{
    string target = this->bb->cfg->target_architecture;
    string var1;
    string var2;
    if (target == "arm")
    {
        if (source == "!reg")
        {
            var1 = "x0";
        }
        else
        {
            o << "\tldr x2, [sp, #" + to_string(this->bb->cfg->get_var_index(source)) << "]\t;xMEM INSTR\n";
            var1 = "x2";
        }
        if (destination == "!reg")
        {
            var2 = "x0";
        }
        else
        {
            o << "\tldr x3, [sp, #" + to_string(this->bb->cfg->get_var_index(destination)) << "]\t;xMEM INSTR\n";
            var2 = "x3";
        }
        o << "\tstr " << var1 << ", [" << var2 << "]\t;xMEM INSTR\n";
    }
    else if (target == "x86")
    {
    }
}
