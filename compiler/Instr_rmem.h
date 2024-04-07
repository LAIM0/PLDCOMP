#pragma once
#include "IR.h"
#include <string>

class Instr_rmem : public IRInstr
{
public:
    Instr_rmem(BasicBlock *bb, Type t, std::string address, std::string destination)
        : IRInstr(bb, t), address(address), destination(destination){};

    virtual void gen_asm(std::ostream &o) override;

private:
    std::string address;
    std::string destination;
};
