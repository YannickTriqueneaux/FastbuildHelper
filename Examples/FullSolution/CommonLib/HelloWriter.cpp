#include "HelloWriter.h"

#include <iostream>

HelloWriter::HelloWriter()
{
}

HelloWriter::~HelloWriter()
{
}


void HelloWriter::sayHello(std::string const & previousMessage) const {
    std::cout << previousMessage << "Hello!" << std::endl;
}