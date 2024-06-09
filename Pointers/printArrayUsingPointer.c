#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Assign the base address of the array to the pointer

    printf("Elements of the array using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr+i)); // Print the value at the memory location pointed by ptr

    }

    printf("\n");

    return 0;
}

