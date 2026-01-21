#include <stdio.h>
#include <string.h>

#define PWD_LEN 20
#define MAX_ATTEMPTS 3
#define PASSWORD "password123"

int main() {
    char input[PWD_LEN];
    int attempts = 0;
 
    do {
	printf("Enter the password: ");
        scanf("%s", input);

        if (strncmp(input, PASSWORD,PWD_LEN) == 0) {
            printf("Login successful!\n");
            break;
        } else {
            attempts++;
            printf("Incorrect password. Attempts left: %d\n", MAX_ATTEMPTS - attempts);
        }

    }while(attempts < MAX_ATTEMPTS);
    if (attempts == MAX_ATTEMPTS) {
        printf("Maximum login attempts reached. Login failed.\n");
    }

    return 0;
}

