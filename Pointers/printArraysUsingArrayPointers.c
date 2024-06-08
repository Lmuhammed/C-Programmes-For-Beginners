#include <stdio.h>

int main() {
    // Define three arrays
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int arr3[] = {7, 8, 9};

    // Define an array of pointers to int arrays
    int *ptrArr[3] = {arr1, arr2, arr3}; //In C, the name of an array can act as a pointer in this contexts  
    printf("Printing arrays using array of pointers :D\n");
    // Print the arrays using the array of pointers
    for (int i = 0; i < 3; i++) {
            printf("Array %d : \n", i + 1);
            for (int j = 0; j < 3; j++) {
            printf("%d\t", *(ptrArr[i] + j)); // Dereference the pointer to access each array elements
            }
            printf("\n");
    }

    return 0;
}
