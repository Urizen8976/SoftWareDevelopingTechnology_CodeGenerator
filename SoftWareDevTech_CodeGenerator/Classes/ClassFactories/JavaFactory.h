#ifndef JAVAFACTORY_H
#define JAVAFACTORY_H


#include<Classes/Unit.h>
#include<Classes/ClassFactories/IFactory.h>
// #include<Classes/ClassUnits/JavaClassUnit.h>
// #include<Classes/MethodUnits/JavaMethodUnit.h>
// #include<Classes/PrintOperatorUnits/JavaPrintOperatorUnit.h>


class JavaFactory : public IFactory
{
public:
    JavaFactory() = default;
    ~JavaFactory() = default;
    UnitPtr createClass(const std::string& name) const override;
    UnitPtr createMethod(const std::string& name, const std::string& returnType, Unit::Flags flags) const override;
    UnitPtr createPrintOperator(const std::string& text) const override;
};


#endif // JAVAFACTORY_H
