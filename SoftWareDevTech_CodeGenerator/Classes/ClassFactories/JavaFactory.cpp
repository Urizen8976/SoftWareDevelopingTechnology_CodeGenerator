#include "JavaFactory.h"

std::shared_ptr<IUnit> JavaFactory::createClass(const std::string &name) const {
    return std::make_shared<JavaClassUnit>(name);
}

std::shared_ptr<IUnit> JavaFactory::createMethod(const std::string &name, const std::string &returnType, IUnit::Flags flags) const {
    return std::make_shared<JavaMethodUnit>(name, returnType, flags);
}

std::shared_ptr<IUnit> JavaFactory::createPrintOperator(const std::string &text) const {
    return std::make_shared<JavaPrintOperatorUnit>(text);
}
