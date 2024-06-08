#include <stdio.h>

int main() {
    FILE *file;
    char c;

    // Open the file in read mode
    file = fopen("quotes.txt", "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Read and display the contents of the file character by character
    while ((c = fgetc(file)) != EOF) {
        printf("%c", c);
    }

    // Close the file
    fclose(file);

    return 0;
}