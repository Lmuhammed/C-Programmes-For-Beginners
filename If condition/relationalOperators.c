#include <stdio.h>

int main() {
    int a = 5, b = 3;

    // Equal to (==) operator
    if (a == b) {
        printf("a is equal to b\n");
    } else {
        printf("a is not equal to b\n");
    }

    // Not equal to (!=) operator
    if (a != b) {
        printf("a is not equal to b\n");
    } else {
        printf("a is equal to b\n");
    }

    // Greater than (>) operator
    if (a > b) {
        printf("a is greater than b\n");
    } else {
        printf("a is not greater than b\n");
    }

    // Less than (<) operator
    if (a < b) {
        printf("a is less than b\n");
    } else {
        printf("a is not less than b\n");
    }

    // Greater than or equal to (>=) operator
    if (a >= b) {
        printf("a is greater than or equal to b\n");
    } else {
        printf("a is not greater than or equal to b\n");
    }

    // Less than or equal to (<=) operator
    if (a <= b) {
        printf("a is less than or equal to b\n");
    } else {
        printf("a is not less than or equal to b\n");
    }

    return 0;
}

