#include <stdio.h>
#include <string.h>


struct student {
char m_name[100];
int m_rollnumber;
float m_marks;
};

int main() {
    struct student s;
    char name[100];


printf("Enter information of the student:\n");
printf("Enter name:\t");
scanf("%s", name);
strcpy(s.m_name, name);
printf("Enter roll number:\t");
scanf("%d", &s.m_rollnumber);
printf("Enter marks:\t");
scanf("%f", &s.m_marks);


printf("\nDisplay information\n");
printf("Name: %s\n", s.m_name);
printf("Roll: %d\n", s.m_rollnumber);
printf("Marks: %.2f\n", s.m_marks);
}



