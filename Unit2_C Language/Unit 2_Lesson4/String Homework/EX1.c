#include<stdio.h>
void main(void){
    char ch;
    char str[100];
    int i, frequency =0;

printf("Enter a string\t");
gets(str);

printf("Enter a character to find frequency\t");
scanf("%c", &ch);

  for (i=0; str[i] != '\0'; i++){
   if(str[i] == ch){
   frequency +=1 ;
   continue;  
}
  }
printf("frequency of %c is %d", ch, frequency);
}



   