#ifndef IFACTORY_H
#define IFACTORY_H


#include <Classes/unit.h>
#include <Classes/ClassFactories/IFactory.h>


class IFactory  // Абстрактная фабрика (интерфейс для других фабрик)
{
public:
    virtual UnitPtr createClass(const std::string& name) const;
    virtual UnitPtr createMethod(const std::string& name, const std::string& returnType, Unit::Flags flags) const;
    virtual UnitPtr createPrintOperator(const std::string& text) const;
};


#endif // IFACTORY_H
