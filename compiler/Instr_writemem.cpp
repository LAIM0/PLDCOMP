#include "Instr_writemem.h"
#include "BasicBlock.h"

using namespace std;

void Instr_writemem::gen_asm(ostream &o)
{
    string target = this->bb->cfg->target_architecture;
    if (target == "x86")
    {
        // x86 à ajouter
    }
    else if (target == "arm")
    {
        // arm à ajouter
    }
}
