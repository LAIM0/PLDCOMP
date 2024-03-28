#pragma once

#include "IR.h"
#include <string>

class Instr_writemem : public IRInstr
{
public:
    Instr_writemem(BasicBlock *bb, Type type, std::string adresse, std::string destination)
        : IRInstr(bb, t), source(source), destination(destination){};

    virtual void gen_asm(std::ostream &o) override;

private:
    Type type;
    std::string source;
    std::string destination;
};