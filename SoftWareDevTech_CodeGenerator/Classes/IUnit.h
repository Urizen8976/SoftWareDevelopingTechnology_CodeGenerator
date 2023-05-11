#ifndef IUNIT_H
#define IUNIT_H


#include <QCoreApplication>
#include <iostream>
#include <memory>


class IUnit {
public:
    // Модификаторы
    using Flags = unsigned int;

public:
    virtual ~Unit() = default;
    virtual void add(const UnitPtr&, Flags = 0);  // Добавление вложенных элементов через умные указатели
    virtual std::string compile(unsigned int level = 0) const = 0;  // Генерация кода на языке

protected:
    virtual std::string generateShift(unsigned int level) const;  // Генерация отступов
};

#endif // IUNIT_H
