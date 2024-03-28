#include "Instr_call.h"
#include "BasicBlock.h"

using namespace std;

void Instr_call::gen_asm(ostream &o)
{
    string target = this->bb->cfg->target_architecture;
    if (target == "x86")
    {
        o << "\tcall \t" << function << "\n";
    }
    else if (target == "arm")
    {
        o << "\tbl \t_" << function << "\n";
    }
}
