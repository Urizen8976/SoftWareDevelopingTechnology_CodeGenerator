#ifndef CSHARPCLASSUNIT_H
#define CSHARPCLASSUNIT_H


#include <Classes/ClassUnits/IClassUnit.h>


class CsharpClassUnit : public IClassUnit
{
public:
    explicit CsharpClassUnit(const std::string& name);
    void add(const std::shared_ptr<IUnit>& unit, Flags flags) override; //  Функция добавления Unit в список полей
    std::string compile(unsigned int level = 0) const override;
};


#endif // CSHARPCLASSUNIT_H
