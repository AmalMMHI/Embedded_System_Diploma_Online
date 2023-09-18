#include <stdio.h>
#include <stdlib.h>

char reverse(char arr[], int size){
    int i;
    for (i=(size -1); i>=0; i--){
     printf("%d\t", arr[i]); 
    }
}
int main(){
    char arr[100];
    int size, i;
    char reverse(char arr[], int size);
printf("Enter the size of the array\t");
scanf("%d", &size);
printf("Enter the elements of the array\t");
for (i=0; i<size; i++){
    scanf("%d", &arr[i]);
}
reverse(arr, size);
}
