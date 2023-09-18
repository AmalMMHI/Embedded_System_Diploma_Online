#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int num;
    float sq;

 printf("Enter the number\t"); 
 scanf("%d", &num);  

sq = sqrt(num);
printf("%.3f", sq);
}
