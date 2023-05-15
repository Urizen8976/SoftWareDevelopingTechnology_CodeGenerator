#include "CodeGenerator.h"


#include <QCoreApplication>
#include <iostream>
#include <Classes/IUnit.h>
#include <Classes/ClassFactories/IFactory.h>
#include <Classes/ClassFactories/CppFactory.h>
#include <Classes/ClassFactories/CsharpFactory.h>
#include <Classes/ClassFactories/JavaFactory.h>
#include <Classes/ClassUnits/IClassUnit.h>
#include <Classes/MethodUnits/IMethodUnit.h>


IFactory * generateFactory(std::string language) {
    // По строке смотрим фабрику какого языка нам нужно использовать
    if (language == "cpp") {
        return new CppFactory();
    } else if (language == "cs") {
        return new CsharpFactory();
    } else if (language == "java") {
        return new JavaFactory();
    } else {
        return new IFactory();
    }
}

std::string generateProgram(std::string language) {
    try {
        IFactory * factory = generateFactory(language);
        std::shared_ptr<IUnit> myClass = factory->createClass("MyClass");

        std::shared_ptr<IUnit> method = factory->createMethod("testFunc1", "void", 0);
        myClass->add(method, IClassUnit::PUBLIC);

        method = factory->createMethod("testFunc2", "void", IMethodUnit::STATIC);
        myClass->add(method, IClassUnit::PRIVATE);

        method = factory->createMethod("testFunc3", "void", IMethodUnit::VIRTUAL | IMethodUnit::CONST);
        myClass->add(method, IClassUnit::PUBLIC);

        method = factory->createMethod("testFunc4", "void", IMethodUnit::STATIC);
        auto printOperator = factory->createPrintOperator(R"(Hello, world!\n)");
        method->add(printOperator, 0);
        myClass->add(method, IClassUnit::PROTECTED);

        delete factory;
        return myClass->compile();
    }
    // В случае неподдерживаемого языка, будет вызов ошибки
    catch (const std::runtime_error& e) {
        std::cerr << e.what();
    }
}
