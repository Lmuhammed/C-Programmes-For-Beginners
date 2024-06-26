#include <stdio.h>
#include <time.h>

int main() {
    time_t timestamp;
    struct tm *timeinfo;
    char buffer[80];

    // Input Unix timestamp
    printf("Enter Unix timestamp: ");
    scanf("%ld", &timestamp);

    // Convert Unix timestamp to struct tm
    timeinfo = localtime(&timestamp);

    // Format the date and time
    strftime(buffer, 80, "%Y-%m-%d %H:%M:%S", timeinfo);

    // Print the converted date
    printf("Converted date: %s\n", buffer);

    return 0;
}

