#ifndef IUNIT_H
#define IUNIT_H


#include <QCoreApplication>
#include <iostream>
#include <memory> //  Для пользования умным указателем


class IUnit {
public:
    using Flags = unsigned int; //  Обозначение слова Flags как unsigned int

public:
    virtual ~IUnit() = default;
    virtual void add(const std::shared_ptr<IUnit>&, Flags = 0);  // Добавление вложенных элементов через умные указатели
    virtual std::string compile(unsigned int level = 0) const = 0;  // Генерация кода на языке

protected:
    virtual std::string generateShift(unsigned int level) const;  // Генерация отступов
};

#endif // IUNIT_H
