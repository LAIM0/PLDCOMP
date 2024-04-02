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
class IRInstr
{

public:
	/**  constructor */
	IRInstr(){};
	virtual ~IRInstr() = default;
	IRInstr(BasicBlock *bb_, Type t) : bb(bb_), t(t){};

	/** Actual code generation */
	virtual void gen_asm(ostream &o) = 0; /**< x86 assembly code generation for this IR instruction */
	string getRegister_x86(string register_key);
	string getMemory_x86(string var);
	string getRegister_arm(string register_key);
	
 protected:
	BasicBlock* bb; /**< The BB this instruction belongs to, which provides a pointer to the CFG this instruction belong to */
	Type t;
	Type getType();	
};

#endif
