#include <stdio.h>
#include <string.h>

#ifdef _WIN32
    #define OS "Windows"
#elif __linux__
    #define OS "Linux"
#else
    #define OS "Unknown"
#endif

int main() {
    printf("Operating System: %s\n", OS);
    
    if (strcmp(OS, "Windows") == 0) {
        printf("Running on a Windows machine\n");
    } else if (strcmp(OS, "Linux") == 0) {
        printf("Running on a Linux machine\n");
    } else {
        printf("Running on an unknown operating system\n");
    }

    return 0;
}

