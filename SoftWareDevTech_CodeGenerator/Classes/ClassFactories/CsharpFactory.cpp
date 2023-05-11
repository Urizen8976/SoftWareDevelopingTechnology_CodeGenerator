#include "CsharpFactory.h"

UnitPtr CSharpFactory::createClass(const std::string &name) const {
    return std::make_shared<CsClassUnit>(name);
}

UnitPtr CSharpFactory::createMethod(const std::string &name, const std::string &returnType, Unit::Flags flags) const {
    return std::make_shared<CsMethodUnit>(name, returnType, flags);
}

UnitPtr CSharpFactory::createPrintOperator(const std::string &text) const {
    return std::make_shared<CsPrintOperatorUnit>(text);
}
