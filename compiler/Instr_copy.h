#pragma once

#include "IR.h"
#include <string>

class Instr_copy : public IRInstr{
public:
    Instr_copy(BasicBlock *bb, Type type, std::string source, std::string destination)
        : IRInstr(bb,type), source(source), destination(destination) {};

    virtual void gen_asm(std::ostream &o) override;

private:
    std::string source;
    std::string destination; 
};
