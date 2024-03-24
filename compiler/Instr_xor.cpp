#include "Instr_xor.h"
#include "BasicBlock.h"
using namespace std;

void Instr_xor::gen_asm(ostream &o){
    string var1 = getRegister_x86(source);
    if(var1.length() == 0){
        var1 = getMemory_x86(source) ;
    }

    string var2 = getRegister_x86(destination);
    if(var2.length() == 0){
        var2 = getMemory_x86(destination) ;
    }
    o << "\txorl\t"<< var1 << ", " <<  var2 << "\n";
}
