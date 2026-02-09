#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int *arr =(int*)malloc(sizeof(int)*3);
    arr[0]=1;
    arr[1]=1;
    arr[2]=1;
    printf("arr p: %p\n",arr);
    free(arr);
    printf("arr p: %p\n",arr);//still point to memory , but its ownership moved to the OS
    arr=NULL;//Helps to metigate and detect with use after free ,dangling pointers 

return 0;
}