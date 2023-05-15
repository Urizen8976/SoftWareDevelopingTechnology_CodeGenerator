#ifndef JAVACLASSUNIT_H
#define JAVACLASSUNIT_H


#include <Classes/ClassUnits/IClassUnit.h>


class JavaClassUnit : public IClassUnit
{
public:
    explicit JavaClassUnit(const std::string& name);
    void add(const std::shared_ptr<IUnit>& unit, Flags flags) override; //  Функция добавления Unit в список полей
    std::string compile(unsigned int level = 0) const override;
};


#endif // JAVACLASSUNIT_H
