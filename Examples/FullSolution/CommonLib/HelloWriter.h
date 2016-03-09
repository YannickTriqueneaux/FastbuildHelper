
#ifndef HELLOWRITER_HEADER
#define HELLOWRITER_HEADER

#include <string>

class HelloWriter
{
public:
    HelloWriter();
    ~HelloWriter();
    
    void sayHello(std::string const & previousMessage) const ;
};


#endif //HELLOWRITER_HEADER
