#ifndef CODEGENERATOR_H
#define CODEGENERATOR_H


#include <QCoreApplication>
#include <iostream>
#include <Classes/ClassUnits/IClassUnit.h>
#include <Classes/ClassFactories/IFactory.h>


enum Language { //  Перечисление поставленных в задаче языков
    Cpp,
    Csharp,
    Java
};

const std::vector<std::string> IClassUnit::ACCESS_MODIFIERS = // Заполнение константы необходимыми модификаторами доступа
    {"public", "protected", "private", "private protected", "file", "internal", "protected iternal"};

IFactory * generateFactory(Language language);

std::string generateProgram(Language language);


#endif // CODEGENERATOR_H
