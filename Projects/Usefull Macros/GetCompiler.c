#include <stdio.h>

int main() {
    #ifdef __GNUC__
        printf("Compiled with GCC\n");
    #elif __clang__ 
        printf("Compiled with Clang\n");
    #elif __MINGW32__ 
        printf("Compiled with MinGW\n");
    #else
        printf("Not compiled with GCC,Clang or MinGW !\n");
    #endif

    return 0;
}

