#ifndef IPRINTOPERATORUNIT_H
#define IPRINTOPERATORUNIT_H


#include<Classes/IUnit.h>


class IPrintOperatorUnit : public IUnit {
public:
    virtual std::string compile(unsigned int level = 0) const = 0;

protected:
    std::string m_text; //  Текст, выводимый на экран
};


#endif // IPRINTOPERATORUNIT_H
