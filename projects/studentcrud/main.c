#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

void addStudentRecord(FILE *file) {
    struct Student student;

    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNumber);
    printf("Enter Name: ");
    scanf("%s", student.name);
    printf("Enter Marks: ");
    scanf("%f", &student.marks);

    fwrite(&student, sizeof(struct Student), 1, file);
}

void displayStudentRecords(FILE *file) {
    struct Student student;

    rewind(file);

    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", student.rollNumber, student.name, student.marks);
    }
}

void updateStudentRecord(FILE *file, int rollNumber) {
    struct Student student;

    rewind(file);

    while (fread(&student, sizeof(struct Student), 1, file)) {
        if (student.rollNumber == rollNumber) {
            printf("Enter new Name: ");
            scanf("%s", student.name);
            printf("Enter new Marks: ");
            scanf("%f", &student.marks);

            fseek(file, -sizeof(struct Student), SEEK_CUR);
            fwrite(&student, sizeof(struct Student), 1, file);
            printf("Student record updated successfully.\n");
            return;
        }
    }

    printf("Student with Roll Number %d not found.\n", rollNumber);
}

int main() {
    FILE *file;
    file = fopen("student_records.dat", "ab+");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int choice;
    do {
        printf("\n1. Add Student Record\n2. Display Student Records\n3. Update Student Record\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudentRecord(file);
                break;
            case 2:
                displayStudentRecords(file);
                break;
            case 3:
                int rollNumber;
                printf("Enter Roll Number to update: ");
                scanf("%d", &rollNumber);
                updateStudentRecord(file, rollNumber);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    fclose(file);

    return 0;
}

