#include "Instr_and.h"
#include "BasicBlock.h"
using namespace std;

void Instr_and::gen_asm(ostream &o)
{
    string target = this->bb->cfg->target_architecture;
    string var1;
    string var2;
    // bool registreSource = false;
    // bool registreDest = false;
    if (target == "arm")
    {
        /*
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
            o << "\tmov " << var2 << ", " << var1 << "\n";
        }
        else if (registreSource)
        {
            o << "\tstr " << var1 << ", " << var2 << "\n";
        }
        else if (registreDest)
        {
            o << "\tldr " << var2 << ", " << var1 << "\n";
        }*/
    }
    else if (target == "x86")
    {
        if (source == "!reg")
        {
            var1 = REG;
        }
        else if (source == "!regd")
        {
            var1 = REGD;
        }
        else
        {
            var1 = "-" + to_string(this->bb->cfg->get_var_index(source)) + "(%rbp)";
        }
        string var2;
        if (destination == "!reg")
        {
            var2 = REG;
        }
        else if (destination == "!regd")
        {
            var2 = REGD;
        }
        else
        {
            var2 = "-" + to_string(this->bb->cfg->get_var_index(destination)) + "(%rbp)";
        }
        o << "\tandl\t" << var1 << ", " << var2 << "\n";
    }
}