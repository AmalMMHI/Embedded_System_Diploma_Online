#include <stdio.h>

int max_of_ones(int x) {
    int ones_count = 0;
    int max_count = 0;
    int arr[32];
    for (int i = 31; i >= 0; i--) {
        if ((x >> i) & 1)
           arr[i] = 1;
        else
           arr[i] = 0;}
    for(int i = 0; i < 32; i++){
        if (arr[i] == 1)
            ones_count++;
        else if (ones_count > max_count){
            max_count = ones_count;
            ones_count = 0;
        }}
   return max_count;}
int main() {
    int x;
    int max_of_ones(int x);
    printf("Enter number: ");
    scanf("%d", &x);
    printf("Maximum number of ones between two zeroes is %d", max_of_ones(x));
    return 0;
}

