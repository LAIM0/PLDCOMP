#include "Type.h"

std::map<std::string, Type> TypeClass::typeMap = {
    {"int", _INT},
    {"char", _CHAR}
};

Type TypeClass::getType(const std::string& typeName) {
    auto it = typeMap.find(typeName);
    if (it != typeMap.end()) {
        return it->second;
    } else {
        return _INT; // Type par défaut en cas d'entrée non valide
    }
}
