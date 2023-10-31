#include<stdio.h>
void main(void){
    int x=0;
    int z=0;
    float y=0;
    printf("Enter an integer you want to check\n");
    scanf("%d", &x);
    y=x/2.0;
    z = x/2;
    if (y>z){
        printf("%d is odd", x);
    }
    else{
        printf("%d is even", x);
    }
}