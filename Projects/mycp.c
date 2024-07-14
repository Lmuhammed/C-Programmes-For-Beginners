#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <source_file> <target_file>\n", argv[0]);
        return 1;
    }

    FILE *sourceFile, *targetFile;
    char *sourceFileName = argv[1];
    char *targetFileName = argv[2];
    char buffer[1024];
    int bytesRead;

    // Open the source file in binary read mode
    sourceFile = fopen(sourceFileName, "rb");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    // Open the target file in binary write mode
    targetFile = fopen(targetFileName, "wb");
    if (targetFile == NULL) {
        printf("Error opening target file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy contents of source file to target file
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, targetFile);
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}

