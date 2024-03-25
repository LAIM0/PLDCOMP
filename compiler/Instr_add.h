#pragma once
#include "IR.h"
#include <string>

class Instr_add : public IRInstr{
public:
    Instr_add(BasicBlock *bb, Type type, std::string added, std::string destination)
        : IRInstr(bb,t), added(added), destination(destination) {};

    virtual void gen_asm(std::ostream &o) override;

private:
    Type type;
    std::string added; 
    std::string destination;
};
