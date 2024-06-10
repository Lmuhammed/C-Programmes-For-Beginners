#include <stdio.h>
#include <limits.h>

int main() {
        // Signed integer types can represent both positive and negative numbers.
    printf("Minimum value for signed char: %d\n", SCHAR_MIN);
    printf("Maximum value for signed char: %d\n", SCHAR_MAX);
    printf("Minimum value for int: %d\n", INT_MIN);
    printf("Maximum value for int: %d\n", INT_MAX);
    printf("Minimum value for long: %ld\n", LONG_MIN);
    printf("Maximum value for long: %ld\n", LONG_MAX);

    // Unsigned integer types can only represent non-negative numbers (zero and positive numbers).
    printf("Maximum value for unsigned char: %u\n", UCHAR_MAX);
    printf("Maximum value for unsigned int: %u\n", UINT_MAX);
    printf("Maximum value for unsigned long: %lu\n", ULONG_MAX);
    
    /*
    limits.h header file to access the constants for minimum and maximum values of various integer types
    */
    return 0;
}

