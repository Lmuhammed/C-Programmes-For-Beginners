#include<stdio.h>

int main(void){
    
    char str[20];
    printf("Enter a string :");
    scanf("%[^\n]",str);
    int i=0,strCOunt=0;
    for (i = 0; str[i] != '\0'; i++) {
    strCOunt++;
    }
    printf("The String lenght %d\n",strCOunt);
    return 0;
}   
