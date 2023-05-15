#ifndef JAVAPRINTOPERATORUNIT_H
#define JAVAPRINTOPERATORUNIT_H


#include <Classes/PrintOperatorUnits/IPrintOperatorUnit.h>


class JavaPrintOperatorUnit : public IPrintOperatorUnit {
public:
    explicit JavaPrintOperatorUnit(const std::string& t); //  Конструктор, принимающий текст
    std::string compile(unsigned int level = 0) const override;
};


#endif // JAVAPRINTOPERATORUNIT_H
