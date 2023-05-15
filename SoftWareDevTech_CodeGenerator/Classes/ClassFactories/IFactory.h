#ifndef IFACTORY_H
#define IFACTORY_H


#include <Classes/IUnit.h>
#include <Classes/ClassFactories/IFactory.h>


class IFactory //  Абстрактная фабрика (интерфейс для других фабрик)
{
public: //  При вызове функций возвращается умный указатель на объект "созданный" фабрикой
    virtual std::shared_ptr<IUnit> createClass(const std::string& name) const;
    virtual std::shared_ptr<IUnit> createMethod(const std::string& name, const std::string& returnType, IUnit::Flags flags) const;
    virtual std::shared_ptr<IUnit> createPrintOperator(const std::string& text) const;
};


#endif // IFACTORY_H
