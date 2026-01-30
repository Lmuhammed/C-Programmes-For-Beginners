#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <string.h>

#define MAX_PASSWORD 128

// Function to read password without echo
char* read_password(const char *prompt) {
    static char password[MAX_PASSWORD];
    struct termios oldt, newt;

    // Get current terminal settings
    if (tcgetattr(STDIN_FILENO, &oldt) != 0) {
        perror("tcgetattr");
        return NULL;
    }
    newt = oldt;

    // Disable echo
    newt.c_lflag &= ~(ECHO);
    if (tcsetattr(STDIN_FILENO, TCSANOW, &newt) != 0) {
        perror("tcsetattr");
        return NULL;
    }

    // Prompt user
    if (prompt) {
        printf("%s", prompt);
        fflush(stdout);
    }

    // Read password
    if (fgets(password, MAX_PASSWORD, stdin) == NULL) {
        perror("fgets");
        tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
        return NULL;
    }

    // Restore terminal
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    printf("\n"); // move to next line after input

    // Remove trailing newline
    size_t len = strlen(password);
    if (len > 0 && password[len - 1] == '\n') {
        password[len - 1] = '\0';
    }

    return password;
}

int main() {
    char *pwd = read_password("Enter password: ");
    if (pwd) {
        printf("Your password is: %s\n", pwd);
    } else {
        printf("Failed to read password.\n");
    }
    return 0;
}