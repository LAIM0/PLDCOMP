#pragma once
#include "IR.h"
#include <string>

class Instr_div : public IRInstr
{
public:
    Instr_div(BasicBlock *bb, Type type, std::string divfactor, std::string destination)
        : IRInstr(bb, t), divfactor(divfactor), destination(destination){};

    virtual void gen_asm(std::ostream &o) override;

private:
    Type type;
    std::string destination;
    std::string divfactor;
};