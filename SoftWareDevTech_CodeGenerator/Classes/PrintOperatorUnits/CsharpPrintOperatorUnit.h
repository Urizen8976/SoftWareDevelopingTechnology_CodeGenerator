#ifndef CSHARPPRINTOPERATORUNIT_H
#define CSHARPPRINTOPERATORUNIT_H


#include <Classes/PrintOperatorUnits/IPrintOperatorUnit.h>


class CsharpPrintOperatorUnit : public IPrintOperatorUnit {
public:
    explicit CsharpPrintOperatorUnit(const std::string& text); //  Конструктор, принимающий текст
    std::string compile(unsigned int level = 0) const override;
};


#endif // CSHARPPRINTOPERATORUNIT_H
