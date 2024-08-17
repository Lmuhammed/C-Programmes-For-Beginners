#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[10]; 

    printf("Enter a 5-digit number: ");
    scanf("%s", input);

    int num=atoi(input);
    if (strlen(input) == 5 && num != 0) {
        printf("The number %d contains 5 digits.\n", num);
    } else {
        printf("Invalid input. Please enter a 5-digit number.\n");
    }

    return 0;
}

