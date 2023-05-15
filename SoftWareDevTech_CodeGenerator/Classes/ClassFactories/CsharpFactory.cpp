#include "CsharpFactory.h"

std::shared_ptr<IUnit> CsharpFactory::createClass(const std::string &name) const {
    return std::make_shared<CsharpClassUnit>(name);
}

std::shared_ptr<IUnit> CsharpFactory::createMethod(const std::string &name, const std::string &returnType, IUnit::Flags flags) const {
    return std::make_shared<CsharpMethodUnit>(name, returnType, flags);
}

std::shared_ptr<IUnit> CsharpFactory::createPrintOperator(const std::string &text) const {
    return std::make_shared<CsharpPrintOperatorUnit>(text);
}
