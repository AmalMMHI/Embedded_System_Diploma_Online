#include<stdio.h>
void main(void){
    char alphabet;
    printf("Enter an alphabet\n");
    scanf("%c", &alphabet);
   // printf("%c is vowel", alphabet);
    if (alphabet == 'e'){
        printf("%c is vowel", alphabet);
    }
    else if (alphabet == 'a'){
        printf("%c is vowel", alphabet);
    }
    else if (alphabet == 'i'){
        printf("%c is vowel", alphabet);
    }
    else if (alphabet == 'o'){
        printf("%c is vowel", alphabet);
    }
    else if (alphabet == 'u'){
        printf("%c is vowel", alphabet);
    }   
    else{
        printf("%c is consonant", alphabet);
    }
}