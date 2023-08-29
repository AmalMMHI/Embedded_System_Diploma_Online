#include<stdio.h>
void main(void){
    int i,n,a=0;
    float average;
    //float a = 0;
    float sum =0;
    float A[100];

    printf("Enter the numbers of data\t");
    scanf("%d", &n);

for (i=0; i<n; i++){

    printf("Enter number\t");
    scanf("%f", &A[i]);
}
for (i=0; i<n; i++){
    sum += A[i];
 
}
     average = sum/n;
     printf("average is %.3f\n", average);
}
   