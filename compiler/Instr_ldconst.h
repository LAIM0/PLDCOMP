#pragma once
#include "IR.h"
#include <string>

class Instr_ldconst : public IRInstr{
public:
    Instr_ldconst(BasicBlock *bb, Type type, std::string destination, std::string constant)
        : IRInstr(bb,t), constant(constant), destination(destination) {};

    virtual void gen_asm(std::ostream &o) override;

private:
    Type type;
    std::string constant;
    std::string destination; 
};
