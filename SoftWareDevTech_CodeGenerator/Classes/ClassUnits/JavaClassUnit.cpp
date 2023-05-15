#include "JavaClassUnit.h"


JavaClassUnit::JavaClassUnit(const std::string &n)
    // :  m_className(name), m_fields(ACCESS_MODIFIERS.size()){}   //  Если бы конструктор был в IClassUnit
{
    m_className = n;
    m_fields.resize(ACCESS_MODIFIERS.size());
}

void JavaClassUnit::add(const std::shared_ptr<IUnit> &unit, IUnit::Flags flags) { //  Функция добавления Unit в список полей

    int accessModifier = PRIVATE; //  По умолчанию PRIVATE
    if(flags < ACCESS_MODIFIERS.size()) {
        accessModifier = flags;
    }
    m_fields[accessModifier].push_back(unit); //  Умный указатель на Unit передается в вектор полей класса с данным модификатором
}

std::string JavaClassUnit::compile(unsigned int level) const {
    std::string result = generateShift(level) + "class " + m_className + " {\n"; //  Создание строки типа class ClassName и отступа
    for(size_t i = 0; i < ACCESS_MODIFIERS.size(); i++) { //  Движение по доступным модификаторам доступа
        if (m_fields[i].empty()) { //  При отсутствии указателей на Unit-ы для данного модификатора переходим на след. модификатор
            continue;
        }
        for(const auto& field : m_fields[i]) {
            result += generateShift(level+1);
            result += ACCESS_MODIFIERS[i]; //  Вывод модификатора доступа непосредственно перед методом (в Java, как и в С#)
            result += " ";
            result += field->compile(level); //  Компиляция всех методов с вышеуказанным модификатором (в Java, как и в С#)
            result += "\n";
        }
    }
    result += generateShift(level) + "};\n"; //  Закрытие класса и возвращение кода
    return result;
}
