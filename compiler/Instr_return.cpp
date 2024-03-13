#include "Instr_return.h"
using namespace std;

void Instr_return::gen_asm(ostream &o){
    o << "\tmovl \t" << source << ", %eax\n";
}
