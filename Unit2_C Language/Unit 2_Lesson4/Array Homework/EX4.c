#include<stdio.h>
void main(void){
    int n,i,j,x,location;
    int a[100];

    printf("Enter number of elements\t");
    scanf("%d", &n);

    printf("Element is\n");
for (i=0; i<n; i++){
    scanf("%d", &a[i]);
}
    printf("Enter the elements to be inserted\t");
    scanf("%d", &x);
    printf("Enter the location\t");
    scanf("%d", &location);

for (i=n; i>=location; i--){
        a[i] = a[i-1];
}

 a[location-1] = x;
 for (i=0; i<=n; i++){
    printf("\t");
    printf("%d", a[i]);
}
}

   