#include "Instr_ldconst.h"
#include "BasicBlock.h"
using namespace std;

void Instr_ldconst::gen_asm(ostream &o){
    string var;
    if(destination == "!reg"){
        var = REG;
    } else if(destination == "!regd"){
        var = REGD;
    } else {
        var = "-" + to_string(this->bb->cfg->get_var_index(destination)) + "(%rbp)";
    }
    o << "\tmovl \t$" << constant << ", " << var << "\n";
}
