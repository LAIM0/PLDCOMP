#pragma once

#include "IR.h"
#include <string>

class Instr_jump : public IRInstr
{
public:
    Instr_jump(BasicBlock *bb, BasicBlock *targetBb) : IRInstr(bb, _INT), targetBb(targetBb), condition("") {}

    Instr_jump(BasicBlock *bb, BasicBlock *targetBb, std::string condition)
        : IRInstr(bb, _INT), targetBb(targetBb), condition(condition) {}

    virtual void gen_asm(std::ostream &o) override;


    BasicBlock *get_target() const { return targetBb; }

    std::string get_condition() const { return condition; }


private:
    BasicBlock* targetBb; 
    std::string condition; 
};