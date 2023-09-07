#include <stdio.h>

struct Student
{
    char name[50];
    char gender[50];
    int age;
};

int main() {
    struct Student student;
    
    printf("Input information of student:\n");
    printf("Name: ");
    scanf("%s", &student.name);
    printf("Age: ");
    scanf("%d", &student.age);
    printf("Gender: ");
    scanf("%s", &student.gender);
    
    printf("------------------------------\n");
    printf("The information of student:\n");
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Gender: %s\n", student.gender);
    
       
}