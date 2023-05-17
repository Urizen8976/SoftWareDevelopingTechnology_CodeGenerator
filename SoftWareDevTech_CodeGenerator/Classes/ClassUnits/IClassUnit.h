#ifndef ICLASSUNIT_H
#define ICLASSUNIT_H


#include <Classes/IUnit.h>


class IClassUnit : public IUnit //  Класс для реализации создания конкретных классов для разных языков
{
public:
    enum AccessModifier { //  Перечисление модификаторов доступа для поставленных в задаче языков
        PUBLIC,             //  МД для: C++, C# и JAVA
        PROTECTED,          //  МД для: C++, C# и JAVA
        PRIVATE,            //  МД для: C++, C# и JAVA
        PRIVATE_PROTECTED,  //  МД для: C#
        FILE,               //  МД для: C#
        INTERNAL,           //  МД для: C#
        PROTECTED_INTERNAL, //  МД для: C#
    };
    static const std::vector<std::string> ACCESS_MODIFIERS; //  Модификаторы доступа для языка (определены после класса)

protected:
    std::string m_className; //  Название для класса
    using Fields = std::vector<std::shared_ptr<IUnit>>; //  Тип данных Fields (вектор указателей на объекты типа IUnit)
    std::vector< Fields > m_fields; //  Вектор векторов указателей на объекты типа IUnit

public:
    virtual void add(const std::shared_ptr<IUnit>&, Flags) = 0;
    virtual std::string compile(unsigned int level = 0) const = 0;
};


#endif // ICLASSUNIT_H
