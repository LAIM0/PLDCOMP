#include "Instr_div.h"
#include "BasicBlock.h"
using namespace std;

void Instr_div::gen_asm(ostream &o)
{   
    string var;
    if(destination == "!reg"){
        var = REG;
    } else if(destination == "!regd"){
        var = REGD;
    } else {
        var = "-" + to_string(this->bb->cfg->get_var_index(destination)) + "(%rbp)";
    }
    o << "\tcltd\n\tidivl \t" << var << "\n";
}
