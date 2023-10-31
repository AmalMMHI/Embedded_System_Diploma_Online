#include<stdio.h>
void main(void){
    char operator;
    float a,b;
    float output=0;

    printf("Enter operator either + or - or * or /\t");   
    scanf("%c", &operator);

    printf("Enter two operands\t");
    scanf("%f %f", &a,&b);

    switch (operator){
        case '+':
        {
            output = a+b;
            printf("output = %f", output);
        }
        break;
        case '-':
        {
            output = a-b;
            printf("output = %f", output);
        }
        break;

        case '*' :
        {
            output = a*b;
            printf("output = %f", output);
        }
        break;    

        case '/' :
        {
            output = a/b;
            printf("output = %f", output);
        }
        break;

        defult:
            printf("wrong choice");
            break;
    } 
}
