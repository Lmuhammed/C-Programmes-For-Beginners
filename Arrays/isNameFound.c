#include<stdio.h>
#include <string.h>
int main(void){
    int r,c,stop=0;
    char name[10],names[4][10]={
        {"mohammed"},
        {"ahmmed"},
        {"ayoube"},
        {"youssef"},

     };
    do{
    printf("Enter you name : \n");
    scanf("%s",name);
    for(r=0;r<4;r++){
    if(strcmp(name,names[r]) == 0){
    stop=1;
    }
    }
    }while(stop == 0);
    printf("Name found :D\n");
     return 0;
}