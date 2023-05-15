#include "JavaPrintOperatorUnit.h"


JavaPrintOperatorUnit::JavaPrintOperatorUnit(const std::string& t)
    // : m_text(t)  //  Если бы конструктор был в IPrintOperatorUnit
{
    m_text = t;
}

std::string JavaPrintOperatorUnit::compile(unsigned int level) const {
    return generateShift(level) + "System.out.print( \"" + m_text + "\" );\n"; //  Использование System.out.println (в Java)
}
