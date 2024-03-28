#pragma once

#include "IR.h"
#include <string>

class Instr_readmem : public IRInstr
{
public:
    Instr_readmem(BasicBlock *bb, Type type, std::string adresse, std::string destination)
        : IRInstr(bb, t), adresse(adresse), destination(destination){};

    virtual void gen_asm(std::ostream &o) override;

private:
    Type type;
    std::string adresse;
    std::string destination;
};