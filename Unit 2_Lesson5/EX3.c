#include <stdio.h>
#include <string.h>

void Reverse (){
     char c;
     scanf("%c", &c);

 if (c != '\n'){
 Reverse ();
 printf("%c", c);
 }
}

int main(){
printf("Enter a sentense\t");
Reverse(); 
return 0; 
}           