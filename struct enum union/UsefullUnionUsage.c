#include <stdio.h>

// Define person types
#define STUDENT 1
#define TEACHER 2

// Define a union for person data
union PersonData {
    struct {
        char studentID[10];
        int grade;
    } student;
    struct {
        char teacherID[10];
        char subject[20];
    } teacher;
};

// Define a person structure
struct Person {
    int type;
    union PersonData data;
};

int main() {
    struct Person student1 = {STUDENT, .data.student = {"S12345", 10}};
    struct Person teacher1 = {TEACHER, .data.teacher = {"T98765", "Math"}};

    printf("Student ID: %s, Grade: %d\n", student1.data.student.studentID, student1.data.student.grade);
    printf("Teacher ID: %s, Subject: %s\n", teacher1.data.teacher.teacherID, teacher1.data.teacher.subject);

    return 0;
}

/*

Let's consider a program that needs to store information about a person, 
where the person can be either a student or a teacher. We can use a union to store the specific details based on whether the person is a student or a teacher.
*/
