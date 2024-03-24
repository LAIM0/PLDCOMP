#include "Instr_ldconst.h"
#include "BasicBlock.h"
using namespace std;

void Instr_ldconst::gen_asm(ostream &o){
    string var = getRegister_x86(destination);
    if(var.length() == 0){
        var = getMemory_x86(destination) ;
    }
    o << "\tmovl \t$" << constant << ", " << var << "\n";
}
