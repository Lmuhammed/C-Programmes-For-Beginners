#include <stdio.h>

int main() {
    int num = 10; // Integer variable
    int *numPtr = &num; // Integer pointer pointing to num
    int **ptrToNumPtr = &numPtr; // Pointer to the integer pointer

    printf("Initial value of num: %d\n", num);

    // Dereference the pointer to the integer pointer and change the value of num to 55
    **ptrToNumPtr = 55;

    printf("Updated value of num: %d\n", num);

    return 0;
}

