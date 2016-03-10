

#include <iostream>


//Export a simple funtion named "dllHelloFunc"
extern "C"
{
    __declspec(dllexport) void dllHelloFunc();
}

__declspec(dllexport) void dllHelloFunc() {
    std::cout << "DLL Hello !" << std::endl;
}