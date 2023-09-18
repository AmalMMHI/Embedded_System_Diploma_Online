#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char reverse(char str[]){
    int i, length, x;
    length = strlen(str);
    for (i=0; i<length; i++){
        if(str[i] == ' '){
           x = i;
     printf("%s", &str[i]); 
    }
    }
    printf(" ");
    for (i=0; i<x; i++){
     printf("%c", str[i]); 
    }
    }
int main(){
    char str[100];
    char reverse(char str[]);
printf("Enter the string\t");
gets(str);
reverse(str);
}
