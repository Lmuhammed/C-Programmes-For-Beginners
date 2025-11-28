#include <stdio.h>

int readInt(int *variable);

int main()
{
	int age=0;
	char name[20];
	printf("Enter age :");
	scanf("%d",&age);
	// scanf leaves one or more  \n  ( or charcheters over the size of the variable ) in stdin which takent by fgets as input
	printf("Enter name :");
	fgets(name,20,stdin);
    return 0;
}



