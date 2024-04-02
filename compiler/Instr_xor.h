#pragma once
#include "IR.h"
#include <string>

class Instr_xor : public IRInstr{
public:
    Instr_xor(BasicBlock *bb, Type t, std::string source, std::string destination)
        : IRInstr(bb,t), source(source), destination(destination) {};

    virtual void gen_asm(std::ostream &o) override;

private:
    // Type type;
    std::string source; 
    std::string destination;
};
