#include "Instr_mult.h"
#include "BasicBlock.h"
using namespace std;

void Instr_mult::gen_asm(ostream &o){
    string var1 = factor == "!reg" ? REG : "-"+to_string(this->bb->cfg->get_var_index(factor))+"(%rbp)";
    string var2 = destination == "!reg" ? REG : "-"+to_string(this->bb->cfg->get_var_index(destination))+"(%rbp)";
    o << "\timull \t"<< var1 << ", " <<  var2 << "\n";
}
