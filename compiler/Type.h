#ifndef TYPE_H
#define TYPE_H

#include <map>
#include <string>

typedef enum {_INT = 1, _CHAR, _VOID} Type;
typedef enum {x86, arm} TypeAsm;

class TypeClass {
private:
    static std::map<std::string, Type> typeMap;

public:
    static Type getType(const std::string& typeName);
    static std::string getStringFromType(Type type);
};


#endif // TYPE_H
