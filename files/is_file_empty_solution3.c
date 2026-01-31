#include <stdio.h>
int main() {
    char *file_name="file.txt";
    FILE *file = fopen(file_name, "r");
    if (file == NULL ){
    perror("File error");//Print error message based on errno
    return -1;
    }
    int c=getc(file);
    if (c == EOF && feof(file))
    printf("The file is empty\n");
    fclose(file);

    return 0;
}
