#include "Instr_minus.h"
using namespace std;

void Instr_minus::gen_asm(ostream &o){
    o << "\tnegl\t"<< source <<"\n";
}
