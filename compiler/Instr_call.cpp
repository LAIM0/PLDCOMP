#include "Instr_call.h"
#include "BasicBlock.h"

using namespace std;

void Instr_call::gen_asm(ostream &o){
    o << "\tcall \t" << function <<"\n";
}
