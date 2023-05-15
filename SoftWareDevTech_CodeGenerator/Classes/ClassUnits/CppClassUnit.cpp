#include "CppClassUnit.h"


CppClassUnit::CppClassUnit(const std::string &name)
    // :  m_className(name), m_fields(ACCESS_MODIFIERS.size()){}   //  Если бы конструктор был в IClassUnit
{
    m_className = name;
    m_fields.resize(ACCESS_MODIFIERS.size());
}

void CppClassUnit::add(const std::shared_ptr<IUnit> &unit, IUnit::Flags flags) { //  Функция добавления Unit в список полей

    int accessModifier = PRIVATE; //  По умолчанию PRIVATE
    if(flags < ACCESS_MODIFIERS.size()) {
        accessModifier = flags;
    }
    m_fields[accessModifier].push_back(unit); //  Умный указатель на Unit передается в вектор полей класса с данным модификатором
}

std::string CppClassUnit::compile(unsigned int level) const {
    std::string result = generateShift(level) + "class " + m_className + " {\n"; //  Создание строки типа class ClassName и отступа
    for(size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i) { //  Движение по доступным модификаторам доступа
        if (m_fields[i].empty()) { //  При отсутствии указателей на Unit-ы для данного модификатора переходим на след. модификатор
            continue;
        }
        result += ACCESS_MODIFIERS[ i ] + ":\n"; //  Вывод модификатора доступа как поле для методов (в С++)
        for(const auto& field : m_fields[ i ]) {
            result += field->compile(level + 1); //  Компиляция всех имеющихся методов для вышеуказанного модификатора доступа
        }
        result += "\n";
    }
    result += generateShift(level) + "};\n"; //  Отступ и закрытие класса
    return result;
}
