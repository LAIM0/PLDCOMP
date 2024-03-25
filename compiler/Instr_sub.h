#pragma once
#include "IR.h"
#include <string>

class Instr_sub : public IRInstr{
public:
    Instr_sub(BasicBlock *bb, Type type, std::string subed, std::string destination)
        : IRInstr(bb,t), subed(subed), destination(destination) {};

    virtual void gen_asm(std::ostream &o) override;

private:
    Type type;
    std::string subed; 
    std::string destination;
};
