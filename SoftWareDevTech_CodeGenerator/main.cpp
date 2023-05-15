#include <Classes/CodeGenerator.h>
#include <Classes/CodeGenerator.cpp>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << "Programm from task on C++ :" << std::endl;
    std::cout << generateProgram("cpp") << std::endl;

    // std::cout << "Programm from task on C# :" << std::endl;
    // std::cout << generateProgram("cs") << std::endl;

    // std::cout << "Programm from task on Java :" << std::endl;
    // std::cout << generateProgram("java") << std::endl << std::endl;
    return a.exec();
}
