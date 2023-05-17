#include <Classes/CodeGenerator.h>
#include <Classes/CodeGenerator.cpp>


int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    // std::cout << "Programm from task on C++ :" << std::endl;
    // std::cout << generateProgram(Cpp) << std::endl; //  Корректная генерация кода, в соответствии с С++

    // std::cout << "Programm from task on C# :" << std::endl;
    // std::cout << generateProgram(Csharp) << std::endl; //  Корректная генерация кода, в соответствии с С#

     std::cout << "Programm from task on Java :" << std::endl;
     std::cout << generateProgram(Java) << std::endl << std::endl; //  Корректная генерация кода, в соответствии с Java

    return app.exec();
}
