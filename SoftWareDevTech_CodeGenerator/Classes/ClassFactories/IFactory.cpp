#include "IFactory.h"


std::shared_ptr<IUnit> IFactory::createClass(const std::string &name) const {
    throw std::runtime_error("Language not supported");
}

std::shared_ptr<IUnit> IFactory::createMethod(const std::string &name, const std::string &returnType, IUnit::Flags flags) const {
    throw std::runtime_error("Language not supported");
}

std::shared_ptr<IUnit> IFactory::createPrintOperator(const std::string &text) const {
    throw std::runtime_error("Language not supported");
}
