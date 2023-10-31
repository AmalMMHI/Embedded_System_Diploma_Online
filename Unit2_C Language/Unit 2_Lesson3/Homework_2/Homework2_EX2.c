#include<stdio.h>
void main(void){
    char alphabet;
    printf("Enter an alphabet\n");
    scanf("%c", &alphabet);
   // printf("%c is vowel", alphabet);
    if (alphabet == 'e' || 'E'){
        printf("%c is vowel", alphabet);
    }
    else if (alphabet == 'a' || 'A'){
        printf("%c is vowel", alphabet);
    }
    else if (alphabet == 'i' || 'I'){
        printf("%c is vowel", alphabet);
    }
    else if (alphabet == 'o' || 'O'){
        printf("%c is vowel", alphabet);
    }
    else if (alphabet == 'u'|| 'U'){
        printf("%c is vowel", alphabet);
    }   
    else{
        printf("%c is consonant", alphabet);
    }
}