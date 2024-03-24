#ifndef IR_H
#define IR_H

#include <vector>
#include <string>
#include <iostream>
#include <initializer_list>
#include "Type.h"

class BasicBlock;
class CFG;

using namespace std;

//! The class for one 3-address instruction
class IRInstr {
 
   public:

	/**  constructor */
	IRInstr(){};
	virtual ~IRInstr() = default;
	IRInstr(BasicBlock* bb_, Type t): bb(bb_), t(t) {};
	
	/** Actual code generation */
	virtual void gen_asm(ostream &o) = 0; /**< x86 assembly code generation for this IR instruction */
	string getRegister_x86(string register_key);
	string getMemory_x86(string var);

	
 protected:
	BasicBlock* bb; /**< The BB this instruction belongs to, which provides a pointer to the CFG this instruction belong to */
	Type t;
	vector<string> params; /**< For 3-op instrs: d, x, y; for ldconst: d, c;  For call: label, d, params;  for wmem and rmem: choose yourself */
	// if you subclass IRInstr, each IRInstr subclass has its parameters and the previous (very important) comment becomes useless: it would be a better design. 
};

#endif
