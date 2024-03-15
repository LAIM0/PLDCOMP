#include "Instr_add.h"
#include "BasicBlock.h"
using namespace std;

void Instr_add::gen_asm(ostream &o){
    string var1;
    if(added == "!reg"){
        var1 = REG;
    } else if(added == "!regd"){
        var1 = REGD;
    } else {
        var1 = "-" + to_string(this->bb->cfg->get_var_index(added)) + "(%rbp)";
    }
    string var2;
    if(destination == "!reg"){
        var2 = REG;
    } else if(destination == "!regd"){
        var2 = REGD;
    } else {
        var2 = "-" + to_string(this->bb->cfg->get_var_index(destination)) + "(%rbp)";
    }
    o << "\taddl\t"<< var1 << ", " <<  var2 << "\n";
}
