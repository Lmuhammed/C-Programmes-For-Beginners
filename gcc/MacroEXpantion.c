#include <stdio.h>

#define add(a,b) ((a) + (b)) // USE gcc -E MacroEXpantion.c TO SEE EXPANDED CODE 

int main(){

    printf("%d\n",add(5,5));

    return 0;
}

