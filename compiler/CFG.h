#ifndef CFG_H
#define CFG_H

#include <string>
#include <iostream>
#include "Type.h"
#include <map>
#include <vector>
using namespace std;
/** The class for the control flow graph, also includes the symbol table */

/* A few important comments:
	 The entry block is the one with the same label as the AST function name.
	   (it could be the first of bbs, or it could be defined by an attribute value)
	 The exit block is the one with both exit pointers equal to nullptr.
	 (again it could be identified in a more explicit way)

 */
class BasicBlock;

class CFG
{
public:
	CFG(string name, string target_architecture) : cfgName(name), target_architecture(target_architecture){};

	// DefFonction* ast; /**< The AST this CFG comes from */

	void add_bb(BasicBlock *bb);

	// x86 code generation: could be encapsulated in a processor class in a retargetable compiler
	void gen_asm(ostream &o);
	string IR_reg_to_asm(string reg); /**< helper method: inputs a IR reg or input variable, returns e.g. "-24(%rbp)" for the proper value of 24 */
	void gen_asm_prologue(ostream &o);
	void gen_asm_epilogue(ostream &o);

	// symbol table methods
	void add_to_symbol_table(string name, Type t, int pointerLevel);
	void add_to_function_table(string name, Type t);
	string create_new_tempvar(Type t);
	void assign_var_index();
	int get_var_index(string name);
	Type get_var_type(string name);
	Type get_function_type(string name);
	void set_function_table(map<string, Type> function_table);
	map<string, Type> get_function_table();

	// basic block management
	string new_BB_name();
	BasicBlock *current_bb;
	string target_architecture;

protected:
	map<string, Type> SymbolType;		 /**< part of the symbol table  */
	map<string, int> SymbolPointerLevel; /**< part of the symbol table  */
	map<string, int> SymbolIndex;		 /**< part of the symbol table  */
	map<string, Type> FunctionType;
	int nextFreeSymbolIndex = 0; /**< to allocate new symbols in the symbol table */
	int nextBBnumber = 0;		 /**< just for naming */
	string cfgName;
	vector<BasicBlock *> bbs; /**< all the basic blocks of this CFG*/
};

#endif