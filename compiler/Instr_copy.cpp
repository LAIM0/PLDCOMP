#include "Instr_copy.h"
#include "BasicBlock.h"

using namespace std;

void Instr_copy::gen_asm(ostream &o){
    string var1 = source == "!reg" ? REG : "-"+to_string(this->bb->cfg->get_var_index(source))+"(%rbp)";
    string var2 = destination == "!reg" ? REG : "-"+to_string(this->bb->cfg->get_var_index(destination))+"(%rbp)";
    o << "\tmovl \t" << var1 << ", " << var2 <<"\n";
}
