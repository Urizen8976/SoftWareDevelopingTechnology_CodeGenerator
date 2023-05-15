#ifndef CSHARPFACTORY_H
#define CSHARPFACTORY_H


#include <Classes/IUnit.h>
#include <Classes/ClassFactories/IFactory.h>
#include <Classes/ClassUnits/CSharpClassUnit.h>
#include <Classes/MethodUnits/CSharpMethodUnit.h>
#include <Classes/PrintOperatorUnits/CsharpPrintOperatorUnit.h>


class CsharpFactory : public IFactory
{
public:
    CsharpFactory() = default;
    ~CsharpFactory() = default;
    std::shared_ptr<IUnit> createClass(const std::string& name) const override;
    std::shared_ptr<IUnit> createMethod(const std::string& name, const std::string& returnType, IUnit::Flags flags) const override;
    std::shared_ptr<IUnit> createPrintOperator(const std::string& text) const override;
};


#endif // CSHARPFACTORY_H
