#include<stdio.h>
void main(void){
    float a,b,c;
    printf("Enter three numbers\n");
    scanf("%f %f %f", &a ,&b ,&c);

    if (a>b){
        if (a>c){
        printf("Largest number is %f", a);
         }
    else {
        printf("Largest number is %f", c);
         }
    }
    else {
        if (b>c){
        printf("Largest number is %f", b);
         }
    else {
        printf("Largest number is %f", c);
         }
    }
}