#include "Instr_comp.h"
#include "BasicBlock.h"
using namespace std;

void Instr_comp::gen_asm(ostream &o)
{
    string var1 = getRegister_x86(comp_left);
    if(var1.length() == 0){
        var1 = getMemory_x86(comp_left) ;
    }

    string var2 = getRegister_x86(comp_right);
    if(var2.length() == 0){
        var2 = getMemory_x86(comp_right) ;
    }
    o << "\tcmpl\t" << var1 << ", " << var2 << "\n";
    switch (op)
    {
    case Equal:
        o << "\tsete\t%al\n";
        break;
    case NotEqual:
        o << "\tsetne\t%al\n";
        break;
    case LessThan:
        o << "\tsetl\t%al\n";
        break;
    case LessThanOrEqual:
        o << "\tsetle\t%al\n";
        break;
    case GreaterThan:
        o << "\tsetg\t%al\n";
        break;
    case GreaterThanOrEqual:
        o << "\tsetge\t%al\n";
        break;
    }
    o << "\tmovzbl\t%al, " << getRegister_x86("!reg") << "\n";
}
