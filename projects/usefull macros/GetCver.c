#include <stdio.h>

int main() {
    #if defined(__STDC_VERSION__)
        printf("C version : \n");
        #if (__STDC_VERSION__ == 199409L)
            printf("C90 Standard (ISO/IEC 9899:1990)\n");
        #elif (__STDC_VERSION__ == 199901L)
            printf("C99 Standard (ISO/IEC 9899:1999)\n");
        #elif (__STDC_VERSION__ == 201112L)
            printf("C11 Standard (ISO/IEC 9899:2011)\n");
        #elif (__STDC_VERSION__ == 201710L)
            printf("C17/C18 Standard (ISO/IEC 9899:2018)\n");
        #else
            printf("Unknown C Standard\n");
        #endif
    #else
        printf("C Standard version not defined\n");
    #endif

    return 0;
}

