
#include "CodeGenx86.h"
void CodeGenx86::gen_asm_init()
{
    std::cout << ".globl main\n";
    std::cout << " main: \n";
    gen_asm_prolog();
}
void CodeGenx86::gen_asm_end()
{
    gen_asm_epilog();
    std::cout << "\tret\n";
}
void CodeGenx86::gen_asm_prolog()
{
    std::cout << "\tpushq	%rbp\n"
              << "\tmovq	%rsp, %rbp\n";
}

void CodeGenx86::gen_asm_epilog()
{
    std::cout << "\tpopq	%rbp\n";
}

void CodeGenx86::gen_asm_return_const(std::string ret_const)
{
    std::cout << "\tmovl \t$" << ret_const << ", %eax\n";
}

void CodeGenx86::gen_asm_return_var(int index_var)
{
    std::cout << "\tmovl \t-" << index_var << "(%rbp), %eax\n";
}

void CodeGenx86::gen_asm_aff_const(std::string constant, int index)
{
    std::cout << "\tmovl\t$" << constant << ", -" << index << "(%rbp)\n";
}

void CodeGenx86::gen_asm_aff_var(int first_index, int second_index)
{
    std::cout << "\tmovl\t-" << first_index << "(%rbp), %eax\n";
    std::cout << "\tmovl\t%eax, -" << second_index << "(%rbp)\n";
}

void CodeGenx86::gen_asm_add_const(int add, int index){
    std::cout << "\taddl\t$" << add << ", -" << index << "(%rbp)\n";
    std::cout << "\tmovl\t$0, %eax\n";
}

void CodeGenx86::gen_asm_sub_const(int sub, int index){
    std::cout << "\tsub\t$" << sub << ", -" << index << "(%rbp)\n";
    std::cout << "\tmovl\t$0, %eax\n";
}

void CodeGenx86::gen_asm_neg(int index){
    std::cout << "\tnegl\t-" << index <<"(%rbp)\n";
}
