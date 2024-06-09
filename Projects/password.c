#include <stdio.h>
#include <string.h>

#define MAX_ATTEMPTS 3
#define PASSWORD "password123"

int main() {
    char input[20];
    int attempts = 0;

    while (attempts < MAX_ATTEMPTS) {
        printf("Enter the password: ");
        scanf("%s", input);

        if (strcmp(input, PASSWORD) == 0) {
            printf("Login successful!\n");
            break;
        } else {
            attempts++;
            printf("Incorrect password. Attempts left: %d\n", MAX_ATTEMPTS - attempts);
        }
    }

    if (attempts == MAX_ATTEMPTS) {
        printf("Maximum login attempts reached. Login failed.\n");
    }

    return 0;
}

