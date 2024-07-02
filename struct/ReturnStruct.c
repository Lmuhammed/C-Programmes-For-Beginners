#include <stdio.h>
/*
struct =  البنية
هنا سنتعلم ، كيف يمكننا أن نعيد أكثير من قيمة من دالة واحد
سنستخدم البنية  لنعيد أكثر من قيمة من نفس الدالة
لهذه الطريقة إيجابيات وسلبيات، من أيجابياتها : شيفرة أكثر نظافة  لقراءة أسهل
من سلبياتها : أنه يتم تمرير نسخة من البنية إلى الدالة وكلما كبرت البنية قلت فعالية البرنامج.
مثال :
    operations opt;
    operations *ptr =&opt;
    printf ("Size Struct :%d\n",(int)sizeof(opt));
    printf ("Size of pointer to struct  :%d\n",(int)sizeof(ptr));
        حجم المؤشر 8 بات في أنظمة 64 بايت ، بينما كلما كبر حجم البنية كلما زاد حجمها
*/

typedef struct operations{
int sum;
int div;
}operations;

operations func(int a,int b){
operations op;
op.sum=(a+b);
op.div=(a/b);

return op;
}

int main() {

    int a=125 ,b=22;
    operations op;
    op=func(a,b);
    printf("%d + %d = %d\n" ,a,b,op.sum);
    printf("%d / %d = %d\n" ,a,b,op.div);


    return 0;
}


