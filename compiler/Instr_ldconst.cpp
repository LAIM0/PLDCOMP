#include "Instr_ldconst.h"
#include "BasicBlock.h"
using namespace std;

void Instr_ldconst::gen_asm(ostream &o){
    string var = destination == "!reg" ? REG : "-" + to_string(bb->cfg->get_var_index(destination)) + "(%rbp)";
    o << "\tmovl \t$" << constant << ", " << var << "\n";
}
