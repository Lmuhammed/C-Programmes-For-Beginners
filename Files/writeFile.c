#include <stdio.h>

int main() {
    
    char line[255];
    
    // Open the file in write mode
    FILE *file = fopen("quotes.txt", "w");
    
    // write to file
    fprintf(file,"الأمل طريق المُراد \n");

    // Close the file
    fclose(file);

    return 0;
}