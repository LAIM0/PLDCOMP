#pragma once
#include "IR.h"
#include <string>

class Instr_minus : public IRInstr{
public:
    Instr_minus(BasicBlock *bb, Type type, std::string source)
        : IRInstr(bb,t), source(source) {};

    virtual void gen_asm(std::ostream &o) override;

private:
    Type type;
    std::string source; 
};
