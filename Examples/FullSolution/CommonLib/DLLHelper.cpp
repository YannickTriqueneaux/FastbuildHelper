#include "DLLHelper.h"

#define FOR_WINDOWS
#ifdef FOR_WINDOWS
    #include "DLLHelperWindows.cc"
#endif

#ifdef FOR_LINUX
#include "DLLHelperLinux.cc"
#endif
