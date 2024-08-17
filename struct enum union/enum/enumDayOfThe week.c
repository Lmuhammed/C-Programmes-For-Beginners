#include <stdio.h>

// Define an enum named Day
enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    int dayNumber;

    printf("Enter a day number (0-6): ");
    scanf("%d", &dayNumber);
    enum Day today = dayNumber;

    switch(today) {
        case SUNDAY:
            printf("Sunday\n");
            break;
        case MONDAY:
            printf("Monday\n");
            break;
        case TUESDAY:
            printf("Tuesday\n");
            break;
        case WEDNESDAY:
            printf("Wednesday\n");
            break;
        case THURSDAY:
            printf("Thursday\n");
            break;
        case FRIDAY:
            printf("Friday\n");
            break;
        case SATURDAY:
            printf("Saturday\n");
            break;
        default :
            printf("ERROR : sorry day number mustbe :  =< 0 or > 6\n");
            break;
    }

    return 0;
}

