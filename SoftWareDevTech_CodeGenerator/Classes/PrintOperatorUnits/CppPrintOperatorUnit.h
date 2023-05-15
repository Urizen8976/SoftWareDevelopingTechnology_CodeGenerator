#ifndef CPPPRINTOPERATORUNIT_H
#define CPPPRINTOPERATORUNIT_H


#include <Classes/PrintOperatorUnits/IPrintOperatorUnit.h>


class CppPrintOperatorUnit : public IPrintOperatorUnit {
public:
    explicit CppPrintOperatorUnit(const std::string& text); //  Конструктор, принимающий текст
    std::string compile(unsigned int level = 0) const override;
};


#endif // CPPPRINTOPERATORUNIT_H
