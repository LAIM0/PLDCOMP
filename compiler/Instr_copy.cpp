#include "Instr_copy.h"
#include "BasicBlock.h"

using namespace std;

void Instr_copy::gen_asm(ostream &o)
{
    string target = this->bb->cfg->target_architecture;
    string var1;
    string var2;
    bool registreSource = false;
    bool registreDest = false;
    if (target == "arm")
    {
        if (source == "!reg")
        {
            var1 = "w0";
            registreSource = true;
        }
        else if (source == "!regd")
        {
            var1 = "w1";
            registreSource = true;
        }
        else
        {
            var1 = "[sp, #" + to_string(this->bb->cfg->get_var_index(source)) + "]";
        }

        if (destination == "!reg")
        {
            var2 = "w0";
            registreDest = true;
        }
        else if (destination == "!regd")
        {
            var2 = "w1";
            registreDest = true;
        }
        else
        {
            var2 = "[sp, #" + to_string(this->bb->cfg->get_var_index(destination)) + "]";
        }

        if (registreDest && registreSource)
        {
            o << "\tmov " << var2 << ", " << var1 << "\t;COPY INSTR\n";
        }
        else if (registreSource)
        {
            o << "\tstr " << var1 << ", " << var2 << "\t;COPY INSTR\n";
        }
        else if (registreDest)
        {
            o << "\tldr " << var2 << ", " << var1 << "\t;COPY INSTR\n";
        }
    }
    else if (target == "x86")
    {

        string var1 = getRegister_x86(source);
        if (var1.length() == 0)
        {
            var1 = getMemory_x86(source);
        }

        string var2 = getRegister_x86(destination);
        if (var2.length() == 0)
        {
            var2 = getMemory_x86(destination);
        }
        o << "\tmovl \t" << var1 << ", " << var2 << "\n";
    }
}