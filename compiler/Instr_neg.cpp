#include "Instr_neg.h"
#include "BasicBlock.h"
using namespace std;

void Instr_neg::gen_asm(ostream &o){
    string var;
    if(source == "!reg"){
        var = REG;
    } else if(source == "!regd"){
        var = REGD;
    } else {
        var = "-" + to_string(this->bb->cfg->get_var_index(source)) + "(%rbp)";
    }
    o << "\tnegl\t"<< var <<"\n";
}
