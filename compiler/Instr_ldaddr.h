#pragma once
#include "IR.h"
#include <string>

class Instr_ldaddr : public IRInstr
{
public:
    Instr_ldaddr(BasicBlock *bb, Type t, std::string destination, std::string variable)
        : IRInstr(bb, t), variable(variable), destination(destination){};

    virtual void gen_asm(std::ostream &o) override;

private:
    std::string variable;
    std::string destination;
};
