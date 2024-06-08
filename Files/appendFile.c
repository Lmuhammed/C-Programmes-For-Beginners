#include <stdio.h>

int main() {
    
    char line[255];
    
    // Open the file in append mode
    FILE *file = fopen("quotes.txt", "a");
    
    // write to file
    fprintf(file,"الأمل طريق المُراد \n");

    // Close the file
    fclose(file);

    return 0;
}
