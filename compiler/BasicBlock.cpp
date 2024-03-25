#include "BasicBlock.h"
#include "IR.h"

void BasicBlock::gen_asm(ostream &o)
{
    o << "." << label << ":\n";
    for (auto instr : instrs)
    {
        instr->gen_asm(o);
    }
}

void BasicBlock::add_IRInstr(IRInstr *instr)
{
    instrs.push_back(instr);
}