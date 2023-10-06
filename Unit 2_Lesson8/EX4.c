#include <stdio.h>
#include <string.h>

int main() {
    int i, size;
    char arr[100];
    char *ptr ;

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &size);
    printf("Input %d number of elements in the array : ", size);
    ptr = &arr[0];
    for (i=0; i<size; i++){
        printf("\nElement- %d: ", i+1);
        scanf("%d", ptr);
        ptr++;
    }
    ptr = &arr[size-1];
    printf("\nThe elements of an array in reverse order are: ");
    for (i=size-1; i>=0; i--){
        printf("\nElement- %d: %d ", i+1, *ptr);
        ptr--;
    }
}    

