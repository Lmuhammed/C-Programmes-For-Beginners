#include <stdio.h>

// Define a struct named Address to represent an address
typedef struct Address {
    char city[50];
    int zipCode;
}Address; /*typedef used for more clean code*/

// Define a struct named Person that contains an Address struct
struct Person {
    char name[50];
    int age;
    Address address;
};

int main() {
    // Declare a struct variable of type Person
    struct Person person1;

    // Input person details
    printf("Enter name: ");
    scanf("%s", person1.name);

    printf("Enter age: ");
    scanf("%d", &person1.age);

    printf("Enter city: ");
    scanf("%s", person1.address.city);

    printf("Enter zip code: ");
    scanf("%d", &person1.address.zipCode);

    // Display person details
    printf("\nPerson Details:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Address: %s, %d\n", person1.address.city, person1.address.zipCode);

    return 0;
}

