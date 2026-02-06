#include<stdio.h>
#include<stdlib.h> //to use malloc

int main(void){

    int *a,i=0;
    //حجز جزء من الذاكرة عبارة مصفوفة  بحجم 3 اعداد صحيحة
    a=malloc(sizeof(int)*3);
    a[0]=1;
    a[1]=2;
    a[2]=3;
    printf("Print Dynamiclly allocated array\n");
    for(i=0;i<3;i++)
    printf("a[%d] = %d \n ",i,a[i]);
    int *tmp_ptr=realloc(a,  1000000000000*sizeof(int));
if(tmp_ptr == NULL){//a=realloc(); قد تفشل و تعيد فراغ الى المؤشر الاصلي و بالتالي تفقد الوصول للذاكرة الاصلية
    free(a);
perror("memory error ");
return -1;
}
a=tmp_ptr;
/*
بقية البرنامج


*/
    free(a);

    return 0;
}   
