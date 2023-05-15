#ifndef JAVAFACTORY_H
#define JAVAFACTORY_H


#include<Classes/IUnit.h>
#include<Classes/ClassFactories/IFactory.h>
#include<Classes/ClassUnits/JavaClassUnit.h>
#include<Classes/MethodUnits/JavaMethodUnit.h>
#include<Classes/PrintOperatorUnits/JavaPrintOperatorUnit.h>


class JavaFactory : public IFactory
{
public:
    JavaFactory() = default;
    ~JavaFactory() = default;
    std::shared_ptr<IUnit> createClass(const std::string& name) const override;
    std::shared_ptr<IUnit> createMethod(const std::string& name, const std::string& returnType, IUnit::Flags flags) const override;
    std::shared_ptr<IUnit> createPrintOperator(const std::string& text) const override;
};


#endif // JAVAFACTORY_H
