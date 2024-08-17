#include<stdio.h>
void main(void){
    int i,j;
    float sum[2][2];
    float a[2][2];
    float b[2][2];

for (i=0; i<2; i++){
    for (j=0; j<2; j++){

    printf("Enter the elements of first matrix\n Enter a%d%d\t", i+1, j+1);
    scanf("%f", &a[i][j]);
    }
}
for (i=0; i<2; i++){
    for (j=0; j<2; j++){

    printf("Enter the selements of second matrix\n Enter b%d%d\t", i+1, j+1);
    scanf("%f", &b[i][j]);
    }
}
for (i=0; i<2; i++){
    for (j=0; j<2; j++){
   sum[i][j] = a[i][j] + b[i][j];

    }
}
printf("sum of matrix is\n %.2f\t %.2f\n %.2f\t %.2f\n", sum[0][0], sum[0][1], sum[1][0], sum[1][1]);

}   