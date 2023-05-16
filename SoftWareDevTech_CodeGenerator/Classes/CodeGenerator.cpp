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


IFactory * generateFactory(std::string language) { //  Used by generateProgram function
    if (language == "Cpp") { //  Определение фабрики какого языка нам нужно использовать
        return new CppFactory();
    } else if (language == "Csharp") {
        return new CsharpFactory();
    } else if (language == "Java") {
        return new JavaFactory();
    } else {
        return new IFactory();
    }
}

std::string generateProgram(std::string language) { //  Функция генерации кода по шаблону из задачи
    try { //  В блоке try помещается код, который потенциально может сгенерировать исключение
        IFactory * factory = generateFactory(language); //  Создание фабрики конкретного языка
        std::shared_ptr<IUnit> myClass = factory->createClass("MyClass"); //  Создание класса конкретного языка

        std::shared_ptr<IUnit> method = factory->createMethod("testFunc1", "void", 0); //  Создание метода класса конкретного языка
        myClass->add(method, IClassUnit::PUBLIC); //  И добавление этого метода класса с модификатором PUBLIC конкретного языка

        method = factory->createMethod("testFunc2", "void", IMethodUnit::STATIC);
        myClass->add(method, IClassUnit::PRIVATE);

        method = factory->createMethod("testFunc3", "void", IMethodUnit::VIRTUAL | IMethodUnit::CONST);
        myClass->add(method, IClassUnit::PUBLIC);

        method = factory->createMethod("testFunc4", "void", IMethodUnit::STATIC);
        auto printOperator = factory->createPrintOperator(R"(Hello, world!\n)"); //  Создание оператора вывода класса конкретного языка
        method->add(printOperator, 0); //  И добавление этого оператора вывода класса конкретного языка
        myClass->add(method, IClassUnit::PROTECTED);

        delete factory; //  Удаление фабрики из-за ненужности после создания объекта        return myClass->compile(); //  Компиляция
    }
    catch (const std::runtime_error& error) { //  В случае неподдерживаемого языка, будет вызов ошибки с информацией об исключении.
        std::cerr << error.what();
    }
}
