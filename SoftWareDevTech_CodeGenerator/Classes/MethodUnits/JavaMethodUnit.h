#ifndef JAVAMETHODUNIT_H
#define JAVAMETHODUNIT_H


#include <Classes/MethodUnits/IMethodUnit.h>


class JavaMethodUnit : public IMethodUnit {
public:
    JavaMethodUnit(const std::string& name, const std::string& type, Flags flags);
    void add(const std::shared_ptr<IUnit>& unit, Flags flags = 0) override;
    std::string compile(unsigned int level = 0) const override;
};


#endif // JAVAMETHODUNIT_H
