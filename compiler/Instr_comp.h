#pragma once
#include "IR.h"
#include <string>

class Instr_comp : public IRInstr
{
public:
    typedef enum
    {
        Equal,
        NotEqual,
        LessThan,
        LessThanOrEqual,
        GreaterThan,
        GreaterThanOrEqual
    } CompOperator;

    Instr_comp(BasicBlock *bb, Type type, std::string comp_left, std::string comp_right, CompOperator op)
        : IRInstr(bb, t), comp_left(comp_left), comp_right(comp_right), op(op){};

    virtual void gen_asm(std::ostream &o) override;

private:
    Type type;
    std::string comp_left;
    std::string comp_right;
    CompOperator op;
};
