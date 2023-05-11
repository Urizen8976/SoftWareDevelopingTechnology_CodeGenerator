QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp \
    Classes/ClassFactories/CppFactory.cpp \
    Classes/ClassFactories/CsharpFactory.cpp \
    Classes/ClassFactories/IFactory.cpp \
    Classes/ClassFactories/JavaFactory.cpp \
    Classes/ClassUnits/CppClassUnit.cpp \
    Classes/ClassUnits/CsharpClassUnit.cpp \
    Classes/ClassUnits/IClassUnit.cpp \
    Classes/ClassUnits/JavaClassUnit.cpp \
    Classes/IUnit.cpp \
    Classes/MethodUnits/CppMethodUnit.cpp \
    Classes/MethodUnits/CsharpMethodUnit.cpp \
    Classes/MethodUnits/IMethodUnit.cpp \
    Classes/MethodUnits/JavaMethodUnit.cpp \
    Classes/PrintOperatorUnits/CppPrintOperatorUnit.cpp \
    Classes/PrintOperatorUnits/IPrintOperatorUnit.cpp

HEADERS += \
    Classes/ClassFactories/CppFactory.h \
    Classes/ClassFactories/CsharpFactory.h \
    Classes/ClassFactories/IFactory.h \
    Classes/ClassFactories/JavaFactory.h \
    Classes/ClassUnits/CppClassUnit.h \
    Classes/ClassUnits/CsharpClassUnit.h \
    Classes/ClassUnits/IClassUnit.h \
    Classes/ClassUnits/JavaClassUnit.h \
    Classes/IUnit.h \
    Classes/MethodUnits/CppMethodUnit.h \
    Classes/MethodUnits/CsharpMethodUnit.h \
    Classes/MethodUnits/IMethodUnit.h \
    Classes/MethodUnits/JavaMethodUnit.h \
    Classes/PrintOperatorUnits/CppPrintOperatorUnit.h \
    Classes/PrintOperatorUnits/IPrintOperatorUnit.h

