#ifndef CSHARPMETHODUNIT_H
#define CSHARPMETHODUNIT_H


#include <Classes/MethodUnits/IMethodUnit.h>


class CsharpMethodUnit : public IMethodUnit {
public:
    CsharpMethodUnit(const std::string& name, const std::string& returnType, Flags flags);
    void add(const std::shared_ptr<IUnit>& unit, Flags flags = 0) override;
    std::string compile(unsigned int level = 0) const override;
};


#endif // CSHARPMETHODUNIT_H
