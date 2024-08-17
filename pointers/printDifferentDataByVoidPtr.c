#include <stdio.h>

int main() {
    int intValue = 10;
    double doubleValue = 3.14;
    char charValue = 'A';

    void *genericPointer; // Declare a void pointer

    // Point the void pointer to different types of data
    genericPointer = &intValue;
    printf("Value pointed by void pointer (int): %d\n", *(int*)genericPointer);

    genericPointer = &doubleValue;
    printf("Value pointed by void pointer (double): %lf\n", *(double*)genericPointer);

    genericPointer = &charValue;
    printf("Value pointed by void pointer (char): %c\n", *(char*)genericPointer);

    return 0;
}
