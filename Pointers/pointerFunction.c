#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

int main() {
    int (*operation)(int, int); // Declare a function pointer

    operation = add; // Point the function pointer to the add function
    printf("Addition: %d\n", operation(5, 3));

    operation = subtract; // Point the function pointer to the subtract function
    printf("Subtraction: %d\n", operation(5, 3));

    return 0;
}

