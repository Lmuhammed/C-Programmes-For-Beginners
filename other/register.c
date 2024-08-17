#include <stdio.h>

int main() {
    
    //مفتاح السجل
    //register keyword
    register int i; 

    for (i = 0; i < 10; i++) {
        printf("%d ", i);
    }

    return 0;
}
/*
 في C، تُستخدم كلمة السجل للإيحاء للمترجم بضرورة تخزين متغير معين في سجل وحدة المعالجة المركزية للوصول إليه بشكل أسرع. ومع ذلك، من المهم ملاحظة أن كلمة مفتاح السجل هي مجرد تلميح للمترجم، وقد يختار المترجم تجاهلها.

 In C, the register keyword is used to suggest to the compiler that a particular variable should be stored in a CPU register for faster access. However, it's important to note that the register keyword is just a hint to the compiler, and the compiler may choose to ignore it.
*/ 
