#include<stdio.h>
#include<stdlib.h>

int * ints_malloc(size_t nbByts);

int main(void){

    int * nb= ints_malloc(sizeof(int));
    free(nb);
     return 0;
}   

int * ints_malloc(size_t nbByts){
    if (nbByts <=0)
    exit(-1);

    void * byts = malloc(nbByts);

    if (byts == NULL)
    exit(-2);

    int * mem=(int *)byts;
    return mem;
}
