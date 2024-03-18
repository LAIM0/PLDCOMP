#include "Instr_comp.h"
#include "BasicBlock.h"
using namespace std;

void Instr_comp::gen_asm(ostream &o)
{
    string var1;
    if (comp_left == "!reg")
    {
        var1 = REG;
    }
    else if (comp_left == "!regd")
    {
        var1 = REGD;
    }
    else
    {
        var1 = "-" + to_string(this->bb->cfg->get_var_index(comp_left)) + "(%rbp)";
    }
    string var2;
    if (comp_right == "!reg")
    {
        var2 = REG;
    }
    else if (comp_right == "!regd")
    {
        var2 = REGD;
    }
    else
    {
        var2 = "-" + to_string(this->bb->cfg->get_var_index(comp_right)) + "(%rbp)";
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
    o << "\tmovzbl\t%al, " << REG << "\n";
}
