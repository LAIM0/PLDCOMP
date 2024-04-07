#include "Instr_ldaddr.h"
#include "BasicBlock.h"
using namespace std;

void Instr_ldaddr::gen_asm(ostream &o)
{
    string target = this->bb->cfg->target_architecture;
    string var1;
    string var2;
    if (target == "arm")
    {
        if (destination == "!reg")
        {
            o << "\tadd x0, sp, #" << to_string(this->bb->cfg->get_var_index(variable)) << "\t;LDADDR INSTR\n";
        }
        else
        {
            o << "\tadd x1, sp, #" << to_string(this->bb->cfg->get_var_index(variable)) << "\t;LDADDR INSTR\n";
            o << "\tstr x1, [sp, #" + to_string(this->bb->cfg->get_var_index(destination)) << "]\t;LDADDR INSTR\n";
        }
    }
    else if (target == "x86")
    {
    }
}
