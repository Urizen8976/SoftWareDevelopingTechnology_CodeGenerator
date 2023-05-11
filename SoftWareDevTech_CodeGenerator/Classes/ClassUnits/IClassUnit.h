#ifndef ICLASSUNIT_H
#define ICLASSUNIT_H


#include <Classes/Unit.h>


class IClassUnit : public Unit
{
public:
    enum AccessModifier {
        PUBLIC,
        PROTECTED,
        PRIVATE,
        PRIVATE_PROTECTED,
        FILE,
        INTERNAL,
        PROTECTED_INTERNAL,
    };
    static const std::vector<std::string> ACCESS_MODIFIERS;
public:
    virtual void add(const UnitPtr&, Flags) = 0;
    virtual std::string compile(unsigned int level = 0) const = 0;
protected:
    std::string className;
    using Fields = std::vector<UnitPtr>;
    std::vector< Fields > fields;
};


#endif // ICLASSUNIT_H
