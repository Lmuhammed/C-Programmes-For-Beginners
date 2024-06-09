#include <stdio.h>

int main() {
    char str[100];
    int i, charCount = 0, spaceCount = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]s", str); //To read strings with spaces

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spaceCount++;
        } else {
            charCount++;
        }
    }

    printf("Number of characters in the string: %d\n", charCount);
    printf("Number of spaces in the string: %d\n", spaceCount);

    return 0;
}
