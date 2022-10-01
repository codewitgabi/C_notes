#include <stdio.h>


struct Student {
	char name[25];
	float gpa;
};

int main () {
	
	struct Student student1 = {"Mickey", 4.84};
	struct Student student2 = {"Gabi Jay", 4.00};
	struct Student student3 = {"Cynthia", 4.50};
	
	struct Student students[] = {
							student1,
							student2,
							student3
						};
						
						
	for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++) {
		printf("%-25s%.2f\n", students[i].name, students[i].gpa);
	}
	
	return 0;
}