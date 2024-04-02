#include "IR.h"
#include "BasicBlock.h"
string IRInstr::getRegister_x86(string register_key)
{
    static map<string, string> registerMap = {
        {"!reg", "%eax"},
        {"!reg0", "%edi"},
        {"!reg1", "%esi"},
        {"!reg2", "%edx"},
        {"!reg3", "%ecx"},
        {"!reg4", "%r8d"},
        {"!reg5", "%r9d"},

    };

    auto it = registerMap.find(register_key);
    if (it != registerMap.end())
    {
        return it->second;
    }
    return "";
}

string IRInstr::getMemory_x86(string var)
{
    return "-" + to_string(this->bb->cfg->get_var_index(var)) + "(%rbp)";
}

Type IRInstr::getType(){
    return t;
}


string IRInstr::getRegister_arm(string register_key)
{
    static map<string, string> registerMap = {
        {"!reg", "w0"},
        {"!reg0", "w1"},
        {"!reg1", "w2"},
        {"!reg2", "w3"},
        {"!reg3", "w4"},
        {"!reg4", "w5"},
        {"!reg5", "w6"},
        {"!reg6", "w7"},

    };

    auto it = registerMap.find(register_key);
    if (it != registerMap.end())
    {
        return it->second;
    }
    return "";
}