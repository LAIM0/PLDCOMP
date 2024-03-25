#include "Instr_jump.h"
#include "BasicBlock.h"

using namespace std;

void Instr_jump::gen_asm(ostream &o)
{
    string target = this->bb->cfg->target_architecture;
    string var1;
    string var2;
    bool registreSource = false;
    bool registreDest = false;
    if (target == "arm")
    {

    }
    else if (target == "x86")
    {
        if (!condition.empty()) {
            o << "\tj" << condition << "\t." << targetBb->label << endl;
        } else {
            o << "\tjmp\t." << targetBb->label << endl;
        }
    }

}