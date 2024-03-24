#include "Instr_div.h"
#include "BasicBlock.h"
using namespace std;

void Instr_div::gen_asm(ostream &o)
{   
    string var = getRegister_x86(divfactor);
    if(var.length() == 0){
        var = getMemory_x86(divfactor) ;
    }
    o << "\tcltd\n\tidivl \t" << var << "\n";
}
