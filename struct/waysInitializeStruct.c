#include <stdio.h>
struct Person {
    char name[50];
    int age;
};

/*
-define multiple variables 
struct Person {
    char name[50];
    int age;
} person1, person2; 

-define array 
struct Person {
    char name[50];
    int age;
} persons[50];
*/
int main()
{
    // Create an array of structs
    struct Person people[3] = {
            {"ahmmed", 25},
            {"ayoub", 30},
            {"saad", 35}
        };
    // Initializing at the time of declaration
    struct Person person1 = {"khaled", 25};
    // Initializing using designated initializers
    struct Person person2 = {.name = "othman", .age = 30};
    // Copy the contents of person1 to person2
    struct Person person3;
    person3=person2;

    return 0;
}
