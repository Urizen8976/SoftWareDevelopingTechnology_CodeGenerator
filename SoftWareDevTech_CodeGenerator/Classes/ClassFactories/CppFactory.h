#ifndef CPPFACTORY_H
#define CPPFACTORY_H


#include<Classes/IUnit.h>
#include<Classes/ClassFactories/IFactory.h>
// #include<Classes/ClassUnits/CppClassUnit.h>
// #include<Classes/MethodUnits/CppMethodUnit.h>
// #include<Classes/PrintOperatorUnits/CppPrintOperatorUnit.h>


class CppFactory : public IFactory
{
public:
    CppFactory() = default;
    ~CppFactory() = default;
    UnitPtr createClass(const std::string& name) const override;
    UnitPtr createMethod(const std::string& name, const std::string& returnType, Unit::Flags flags) const override;
    UnitPtr createPrintOperator(const std::string& text) const override;
};


#endif // CPPFACTORY_H
