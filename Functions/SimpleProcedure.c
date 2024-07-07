#include <stdio.h>

/*
In general, a procedure is a set of instructions that performs a specific task or operation, but it does not return a value. On the other hand, a function is also a set of instructions that performs a task, but it does return a value after completing its operation.
*/

void simpleP(int a ) {
    
    printf("Hi , this is simple procedure in c , you passed : %d\n", a);
}

int main() {
    int number = 5;
    
    // Calling the void function
    simpleP(number);

    return 0;
}

