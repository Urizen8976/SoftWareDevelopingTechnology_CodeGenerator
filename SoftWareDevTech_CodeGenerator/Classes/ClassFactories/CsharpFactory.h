#ifndef CSHARPFACTORY_H
#define CSHARPFACTORY_H


#include<Classes/Unit.h>
#include<Classes/ClassFactories/IFactory.h>
// #include<Classes/ClassUnits/CSharpClassUnit.h>
// #include<Classes/MethodUnits/CSharpMethodUnit.h>
// #include<Classes/PrintOperatorUnits/CSharpPrintOperatorUnit.h>


class CSharpFactory : public IFactory
{
public:
    CSharpFactory() = default;
    ~CSharpFactory() = default;
    UnitPtr createClass(const std::string& name) const override;
    UnitPtr createMethod(const std::string& name, const std::string& returnType, Unit::Flags flags) const override;
    UnitPtr createPrintOperator(const std::string& text) const override;
};


#endif // CSHARPFACTORY_H
