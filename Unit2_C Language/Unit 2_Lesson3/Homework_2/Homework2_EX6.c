#include<stdio.h>
void main(void){
    int x,n;
    int sum=0;
    printf("Enter an integer\n");   
    scanf("%d", &n);
    for(x=1; x<=n ; x++){
        sum += x;
    }
    printf("sum = %d", sum);
}