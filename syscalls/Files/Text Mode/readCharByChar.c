#include <stdio.h>

int main() {
    FILE *file;
    char character;
    
    // Open the file in read mode
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read the file character by character
    while ((character = fgetc(file)) != EOF) {
        printf("%c", character); // Print the character read
    }

    // Close the file
    fclose(file);

    return 0;
}

