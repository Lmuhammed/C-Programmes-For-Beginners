#include <stdio.h>

void calculateOperations(int num1, int num2, int *sum, int *diff, int *prod, float *quotient) {
    *sum = num1 + num2;
    *diff = num1 - num2;
    *prod = num1 * num2;
    *quotient = (float)num1 / num2;
}

int main() {
    int number1 = 10;
    int number2 = 5;
    int addition, subtraction, multiplication;
    float division;

    calculateOperations(number1, number2, &addition, &subtraction, &multiplication, &division);

    printf("Sum: %d\n", addition);
    printf("Difference: %d\n", subtraction);
    printf("Product: %d\n", multiplication);
    printf("Quotient: %.2f\n", division);

    return 0;
}

