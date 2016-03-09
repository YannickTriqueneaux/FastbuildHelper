
#include "../MyFirstLib/FirstHello.h"
#include "../MySecondLib/SecondHello.h"
#include "../CommonLib/DLLHelper.h"

int main(int argc, char ** args) {
    
    //This executable links with MyFistLib
    //So if we include only the Header FistHello from this lib
    //We should be able to use the function sayHello implemented inside the library
    FirstHello fist;
    fist.sayHello();


    //same thing for MySecondLib
    SecondHello second;
    second.sayHello();


    //The DLL "ASimpleDLL" exports the function "dllHelloFunc"
    //By using the tool  DLLHelper inside CommonLib library
    //we should be able to laod the DLL and call the function inside it
    DLLHelper dll;
    if (dll.load("ASimpleDLL.dll")) {
        dll.executeFunction("dllHelloFunc");
        dll.unload();
    }

    //Note that the DLLHelper is specially implemented for Windows and Linux
    //The care to the files:
    // - DLLHelperWindows.cc
    // - DLLHelperLinux.cc 
    // these ones have a different file extension than others files ->   ".cc" instead ".cpp"
    // In order to identify which files to compile, the FASTBuildHelper will by default compile only ".cpp" files.

    return 0;
}