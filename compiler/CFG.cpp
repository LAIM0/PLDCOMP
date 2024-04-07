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
        o << "\t.globl\t_" << cfgName << "\n";
        o << "\t.p2align\t2\n";
        o << "_" << cfgName << ":\n";
        o << "\t.cfi_startproc\n";
        o << "\tsub	sp, sp, #" << nbVar / 4 * 16 + 16 << "\n";
        o << "\t.cfi_def_cfa_offset " << nbVar / 4 * 16 + 16 << "\n";
        if (cfgName == "main")
        {
            int spvar = (nbVar / 4 * 16 == 0) ? 16 : nbVar / 4 * 16 + 16;
            o << "\tstp	x29, x30, [sp, #" << spvar << "]\n";
            o << "\tadd x29, sp, #" << nbVar / 4 * 16 << "\n";
            o << "\t.cfi_def_cfa w29, 16\n";
            o << "\t.cfi_offset w30, -8\n";
            o << "\t.cfi_offset w29, -16\n";
        }
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
        if (cfgName == "main")
        {
            int spvar = (nbVar / 4 * 16 == 0) ? 16 : nbVar / 4 * 16 + 16;
            o << "\tldp x29, x30, [sp, #" << spvar << "]\n";
        }
        o << "\tadd	sp, sp, #" << nbVar / 4 * 16 + 16 << "\n";
        o << "\tret\n";
        o << "\t.cfi_endproc\n";
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
void CFG::add_to_symbol_table(string name, Type t, int pointerLevel)
{
    SymbolType[name] = t;
    SymbolPointerLevel[name] = pointerLevel;
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

string CFG::new_BB_name()
{
    return "LB" + to_string(this->nextBBnumber++);
}