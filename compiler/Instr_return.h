#pragma once
#include "IR.h"
#include <string>

class Instr_return : public IRInstr{
public:
    Instr_return(BasicBlock *bb, Type type, std::string source)
        : IRInstr(bb,t), source(source){};

    virtual void gen_asm(std::ostream &o) override;

private:
    Type type;
    std::string source; 
};
