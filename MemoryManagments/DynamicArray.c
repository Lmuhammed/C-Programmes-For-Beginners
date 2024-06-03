#include<stdio.h>
#include<stdlib.h> //to use malloc

int main(void){

    int *a,i=0;
    a=malloc(sizeof(int)*3);
    a[0]=1;
    a[1]=2;
    a[2]=3;
    printf("Print Dynamiclly allocated array\n");
    for(i=0;i<3;i++)
    printf("a[%d] = %d \n ",i,a[i]);
    
    return 0;
}   