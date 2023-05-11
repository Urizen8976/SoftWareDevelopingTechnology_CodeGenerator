#ifndef IMETHODUNIT_H
#define IMETHODUNIT_H


#include <Classes/IUnit.h>


class IMethodUnit : public IUnit {
public:
    enum Modifier {
        STATIC = 1,
        CONST = 1 << 1,
        VIRTUAL = 1 << 2,
        FINAL = 1 << 3,
        ABSTRACT = 1 << 4,
        SYNCHRONIZED = 1 << 5,
        VOLATILE = 1 << 6
    };
public:
    virtual void add(const UnitPtr&, Flags = 0) = 0;
    virtual std::string compile(unsigned int level = 0) const = 0;
protected:
    std::string methodName;
    std::string returnType;
    Flags flags;
    std::vector<UnitPtr> body;
};


#endif // IMETHODUNIT_H
