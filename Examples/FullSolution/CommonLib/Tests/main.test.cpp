
#include "../HelloWriter.h"

int main(int argc, char ** args) {


    //As you can see this project is automatically compile as a UnitTest of the CommonLib
    //In order to add a UnitTest associated a library  use the extension "_WithTest" to your corresponding project template.
    HelloWriter writer;
    writer.sayHello("As a UnitTest I would like to say ");


    return 0;
}