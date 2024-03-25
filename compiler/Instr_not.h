#pragma once
#include "IR.h"
#include <string>

class Instr_not : public IRInstr{
public:
    Instr_not(BasicBlock *bb, Type type, std::string source)
        : IRInstr(bb,t), source(source) {};

    virtual void gen_asm(std::ostream &o) override;

private:
    Type type;
    std::string source; 
};
