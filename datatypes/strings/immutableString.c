#include <stdio.h>

int main() {
    const char *immutableString = "This is an immutable string";

    // Attempting to modify the immutable string will result in a compilation error
    // immutableString[0] = 't'; // This line will cause a compilation error

    printf("Immutable String: %s\n", immutableString);

    return 0;
}

