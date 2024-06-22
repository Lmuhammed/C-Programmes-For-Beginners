#include <stdio.h>
#include <time.h>

int main() {
    while (1) {
        time_t currentTime;
        struct tm *localTime;

        time(&currentTime); // Get the current time
        localTime = localtime(&currentTime); // Convert the current time to the local time

        printf("\r%02d:%02d:%02d", localTime->tm_hour, localTime->tm_min, localTime->tm_sec); // Display the time in HH:MM:SS format
        fflush(stdout); // Flush the output buffer

        // Wait for 1 second before updating the time
        sleep(1);
    }

    return 0;
}

