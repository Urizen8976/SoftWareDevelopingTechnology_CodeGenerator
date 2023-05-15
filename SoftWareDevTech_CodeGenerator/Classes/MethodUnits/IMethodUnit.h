#ifndef IMETHODUNIT_H
#define IMETHODUNIT_H


#include <Classes/IUnit.h>


class IMethodUnit : public IUnit {
public:
    enum Modifier { //  Перечисление модификаторов доступа для методов поставленных в задаче языков
        STATIC = 1,            //  МД для: C++, C# и JAVA
        CONST = 1 << 1,        //  МД для: C++
        VIRTUAL = 1 << 2,      //  МД для: C++ и C#
        FINAL = 1 << 3,        //  МД для: JAVA
        ABSTRACT = 1 << 4,     //  МД для: JAVA
        SYNCHRONIZED = 1 << 5, //  МД для: JAVA
        VOLATILE = 1 << 6      //  МД для: JAVA
    };
public:
    virtual void add(const std::shared_ptr<IUnit>&, Flags = 0) = 0;
    virtual std::string compile(unsigned int level = 0) const = 0;
protected:
    std::string m_methodName; //  Название метода
    std::string m_returnType; //  Тип возвращаемого методом значения
    Flags m_flags;            //  Модификаторы метода
    std::vector<std::shared_ptr<IUnit>> m_body; //  Тело метода - вектор указателей на Unit
};


#endif // IMETHODUNIT_H
