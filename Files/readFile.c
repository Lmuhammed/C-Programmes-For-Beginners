#include <stdio.h>

int main() {
    FILE *file;
    char line[255];
    int lineCount=0;

    // Open the file in read mode
    file = fopen("quotes.txt", "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    /* When fgets() successfully reads a line from the file it returns a pointer to the character array where the line was stored.
    If an error occurs or the end-of-file is reached before any characters are read, fgets() returns a null pointer (NULL).
     */
   
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
        lineCount++;
    }
    //Print nb line
    printf("File has been read successfully \nNB line : %d \n",lineCount);

    // Close the file
    fclose(file);

    return 0;
}