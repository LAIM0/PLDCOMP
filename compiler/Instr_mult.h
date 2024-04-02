#pragma once
#include "IR.h"
#include <string>

class Instr_mult : public IRInstr{
public:
    Instr_mult(BasicBlock *bb, Type t, std::string factor, std::string destination)
        : IRInstr(bb,t), factor(factor), destination(destination) {};

    virtual void gen_asm(std::ostream &o) override;

private:
    // Type type;
    std::string factor; 
    std::string destination;
};
