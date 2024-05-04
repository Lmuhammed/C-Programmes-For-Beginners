#include<stdio.h>
int main(void){
    int j,i,stringCount =0;
    // الإعان عن الجملة النصية وقرائتها من المستخدم / Initialise and reade string
    char str[20];
    printf("Enter a string :");
    scanf("%s",str);
    // الحصول على طول العبارة النصية
    while(str[j] != '\0'){
      stringCount++;
      j++;
    }
    printf("String before reverse %s  : \n",str);
    printf("String after reverse  :");
    // قلب العبارة النصية
    for(i=stringCount;i>=0;i--)
    printf("%c",str[i]);
    printf("\n");
    return 0;
}   