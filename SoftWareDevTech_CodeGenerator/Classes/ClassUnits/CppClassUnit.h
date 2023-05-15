#ifndef CPPCLASSUNIT_H
#define CPPCLASSUNIT_H


#include <Classes/ClassUnits/IClassUnit.h>


class CppClassUnit : public IClassUnit
{
public:
    explicit CppClassUnit(const std::string& name);
    void add(const std::shared_ptr<IUnit>& unit, Flags flags) override; //  Функция добавления Unit в список полей
    std::string compile(unsigned int level = 0) const override;
};


#endif // CPPCLASSUNIT_H
