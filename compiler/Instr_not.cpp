#include "Instr_not.h"
#include "BasicBlock.h"
using namespace std;

void Instr_not::gen_asm(ostream &o){
    string var;
    if(source == "!reg"){
        var = REG;
    } else if(source == "!regd"){
        var = REGD;
    } else {
        var = "-" + to_string(this->bb->cfg->get_var_index(source)) + "(%rbp)";
    }
    o << "\tcmpl\t$0, "<< var <<"\n";
    o << "\tsete\t%al\n" << "\tmovzbl\t%al, " << REG << "\n";
}
