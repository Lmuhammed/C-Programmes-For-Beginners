#include<stdio.h>
int main(void){
 int r=3,c=4;
 int array[c][c];
//  read
    for(r=0;r<3;r++){
    printf("\n");
    for(c=0;c<3;c++){
    printf("array [%d][%d] = \n",r,c);
    scanf("%d",&array[r][c]);
    }
    }

    // output 
    printf("Arry after read from user ; \n");
    for(r=0;r<3;r++){
    printf("\n");
    for(c=0;c<3;c++){
    printf("array [%d][%d] = %d\n" ,r,c, array[r][c] );
    }
    }
     return 0;
}   