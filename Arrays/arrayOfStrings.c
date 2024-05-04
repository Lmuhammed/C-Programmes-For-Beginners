#include<stdio.h>
int main(void){
    int r,c;
    char names[4][10]={
        {"mohammed"},
        {"ahmmed"},
        {"ayoube"},
        {"youssef"},

     };
    for(r=0;r<4;r++){
    printf("\n");
    printf("names :  [%d] = %s \n" ,r, names[r] );
    }
     return 0;
}