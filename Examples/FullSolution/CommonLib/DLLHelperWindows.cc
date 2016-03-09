
#include <windows.h>
#include <iostream>


DLLHelper::DLLHelper():handle(0){

}
DLLHelper::~DLLHelper() {
    unload();
}

bool DLLHelper::load(std::string const & path) {

    if (handle)
        unload();
    //If crash here, you have maybe a conflict with two libs (possible case: DEBUG and RELEASE)
    handle = LoadLibraryA(path.c_str());
    loaded = true;
    if (handle == nullptr) {
        std::cout << "Error during lib loading: " << getLastError();
    }
    loaded = (handle != nullptr);
    return loaded;
}

bool DLLHelper::unload() {
    if (handle == nullptr)
        return false;

    if (FreeLibrary((HMODULE)handle) != 0) {
        handle = nullptr;
        loaded = false;
        return true;
    }
    return true;
}

bool DLLHelper::executeFunction(std::string const & functionName) {
    auto procAdress = (function_type)GetProcAddress((HMODULE)handle, functionName.c_str());
    if (!procAdress) {
        std::cout << "Function " << functionName << " not Found!" << std::endl;
        std::cout << getLastError() << std::endl;
        return false;
    }
    procAdress();
    return true;
}

std::string DLLHelper::getLastError() {
    DWORD error = GetLastError();
    if (error) {
        const int nbCharacter = 256;
        char lastError[nbCharacter];
        FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), lastError, nbCharacter, NULL);
        return lastError;
    }
    else {
        return "No Error";
    }
}