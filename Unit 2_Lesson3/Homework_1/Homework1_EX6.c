#include<stdio.h>
void main(void){
    float a,b;
    float temp=0;
    printf("Enter value of a\n");
    scanf("%f", &a);
    temp = a;
    printf("Enter value of b\n");
    scanf("%f", &b);
    a = b;
    b = temp;
    printf("a = %f\n" ,a);
    printf("b = %f\n" ,b);
}