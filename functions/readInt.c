#include <stdio.h>

int readInt(int *variable);

int main()
{
    int a=0;
    a=readInt();
    printf("var = %d \n",a);
    return 0;
}

int readInt(void){
    int var;
    scanf("%d",var);
    return var;

}

