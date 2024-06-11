#include <stdio.h>

// Define a large structure
struct LargeStruct {
    int data[100000];
};

int main() {
    struct LargeStruct largeStruct;
    char charVar;
    int intVar;
    double doubleVar;

    int *pointTointVar =&intVar;
    double *pointTodoubleVar =&doubleVar;
    char *pointTocharVar =&charVar;
    struct LargeStruct *pointTolargeStruct =&largeStruct;

    /* Print the sizes of different pointers
    %lu format specifier in C is used for printing an unsigned long integer used to print size_t used by each sizeof() */
 
    printf("Size of pointer to LargeStruct: %lubytes\n" , sizeof(pointTolargeStruct));
    printf("Size of pointer to char: %lubytes\n"        , sizeof(pointTocharVar));
    printf("Size of pointer to int: %lubytes\n"         , sizeof(pointTointVar));
    printf("Size of pointer to double: %lubytes\n"      , sizeof(pointTodoubleVar));
    
    /*
    حجم اي مؤشر حجمه 8 بايتت ، وهذا مفيد للتعامل مع هياكل البيانات الكبيرة ك  largeStruct ، فبدل ان ننقل صور من largeStruct عن طريق 
passbyValue ، نستخدم مؤشر الى العنصر من أجل برنامج أكثر فعالية وأكثير سرعة وهو ما يسمى ب passbyreference
    */
    return 0;
}

