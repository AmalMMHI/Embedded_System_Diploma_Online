#include<stdio.h>
void main(void){
    int i,j,r,c;
    int a[100][100];
    int t[100][100];

    printf("Enter rows and colums of the matrix\t");
    scanf("%d %d", &r ,&c);

printf("Enter element of the matrix\n");
for (i=0; i<r; i++){
    for (j=0; j<c; j++){
    printf("Enter element a%d%d\t", i+1 , j+1);
    scanf("%d", &a[i][j]);
}
}
printf("Entered matrix\n");
for (i=0; i<r; i++){
    for (j=0; j<c; j++){

    printf("%d\t", a[i][j]);
}
printf("\n");
}

printf("Transpose of matrix\n");     
 for (i=0; i<c; i++){
    for (j=0; j<r; j++){
     t[i][j] = a[j][i];
}
}

for (i=0; i<c ; i++){
    for (j=0; j<r; j++){
    printf("%d\t", t[i][j]);
}
printf("\n");
}    
}
   