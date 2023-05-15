#include "CsharpPrintOperatorUnit.h"


CsharpPrintOperatorUnit::CsharpPrintOperatorUnit(const std::string &t)
    // : m_text(t)  //  Если бы конструктор был в IPrintOperatorUnit
{
    m_text = t;
}

std::string CsharpPrintOperatorUnit::compile(unsigned int level) const {
    return generateShift( level ) + "Console.WriteLine( \"" + m_text + "\" );\n"; //  Использование Console.WriteLine (в С#)
}
