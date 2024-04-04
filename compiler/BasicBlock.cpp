#include "BasicBlock.h"
#include "IR.h"

void BasicBlock::gen_asm(ostream &o)
{
    string target = cfg->target_architecture;
    if (target == "x86")
    {
        o << "." << label << ":\n";
    }
    else if (target == "arm" && label != "main")
    {
        o << label << ":\n";
    }

    for (auto instr : instrs)
    {
        instr->gen_asm(o);
    }
}

void BasicBlock::add_IRInstr(IRInstr *instr)
{
    instrs.push_back(instr);
}

string BasicBlock::create_new_tempvar(Type t)
{
    string new_tmp = "tmp" + to_string(nextFreeSymbolIndex++);
    SymbolType[new_tmp] = t;
    return new_tmp;
}