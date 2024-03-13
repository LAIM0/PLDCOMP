#include "Instr_add.h"
#include "BasicBlock.h"
using namespace std;

void Instr_add::gen_asm(ostream &o){
    string var1 = added == "!reg" ? REG : "-"+to_string(this->bb->cfg->get_var_index(added))+"(%rbp)";
    string var2 = destination == "!reg" ? REG : "-"+to_string(this->bb->cfg->get_var_index(destination))+"(%rbp)";
    o << "\taddl\t"<< var1 << ", " <<  var2 << "\n";
}
