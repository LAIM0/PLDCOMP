#include "Instr_add.h"
using namespace std;

void Instr_add::gen_asm(ostream &o){
    o << "\taddl\t"<< added << ", " <<  destination << "\n";
}
