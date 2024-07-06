#include <stdio.h>

int *sumTwoArray(int a[3],int b[3]);

int main()
{
    int *c=NULL;
    int a[3]={1,2,3};
    int b[3]={1,2,3};
 int i;
    c=sumTwoArray(a,b);
    printf("Array no 1 :\n");    
    for(i=0;i<3;i++)
        printf("%d \n",a[i]);
    printf("Array no 2  :\n");    
        for(i=0;i<3;i++)
        printf("%d \n",b[i]);
    printf("Sum of of two prev array :\n");    
    for(i=0;i<3;i++)
        printf("%d \n",*(c++));
    return 0;
}

int *sumTwoArray(int a[3],int b[3]){

    
    static int c[3];
    int i;
    for(i=0;i<3;i++)
        c[i]=a[i]+b[i];

    return c;

}

