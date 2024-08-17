#include<stdio.h>

int main(){

    int i,arri[3]={1,2,3};
    char arrc[3]={'a','b','c'};
    float arrf[3]={1,2,3};
    void * arr[3]={(void *)arri,(void *)arrc,(void *)arrf};
    printf("Print 3 different types arrays using one void * array \n");
    printf("Int array  :\n");
    int * pointerToIntArray=(int*)arr[0];    
    for(i=0;i<3;i++){
    printf("Element nb %d : %d \n",i,*(pointerToIntArray)++);
    }
    printf("\t char array  :\n");
    char * pointerToCharArray=(char*)arr[1];    
    for(i=0;i<3;i++){
    printf("`\t Element nb %d : %c \n",i,*(pointerToCharArray)++);
    }
    printf("Float array :\n");
    float * pointerToFLoatArray=(float*)arr[2];    
    for(i=0;i<3;i++){
    printf("Element nb %d : %f \n",i,*(pointerToFLoatArray)++);
    }


return 0;
}
