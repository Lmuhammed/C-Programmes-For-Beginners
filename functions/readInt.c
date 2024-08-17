#include <stdio.h>

int readInt(int *variable);

int main()
{
    int a=0;
    a=readInt(&a);
    printf("var = %d \n",a);
    return 0;
}

int readInt(int *variable){

    printf("Enter var :\n");
    scanf("%d",variable);

    return *variable;

}

