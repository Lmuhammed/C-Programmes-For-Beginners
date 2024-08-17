#include <stdio.h>

int main() {
    int num = 10;
    char ch = 'A';
    void *ptr; // Declare a void pointer
    
    // Point the void pointer to an integer
    ptr = &num;
    printf("Value of integer pointed to by void pointer: %d\n", *((int *)ptr));// Cast the void pointer and derefrencing it
    // Point the void pointer to a character
    ptr = &ch;
    printf("Value of character pointed to by void pointer: %c\n", *((char *)ptr));// Cast the void pointer and derefrencing it

    return 0;
}

