#pragma once

#include "IR.h"
#include <string>

class Instr_call : public IRInstr{
public:
    Instr_call(BasicBlock *bb, Type type, std::string function)
        : IRInstr(bb,type), function(function) {};

    virtual void gen_asm(std::ostream &o) override;

private:
    std::string function;
};
