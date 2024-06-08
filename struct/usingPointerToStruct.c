#include <stdio.h>
#include <stdlib.h>

// Define a struct named Person
struct Person {
    char name[50];
    int age;
};

int main() {
    // Declare a struct variable
    struct Person person1;
    // Declare a pointer to a struct
    struct Person *personPtr ;
    // Assign the address of person1 to the pointer
    personPtr = &person1;

    // Read name and age from user input using pointer
    printf("Enter name: ");
    scanf("%s", personPtr->name);
    printf("Enter age: ");
    scanf("%d", &personPtr->age);

    // Print the entered name and age
    printf("Name: %s\n", personPtr->name);
    printf("Age: %d\n", personPtr->age);


    return 0;
}

