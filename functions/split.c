#include <stdio.h>
#include <stdlib.h>
#define MAX 40

int split(char str[] , char first[] , char second[],char delimeter);

int main()
{
    char str[] ="thisistest#string";
    char first[MAX];
    char second[MAX];
    char delimeter;
    printf("Enter Delimetr :");
    scanf("%c",&delimeter);
    int result=split(str,first,second,delimeter);
    if(result == 0){
    printf("Split based on Delimeter %c done :D \n",delimeter);
    printf("Fisrt :  %s \n",first);
    printf("Second : %s \n",second);
    }


    return 0;
}
int split(char str[] , char first[] , char second[],char delimeter){

    int i=0,j=0;
    while (str[i] != delimeter){
    first[j]=str[i];
    i++;j++;
    }

    first[j]='\0';

    i=i+1;
    j=0;
     while (str[i] != '\0'){
    second[j]=str[i];
    i++;
    j++;
    }
    first[j]='\0';

    return 0;
}
