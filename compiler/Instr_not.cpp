#include "Instr_not.h"
using namespace std;

void Instr_not::gen_asm(ostream &o){
    o << "\tnegl\t"<< source <<"\n";
}
