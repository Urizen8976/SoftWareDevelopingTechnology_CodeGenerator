#ifndef CSHARPPRINTOPERATOR_H
#define CSHARPPRINTOPERATOR_H


#include <Classes/PrintOperatorUnits/IPrintOperatorUnit.h>


class CsharpPrintOperatorUnit : public IPrintOperatorUnit {
public:
    explicit CsharpPrintOperatorUnit(const std::string& text);
    std::string compile(unsigned int level = 0) const override;
};


#endif // CSHARPPRINTOPERATOR_H
