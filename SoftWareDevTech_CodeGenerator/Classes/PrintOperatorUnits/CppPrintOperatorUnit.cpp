#include "CppPrintOperatorUnit.h"


CppPrintOperatorUnit::CppPrintOperatorUnit(const std::string &t)
    // : m_text(t)  //  Если бы конструктор был в IPrintOperatorUnit
{
    m_text = t;
}

std::string CppPrintOperatorUnit::compile(unsigned int level) const {
    return generateShift( level ) + "printf( \"" + m_text + "\" );\n"; //  Использование printf (в С++)
}
