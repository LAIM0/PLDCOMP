#include "Instr_sub.h"
#include "BasicBlock.h"
using namespace std;

void Instr_sub::gen_asm(ostream &o){
    string var1 = subed == "!reg" ? REG : "-"+to_string(this->bb->cfg->get_var_index(subed))+"(%rbp)";
    string var2 = destination == "!reg" ? REG : "-"+to_string(this->bb->cfg->get_var_index(destination))+"(%rbp)";
    o << "\tsubl \t"<< var1 << ", " <<  var2 << "\n";
}
