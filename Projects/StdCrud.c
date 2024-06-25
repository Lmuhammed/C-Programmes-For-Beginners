#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
};

void createStudent(struct Student students[], int index) {
    printf("Enter student ID: ");
    scanf("%d", &students[index].id);
    printf("Enter student name: ");
    scanf("%s", students[index].name);
    printf("Enter student age: ");
    scanf("%d", &students[index].age);
}

void readStudent(struct Student student) {
    printf("Student ID: %d\n", student.id);
    printf("Student Name: %s\n", student.name);
    printf("Student Age: %d\n", student.age);
}

void updateStudent(struct Student *student) {
    printf("Enter new student name: ");
    scanf("%s", student->name);
    printf("Enter new student age: ");
    scanf("%d", &student->age);
}

void deleteStudent(struct Student students[], int index) {
    students[index].id = 0;
    strcpy(students[index].name, "");
    students[index].age = 0;
}

int main() {
    struct Student students[10];
    int choice, index = 0;

    do {
        printf("\n1. Create\n2. Read\n3. Update\n4. Delete\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createStudent(students, index);
                index++;
                break;
            case 2:
                printf("Enter student index to read: ");
                scanf("%d", &index);
                readStudent(students[index]);
                break;
            case 3:
                printf("Enter student index to update: ");
                scanf("%d", &index);
                updateStudent(&students[index]);
                break;
            case 4:
                printf("Enter student index to delete: ");
                scanf("%d", &index);
                deleteStudent(students, index);
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

