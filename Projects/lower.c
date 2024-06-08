#include <stdio.h>

int main() {
    char uppercaseChar, lowercaseChar;

    printf("Enter an uppercase character: ");
    scanf(" %c", &uppercaseChar);

    // Check if the input is an uppercase letter
    if (uppercaseChar >= 'A' && uppercaseChar <= 'Z') {

        // Convert uppercase to lowercase using ASCII values
        lowercaseChar = uppercaseChar + 32;
        printf("The lowercase equivalent is: %c\n", lowercaseChar);

    } else {
        printf("Invalid input. Please enter an uppercase letter.\n");
    }

    return 0;
}

