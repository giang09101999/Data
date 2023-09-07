#include <stdio.h>

struct Student
{
    char name[50];
    char gender[50];
    int age;
};

int main() {
	int i, n;
	
	printf("Input number of students: ");
	scanf("%d", &n);
	
    struct Student student[n];
    
	for(i = 0; i < n; i++){
		printf("Input information of student %d:\n", i + 1);
		printf("Name: ");
		scanf("%s", &student[i].name);
		printf("Age: ");
		scanf("%d", &student[i].age);
		printf("Gender: ");
		scanf("%s", &student[i].gender);
		printf("------------------------------\n");
	}
    
	for(i = 0; i < n; i++){
		printf("------------------------------\n");
		printf("The information of student %d:\n", i + 1);
		printf("Name: %s\n", student[i].name);
		printf("Age: %d\n", student[i].age);
		printf("Gender: %s\n", student[i].gender);
    }
       
}