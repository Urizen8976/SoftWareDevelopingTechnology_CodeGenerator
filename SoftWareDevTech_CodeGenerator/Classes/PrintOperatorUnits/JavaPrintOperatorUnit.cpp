#include "JavaPrintOperatorUnit.h"


JavaPrintOperatorUnit::JavaPrintOperatorUnit(const std::string& t) {
    text = t;
}
std::string JavaPrintOperatorUnit::compile(unsigned int level = 0) const {
    return generateShift(level) + "System.out.print( \"" + text + "\" );\n";
}
