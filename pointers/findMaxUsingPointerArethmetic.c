#include <stdio.h>

int findMax(int *arr, int size) {
    int max = *arr;

    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    return max;
}

int main() {
    int numbers[] = {10, 30, 20, 50, 40};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int max = findMax(numbers, size);

    printf("The maximum element in the array is: %d\n", max);

    return 0;
}

