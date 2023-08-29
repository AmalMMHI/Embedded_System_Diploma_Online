#include<stdio.h>
#include<string.h>
void main(void){
    char str[100];
    int i=0,j,temp;

printf("Enter a string\t");
gets(str);
j = strlen(str) -1;

while (i<j){
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    j--;
    i++;
  }

printf("reverse string is %s", str);
}



   