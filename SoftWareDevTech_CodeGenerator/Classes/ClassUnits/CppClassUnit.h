#ifndef CPPCLASSUNIT_H
#define CPPCLASSUNIT_H


#include <Classes/ClassUnits/IClassUnit.h>


class CppClassUnit : public IClassUnit
{
public:
    explicit CppClassUnit(const std::string& name);
    void add(const UnitPtr& unit, Flags flags) override;
    std::string compile(unsigned int level = 0) const override;
};


#endif // CPPCLASSUNIT_H
