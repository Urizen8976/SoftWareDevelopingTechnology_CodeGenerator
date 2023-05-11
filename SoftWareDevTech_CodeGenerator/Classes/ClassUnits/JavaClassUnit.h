#ifndef JAVACLASSUNIT_H
#define JAVACLASSUNIT_H


#include <Classes/ClassUnits/IClassUnit.h>


class JavaClassUnit : public IClassUnit
{
public:
    explicit JavaClassUnit(const std::string& name);
    void add(const UnitPtr& unit, Flags flags) override;
    std::string compile(unsigned int level = 0) const override;
};


#endif // JAVACLASSUNIT_H
