#ifndef CODEGENERATOR_H
#define CODEGENERATOR_H


#include <QCoreApplication>
#include <iostream>
#include <Classes/ClassUnits/IClassUnit.h>
#include <Classes/ClassFactories/IFactory.h>


const std::vector<std::string> IClassUnit::ACCESS_MODIFIERS =
    {"public", "protected", "private", "private protected", "file", "internal", "protected iternal"};

IFactory * generateFactory(std::string language);

std::string generateProgram(std::string language);


#endif // CODEGENERATOR_H
