#include<stdio.h>
#include<string.h> //to use strcpy()


typedef struct {

char name[20];
int age;
char address [20];

}student;

int main(void){

    student std;
    student *pstd=&std;
    strcpy(pstd->name,"name");
    pstd->age=22;
    strcpy(pstd->address,"city1");
    printf("name :%s \n ",pstd->name);
    printf("address :%s \n ",pstd->address);
    printf("age :%s \n ",pstd->age);
    
    return 0;
}   