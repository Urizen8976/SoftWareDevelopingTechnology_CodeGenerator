#include "IUnit.h"


void IUnit::add(const std::shared_ptr<IUnit> &, IUnit::Flags) { //  Добавление языковой конструкции
    throw std::runtime_error("Object is not initialized");
}

std::string IUnit::generateShift(unsigned int level) const  // Возвращает строку из нужного числа пробелов (результат зависит от уровня вложенности)
{
    static const auto DEFAULT_SHIFT = "    ";
    std::string result;
    for(unsigned int i = 0; i < level; ++i) {
        result += DEFAULT_SHIFT; //  Добавляем отступы в зависимости от level
    }
    return result;
}
