#include "Instr_jump.h"
#include "BasicBlock.h"

using namespace std;

void Instr_jump::gen_asm(ostream &o)
{
    string target = this->bb->cfg->target_architecture;
    if (target == "arm")
    {
        if (!condition.empty())
        {
            // Convertir la condition en suffixe ARM64. Exemple: "e" -> "EQ", "ne" -> "NE"
            string armConditionSuffix;
            if (condition == "e")
                armConditionSuffix = "eq";
            else if (condition == "ne")
                armConditionSuffix = "ne";
            // Ajouter d'autres conditions ?

            o << "\tB" << armConditionSuffix << "\t" << targetBb->label << endl;
        }
        else
        {
            // Saut inconditionnel
            o << "\tB\t" << targetBb->label << endl;
        }
    }
    else if (target == "x86")
    {
        if (!condition.empty())
        {
            o << "\tj" << condition << "\t." << targetBb->label << endl;
        }
        else
        {
            o << "\tjmp\t." << targetBb->label << endl;
        }
    }
}