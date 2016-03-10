#include "SecondHello.h"

#include "../CommonLib/HelloWriter.h"

SecondHello::SecondHello()
{
}


SecondHello::~SecondHello()
{
}

void SecondHello::sayHello() const {
    HelloWriter writer;
    writer.sayHello("Second ");
}