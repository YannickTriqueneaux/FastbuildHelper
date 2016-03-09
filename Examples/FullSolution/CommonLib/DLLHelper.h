
#ifndef DLLHELPER_HEADER
#define DLLHELPER_HEADER

#include <string>

class DLLHelper
{
public:
    typedef void(*function_type)();


    DLLHelper();
    ~DLLHelper();


    void* handle;
    bool loaded;
public:
    bool load(std::string const & path);
    bool unload();

    bool executeFunction(std::string const & functionName);

    static std::string getLastError();
};


#endif //DLLHELPER_HEADER

