#include "Type.h"
#include <iostream>

std::map<std::string, Type> TypeClass::typeMap = {
    {"int", _INT},
    {"char", _CHAR},
    {"void", _VOID}
};

Type TypeClass::getType(const std::string& typeName) {
    auto it = typeMap.find(typeName);
    if (it != typeMap.end()) {
        return it->second;
    } else {
        return _INT; 
    }
}

std::string TypeClass::getStringFromType(Type type){
    for (const auto& pair : typeMap) {
        if (pair.second == type) {
            return pair.first; 
        }
    }
    return "";
}
