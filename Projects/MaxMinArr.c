#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max, min, countNeg = 0, countPos = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] < 0) {
            countNeg++;
        }
        if (arr[i] > 0) {
            countPos++;
        }
    }

    printf("Maximum number in the array: %d\n", max);
    printf("Minimum number in the array: %d\n", min);
    printf("Number of negative numbers: %d\n", countNeg);
    printf("Number of positive numbers: %d\n", countPos);

    return 0;
}

