#pragma once
#include "IR.h"
#include <string>

class Instr_neg : public IRInstr{
public:
    Instr_neg(BasicBlock *bb, Type t, std::string source)
        : IRInstr(bb,t), source(source) {};

    virtual void gen_asm(std::ostream &o) override;

private:
    // Type type;
    std::string source; 
};
