#include "CsharpPrintOperator.h"


CsharpPrintOperatorUnit::CsharpPrintOperatorUnit(const std::string &t) {
    text = t;
}

std::string CsharpPrintOperatorUnit::compile(unsigned int level) const {
    return generateShift( level ) + "Console.WriteLine( \"" + text + "\" );\n";
}
