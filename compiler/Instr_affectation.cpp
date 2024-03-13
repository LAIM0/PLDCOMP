#include "Instr_affectation.h"
using namespace std;

void Instr_affectation::gen_asm(ostream &o){
    o << "\tmovl \t" << source << ", " << destination <<"\n";
}
