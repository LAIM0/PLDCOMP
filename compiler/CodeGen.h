#pragma once
#include <iostream>

class CodeGen {
    public: 
        void gen_asm_prolog();
        void gen_asm_epilog();
        void gen_asm_return_var(int index_var);
        void gen_asm_return_const(std::string ret_const);
        void gen_asm_aff_var(int first_index, int second_index);
        void gen_asm_aff_const(std::string constant, int index);
        void gen_asm_add_const(int add, int index);
        void gen_asm_sub_const(int sub, int index);
        void gen_asm_neg(int index);
};