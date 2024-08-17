#include <stdio.h>

int main() {
    int num = 10;
    int *ptr1, *ptr2;

    ptr1 = &num; // ptr1 points to the memory location of num
    ptr2 = ptr1; // ptr2 also points to the memory location of num

    printf("Original value: %d\n", num);

    *ptr1 = 20; // Change the value using ptr1
    printf("Value after changing via ptr1: %d\n", num);

    *ptr2 = 30; // Change the value using ptr2
    printf("Value after changing via ptr2: %d\n", num);

    return 0;
}

