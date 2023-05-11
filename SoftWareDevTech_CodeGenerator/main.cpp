#include <QCoreApplication>
#include <iostream>
#include <Classes/IUnit.h>
#include <Classes/ClassFactories/IFactory.h>


/*Factory * generateFactory(std::string language) {

}

std::string generateProgram(std::string language) {

}*/


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << "C++ :" << std::endl;
    // std::cout << generateProgram("cpp") << std::endl;
    return a.exec();
}
