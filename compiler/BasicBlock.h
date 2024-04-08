#include "CFG.h"
using namespace std;
#include <vector>
#include <map>
#include "IR.h"
/**  The class for a basic block */


class BasicBlock
{
public:
    BasicBlock(CFG *cfg, string entry_label): cfg(cfg), label(entry_label){};
    void gen_asm(ostream &o); /**< x86 assembly code generation for this basic block (very simple) */
    void add_IRInstr(IRInstr *instr); 
	string create_new_tempvar(Type t);

    // No encapsulation whatsoever here. Feel free to do better.
    BasicBlock *exit_true;    /**< pointer to the next basic block, true branch. If nullptr, return from procedure */
    BasicBlock *exit_false;   /**< pointer to the next basic block, false branch. If null_ptr, the basic block ends with an unconditional jump */
    string label;             /**< label of the BB, also will be the label in the generated code */
    CFG *cfg;                 /** < the CFG where this block belongs */
    vector<IRInstr *> instrs; /** < the instructions themselves. */
    string test_var_name;     /** < when generating IR code for an if(expr) or while(expr) etc,
                                    store here the name of the variable that holds the value of expr */
	map <string, Type> SymbolType; /**< part of the symbol table  */
	int nextFreeSymbolIndex = 0; /**< to allocate new symbols in the symbol table */

protected:
};