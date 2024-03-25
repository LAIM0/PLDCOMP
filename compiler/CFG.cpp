#include "CFG.h"
#include "BasicBlock.h"

void CFG::add_bb(BasicBlock *bb)
{
    bbs.push_back(bb);
}

void CFG::gen_asm(ostream &o)
{
    gen_asm_prologue(o);
    for (BasicBlock *bb : bbs)
    {
        bb->gen_asm(o);
    }
    gen_asm_epilogue(o);
}

void CFG::gen_asm_prologue(ostream &o)
{

    string target = this->target_architecture;
    int nbVar = this->SymbolType.size();
    if (target == "x86")
    {
        o << ".globl " << cfgName << "\n";
        o << cfgName << ":\n";
        o << "\tpushq	%rbp\n"
          << "\tmovq	%rsp, %rbp\n";
    }
    else if (target == "arm")
    {
        o << "\t.section\t__TEXT,__text,regular,pure_instructions\n";
        o << "\t.globl\t_main\n";
        o << "\t.p2align\t2\n";
        o << "_main:\n";
        o << "\t.cfi_startproc\n";
        o << "\tsub	sp, sp, #" << nbVar / 4 * 16 + 16 << "\n";
        o << "\t.cfi_def_cfa_offset " << nbVar / 4 * 16 + 16 << "\n";
        o << "\tstr	wzr, [sp, #" << nbVar / 4 * 16 + 12 << "]\n";
    }
}

void CFG::gen_asm_epilogue(ostream &o)
{
    string target = this->target_architecture;
    int nbVar = this->SymbolType.size();
    if (target == "x86")
    {
        o << "\tpopq	%rbp\n\tret\n";
    }
    else if (target == "arm")
    {
        o << "\tadd	sp, sp, #" << nbVar / 4 * 16 + 16 << "\n";
        o << "\tret\n";
        o << "\t.cfi_endproc\n";
        o << "\n.subsections_via_symbols\n";
    }
}

void CFG::assign_var_index()
{
    int number_of_symbols = (int)SymbolType.size();
    int index = number_of_symbols * 4;
    for (auto symbols : SymbolType)
    {
        SymbolIndex[symbols.first] = index;
        index -= 4;
    }
}
void CFG::add_to_symbol_table(string name, Type t)
{
    SymbolType[name] = t;
}
void CFG::add_to_function_table(string name, Type t)
{
    FunctionType[name] = t;
}

string CFG::create_new_tempvar(Type t)
{
    string new_tmp = "tmp" + to_string(nextFreeSymbolIndex++);
    SymbolType[new_tmp] = t;
    return new_tmp;
}

int CFG::get_var_index(string name)
{
    return SymbolIndex[name];
}

Type CFG::get_var_type(string name)
{
    return SymbolType[name];
}

Type CFG::get_function_type(string name)
{
    return FunctionType[name];
}

void CFG::set_function_table(map<string, Type> function_table)
{
    this->FunctionType = function_table;
}

map<string, Type> CFG::get_function_table()
{
    return this->FunctionType;
}