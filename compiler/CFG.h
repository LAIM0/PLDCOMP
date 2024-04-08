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

	void add_to_function_table(string name, Type t); // Add to the list of functions with its type
	void add_to_function_params(string name, int n); // Add to the list of functions with its number of parameters
	void assign_var_index(); // Assign an index on the memory for each variable in the CFG
	int get_var_index(string name); // Get the index on the memory assigned to the variable
	Type get_function_type(string name); // Get the type of the function
	int get_function_params(string name); // Get the number of parameters of the function
	void set_function_table(map<string, Type> function_table, map<string, int> function_params); // Set FunctionType and FunctionParams
	map<string, Type> get_function_table(); // Get FunctionType
	map<string, int> get_function_params_table(); // Get FunctionParams

	// basic block management
	string new_BB_name();
	BasicBlock *current_bb; 
	string target_architecture; // ARM or x86
	bool has_return = false;

 protected:
	map <string, int> SymbolIndex; /**< part of the symbol table  */
	map<string, Type> FunctionType { // List of Functions with their type
        {"putchar", _INT}, 
        {"getchar", _INT} 
    };
	map<string, int> FunctionParams { // List of Functions with their number of params
		{"putchar", 1}, 
        {"getchar", 0} 
	};
	int nextBBnumber = 0; /**< just for naming */
	string cfgName; // Name of the cfg for the assembly
	vector<BasicBlock *> bbs; /**< all the basic blocks of this CFG*/
};

#endif