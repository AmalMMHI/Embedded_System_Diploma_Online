#include<stdio.h>
void main(void){
    int n,i;
    int Factorial=1;
    printf("Enter an integer\n");   
    scanf("%d", &n);
    if (n>0){
        for(i=1; i<=n; i++){
        Factorial *= i; 
        }
        printf("Factorial = %d", Factorial);
    }
    else if (n==0){
        printf("Factorial = 1");
    }
    else {
        printf("Error!!! Factorial of negative number does not exist");

        }
}
