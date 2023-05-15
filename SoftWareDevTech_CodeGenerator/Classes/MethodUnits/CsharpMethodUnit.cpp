#include "CsharpMethodUnit.h"


CsharpMethodUnit::CsharpMethodUnit(const std::string &methodName, const std::string &returnType, IUnit::Flags flags)
    // : m_methodName(methodName), m_returnType(returnType), m_flags(flags)  //  Если бы конструктор был в IMethodUnit
{
    m_methodName = methodName;
    m_returnType = returnType;
    m_flags = flags;
}

void CsharpMethodUnit::add(const std::shared_ptr<IUnit> &unit, IUnit::Flags flags) {
    m_body.push_back(unit);
}

std::string CsharpMethodUnit::compile(unsigned int level) const { //  Фукнкция компиляции
    std::string result = generateShift(level);
    if(m_flags & STATIC) { //  При наличии в переданных флагах STATIC компилируем static (для конкретной работы с объектом)
        result += "static ";
    } else if(m_flags & VIRTUAL) {
        result += "final ";
    }
    result += m_returnType + " ";
    result += m_methodName + "()";
    if(m_flags & CONST) {
        result += " const";
    }
    result += " {\n";
    for(const auto& b : m_body) {
        result += b->compile(level + 2); //  Компиляция функций определяемых методом
    }
    result += generateShift(level + 1) + "}\n";
    return result;
}
