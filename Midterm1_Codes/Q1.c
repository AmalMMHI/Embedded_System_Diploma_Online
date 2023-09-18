#include<stdio.h>
#include<string.h>

int main(){
    int remender, num, sum = 0;
 printf("Enter the number\t"); 
 scanf("%d", &num);  

 while (num != 0){
    remender = num % 10;
    sum += remender;
    num = num/10;
    } 
    printf("%d", sum);
}
