#include "Instr_not.h"
#include "BasicBlock.h"
using namespace std;

void Instr_not::gen_asm(ostream &o){
    string var = getRegister_x86(source);
    if(var.length() == 0){
        var = getMemory_x86(source) ;
    }

    o << "\tcmpl\t$0, "<< var <<"\n";
    o << "\tsete\t%al\n" << "\tmovzbl\t%al, " << getRegister_x86("!reg") << "\n";
}
