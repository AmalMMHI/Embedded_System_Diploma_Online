#include<stdio.h>
void main(void){
    char str[100];
    int i, length =0;

printf("Enter a string\t");
gets(str);

  for (i=0; str[i] != '\0'; i++){
   length +=1 ;
   continue;  
  }
printf("length of string is %d", length);
}



   