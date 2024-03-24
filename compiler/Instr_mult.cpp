#include "Instr_mult.h"
#include "BasicBlock.h"
using namespace std;

void Instr_mult::gen_asm(ostream &o){
    string var1 = getRegister_x86(factor);
    if(var1.length() == 0){
        var1 = getMemory_x86(factor) ;
    }

    string var2 = getRegister_x86(destination);
    if(var2.length() == 0){
        var2 = getMemory_x86(destination) ;
    }
    o << "\timull \t"<< var1 << ", " <<  var2 << "\n";
}
