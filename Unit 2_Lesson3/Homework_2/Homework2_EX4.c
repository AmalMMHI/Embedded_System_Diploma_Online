#include<stdio.h>
void main(void){
    float x;
    printf("Enter a number\n");
    scanf("%f", &x);

    if (x>0){
        printf("%f is positive", x);
    }
    else if (x<0){
        printf("%f is negative", x);
    }
    else {
        printf("%f is zero", x);
    }
}