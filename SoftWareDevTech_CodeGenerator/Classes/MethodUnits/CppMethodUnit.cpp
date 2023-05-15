#include "CppMethodUnit.h"


CppMethodUnit::CppMethodUnit(const std::string &methodName, const std::string &returnType, IUnit::Flags flags)
    // : m_methodName(methodName), m_returnType(returnType), m_flags(flags)  //  Если бы конструктор был в IMethodUnit
{
    m_methodName = methodName;
    m_returnType = returnType;
    m_flags = flags;
}

void CppMethodUnit::add(const std::shared_ptr<IUnit> &unit, IUnit::Flags flags) {
    m_body.push_back(unit);
}

std::string CppMethodUnit::compile(unsigned int level) const { //  Фукнкция компиляции
    std::string result = generateShift( level ); //  Генерация отступа для корректного определения методов в поле модификатора
    if( m_flags & STATIC ) { //  При наличии в переданных флагах STATIC компилируем static (для конкретной работы с объектом)
        result += "static ";
    } else if( m_flags & VIRTUAL ) { //  При отсутствии static, добавляем virtual (для работы через ссылку или указатель)
        result += "virtual ";
    }
    result += m_returnType + " ";
    result += m_methodName + "()";
    if( m_flags & CONST ) { //  При наличии модификатора CONST добавляем const если имеется
        result += " const";
    }
    result += " {\n"; //  Открытие скобки определения метода
    for( const auto& b : m_body ) {
        result += b->compile( level + 1 ); //  Компиляция функций определяемых методом
    }
    result += generateShift( level ) + "}\n"; // Закрытие скобки определения метода
    return result;
}
