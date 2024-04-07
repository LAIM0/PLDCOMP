#pragma once
#include "IR.h"
#include <string>

class Instr_wmem : public IRInstr
{
public:
    Instr_wmem(BasicBlock *bb, Type t, std::string source, std::string destination)
        : IRInstr(bb, t), source(source), destination(destination){};

    virtual void gen_asm(std::ostream &o) override;

private:
    std::string source;
    std::string destination;
};
