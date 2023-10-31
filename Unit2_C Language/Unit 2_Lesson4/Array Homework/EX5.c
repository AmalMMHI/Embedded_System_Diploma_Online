#include<stdio.h>
void main(void){
    int n,i,x;
    int a[100];

    printf("Enter number of elements\t");
    scanf("%d", &n);

    printf("Element is\n");
for (i=0; i<n; i++){
    scanf("%d", &a[i]);
}
    printf("Enter the elements to be searched\t");
    scanf("%d", &x);
 
for (i=0; i<n; i++){
    if (x == a[i]){
        printf("Number found at the location = %d" ,i+1);
        continue;
    }
}
}

   