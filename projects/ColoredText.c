#include <stdio.h>

// Define ANSI color escape codes
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main() {
    // Print text in different colors
    printf(ANSI_COLOR_RED "This text is red\n" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_GREEN "This text is green\n" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_YELLOW "This text is yellow\n" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_BLUE "This text is blue\n" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_MAGENTA "This text is magenta\n" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_CYAN "This text is cyan\n" ANSI_COLOR_RESET);

    return 0;
}

