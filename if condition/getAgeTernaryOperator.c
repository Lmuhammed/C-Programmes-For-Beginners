#include<stdio.h>
int main(void){
    int age;
    printf("Enter Your age \n");
    scanf("%d",&age);
    age>=13 && age<=19?printf("Too young \n"):printf("Old\n");
    return 0;
}   