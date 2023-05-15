#include "JavaMethodUnit.h"


JavaMethodUnit::JavaMethodUnit(const std::string& methodName, const std::string& returnType, IUnit::Flags flags)
    // : m_methodName(methodName), m_returnType(returnType), m_flags(flags)  //  Если бы конструктор был в IMethodUnit
{
    m_methodName = methodName;
    m_returnType = returnType;
    m_flags = flags;
}

void JavaMethodUnit::add(const std::shared_ptr<IUnit>& unit, IUnit::Flags flags) {
    m_body.push_back(unit);
}

std::string JavaMethodUnit::compile(unsigned int level) const {
    std::string result = generateShift(level);
    if (m_flags & ABSTRACT) { //  При наличии в переданных флагах ABSTRACT компилируем abstract (для создания абстрактных классов и методов в Java)
        result += "abstract "; //  т.к. abstract не может быть static или final
    } else if (m_flags & VIRTUAL) {
        result += "virtual ";
    } else if (m_flags & STATIC) { //  При наличии в переданных флагах STATIC компилируем static (для создания методов и переменных класса )
        result += "static ";
    } else if (m_flags & FINAL) { //  При наличии FINAL компилируем final (для завершения реализации классов, методов и переменных в Java)
        result += "final ";
    } else if (m_flags & SYNCHRONIZED) { //  При наличии SYNCHRONIZED компилируем synchronized (для потоков в Java)
        result += "synchronized ";
    } else if (m_flags & VOLATILE) { //  При наличии SYNCHRONIZED компилируем synchronized (для потоков в Java)
        result += "volatile ";
    }
    result += m_returnType + " ";
    result += m_methodName + "()";
    if( m_flags & CONST ) {
        result += " const";
    }
    result += " {\n"; //  Открытие скобки определения метода
    for(const auto& b : m_body) {
        result += b->compile(level + 2); //  Компиляция функций определяемых методом
    }
    result += generateShift(level + 1) + "}\n"; //  Закрытие скобки определения метода
    return result;
}
