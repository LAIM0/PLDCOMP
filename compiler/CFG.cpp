#include "CFG.h"
#include "BasicBlock.h"

void CFG::add_bb(BasicBlock * bb){
    bbs.push_back(bb);
}

void CFG::gen_asm(ostream& o){
    gen_asm_prologue(o);
    for(BasicBlock * bb : bbs){
        bb->gen_asm(o);
    }
    gen_asm_epilogue(o);
}

void CFG::gen_asm_prologue(ostream &o){
    o << ".globl main\n";
    o <<"main:\n";
    o << "\tpushq	%rbp\n" << "\tmovq	%rsp, %rbp\n";
}

void CFG::gen_asm_epilogue(ostream &o){
    o << "\tpopq	%rbp\n\tret\n";
}