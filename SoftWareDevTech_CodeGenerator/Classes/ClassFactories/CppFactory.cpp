#include "CppFactory.h"

std::shared_ptr<IUnit> CppFactory::createClass(const std::string &name) const {
    return std::make_shared<CppClassUnit>(name);
}

std::shared_ptr<IUnit> CppFactory::createMethod(const std::string &name, const std::string &returnType, IUnit::Flags flags) const {
    return std::make_shared<CppMethodUnit>(name, returnType, flags);
}

std::shared_ptr<IUnit> CppFactory::createPrintOperator(const std::string &text) const {
    return std::make_shared<CppPrintOperatorUnit>(text);
}
