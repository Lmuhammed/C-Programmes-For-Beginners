#include <stdio.h>
#include <ctype.h>
// For more : https://cplusplus.com/reference/cctype/ 
int main() {
    char ch = 'A';

    // Check if the character is alphanumeric
    if (isalnum(ch)) {
        printf("%c is alphanumeric.\n", ch);
    }

    // Check if the character is alphabetic
    if (isalpha(ch)) {
        printf("%c is alphabetic.\n", ch);
    }

    // Check if the character is a digit
    if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    }

    // Check if the character is lowercase
    if (islower(ch)) {
        printf("%c is lowercase.\n", ch);
    }

    // Check if the character is uppercase
    if (isupper(ch)) {
        printf("%c is uppercase.\n", ch);
    }

    // Convert the character to lowercase
    printf("Lowercase of %c is %c.\n", ch, tolower(ch));

    // Convert the character to uppercase
    printf("Uppercase of %c is %c.\n", ch, toupper(ch));

    return 0;
}

