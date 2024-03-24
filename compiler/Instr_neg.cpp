#include "Instr_neg.h"
#include "BasicBlock.h"
using namespace std;

void Instr_neg::gen_asm(ostream &o){
    string var = getRegister_x86(source);
    if(var.length() == 0){
        var = getMemory_x86(source) ;
    }
    o << "\tnegl\t"<< var <<"\n";
}
