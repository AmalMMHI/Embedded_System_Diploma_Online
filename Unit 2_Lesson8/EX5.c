#include <stdio.h>
#include <string.h>

int main() {
    char temp[100];
    struct s{
    char m_name[100];
    int m_ID;
    }Exmployee;
    
    struct s *p;


    printf("Enter the name: ");
    gets(temp);
    strcpy(Exmployee.m_name, temp);
    printf("Enter the ID: ");
    scanf("%d", &Exmployee.m_ID);

p = &Exmployee;
    printf("Exmployee name: %s \n", p->m_name);
    printf("Exmployee ID: %d \n", p->m_ID);
}    

