#ifndef UNIT_H
#define UNIT_H
#include <QCoreApplication>
#include <iostream>
#include <memory>


class Unit {
public:
    // Модификаторы
    using Flags = unsigned int;
public:
    virtual ~Unit() = default;
    virtual void add(Flags = 0);
    virtual std::string compile(unsigned int level = 0) const = 0;
};

#endif // UNIT_H
