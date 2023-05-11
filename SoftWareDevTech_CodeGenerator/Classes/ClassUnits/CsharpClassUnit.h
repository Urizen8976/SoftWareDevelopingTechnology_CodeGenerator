#ifndef CSHARPCLASSUNIT_H
#define CSHARPCLASSUNIT_H


#include <Classes/ClassUnits/IClassUnit.h>


class CsharpClassUnit : public IClassUnit
{
public:
    explicit CsharpClassUnit(const std::string& name);
    void add(const UnitPtr& unit, Flags flags) override;
    std::string compile(unsigned int level = 0) const override;
};


#endif // CSHARPCLASSUNIT_H
