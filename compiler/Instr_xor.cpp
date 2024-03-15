#include "Instr_xor.h"
#include "BasicBlock.h"
using namespace std;

void Instr_xor::gen_asm(ostream &o){
    string var1;
    if(source == "!reg"){
        var1 = REG;
    } else if(source == "!regd"){
        var1 = REGD;
    } else {
        var1 = "-" + to_string(this->bb->cfg->get_var_index(source)) + "(%rbp)";
    }
    string var2;
    if(destination == "!reg"){
        var2 = REG;
    } else if(destination == "!regd"){
        var2 = REGD;
    } else {
        var2 = "-" + to_string(this->bb->cfg->get_var_index(destination)) + "(%rbp)";
    }
    o << "\txorl\t"<< var1 << ", " <<  var2 << "\n";
}
