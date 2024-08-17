#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;

    // Seed the random number
    srand(time(NULL));

    // Generate and print 5 random numbers
    for (i = 0; i < 12; i++) {
        int randomNum = rand();
        printf("Random number %d: %d\n", i + 1, randomNum);
    }
    //this is just a exmple to learn ,use popular library for random number generation like GSL
    return 0;
}

