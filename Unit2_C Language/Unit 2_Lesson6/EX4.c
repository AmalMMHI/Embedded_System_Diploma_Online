#include <stdio.h>
#include <string.h>

struct student {
char m_name[100];
float m_marks;
};

struct student information(){
    struct student A;
    static int i=1;
    char name[100];

    printf("For roll number %d:\n", i);
    printf("Enter name :\t");
    scanf("%s", name);
    strcpy(A.m_name, name);
    
    printf("Enter marks:\t");
    scanf("%f", &A.m_marks);
    i++;
    return A;
};



struct student Display(struct student B){
    static int i = 1;

printf("Information of roll number %d:\n", i);
printf("Name: %s\n", B.m_name);
printf("Marks: %.2f\n", B.m_marks);
i++;
    return B;
};

int main() {
    struct student B[10], C[10];
    int i;

printf("Enter information of the student:\n");
for (i=0; i<10; i++){
    B[i] = information();
    printf("\n");
} 

printf("\nDisplay information\n");
for (i=0; i<10; i++){
    C[i] = Display(B[i]);
    printf("\n");
} 
}




