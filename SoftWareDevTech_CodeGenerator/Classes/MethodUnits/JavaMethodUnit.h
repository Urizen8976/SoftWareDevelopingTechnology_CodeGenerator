#ifndef JAVAMETHODUNIT_H
#define JAVAMETHODUNIT_H


#include <Classes/MethodUnits/IMethodUnit.h>


class JavaMethodUnit : public IMethodUnit {
public:
    JavaMethodUnit(const std::string& n, const std::string& t, Flags f);
    void add(const UnitPtr& unit, Flags flags = 0) override;
    std::string compile(unsigned int level = 0) const override;
};


#endif // JAVAMETHODUNIT_H
