#include <stdio.h>
#include <string.h>

int main() {
    puts("Enter your name :");
    char name[100] ; 
    fgets(name,100,stdin);
   /*
fgets تعتبر اكثر امانا من ناحية التعامل مع السلاسل النصية مقارنى مع دوال ك scanf ...
لكنها تلقائيا تقوم بإسناد رمز السطر الجديد \n ، ول كان المتغير الذا قرأت بها  تحتاجة في مقارنة او اسناد قد يسبب خلل 
للتأكد 
    printf("%sWill Be printed in the next line",name);

 */
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }
    printf("%sWill Be printed at the same line",name);
    return 0;
}