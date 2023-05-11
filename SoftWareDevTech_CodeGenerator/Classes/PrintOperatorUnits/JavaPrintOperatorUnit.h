#ifndef JAVAPRINTOPERATORUNIT_H
#define JAVAPRINTOPERATORUNIT_H


#include <Classes/PrintOperatorUnits/IPrintOperatorUnit.h>


class JavaPrintOperatorUnit : public IPrintOperatorUnit {
public:
    explicit JavaPrintOperatorUnit(const std::string& t) {
        text = t;
    }
    std::string compile(unsigned int level = 0) const override {
        return generateShift(level) + "System.out.print( \"" + text + "\" );\n";
    }
};


#endif // JAVAPRINTOPERATORUNIT_H
