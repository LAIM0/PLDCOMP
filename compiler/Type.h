#ifndef TYPE_H
#define TYPE_H

#include <map>
#include <string>

typedef enum
{
    _INT = 1,
    _CHAR
} Type;
typedef enum
{
    x86,
    arm
} TypeAsm;

class TypeClass
{
private:
    static std::map<std::string, Type> typeMap;

public:
    static Type getType(const std::string &typeName, int pointerlevel);
};

#endif // TYPE_H
