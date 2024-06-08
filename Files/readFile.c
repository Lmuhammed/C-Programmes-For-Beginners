#include<stdio.h>

int main(void){
    
    char line[255];
    FILE *fpointer = fopen("quotes.txt","r");
    fgets(line,255,fpointer);
    printf("%s",line);
    fclose(fpointer);
    return 0;
}   