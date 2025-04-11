#include<stdio.h>
int main(void){
    //printf return number of printed chars
    if(printf("Hello")){ //because printf returned chars numbers >0 it evalueted in if as True bool
     printf("World \n");
    }else{
    printf("YOu will not see me :D\n");
    }
     return 0;
}   