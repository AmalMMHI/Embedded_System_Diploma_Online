#include <stdio.h>
#include <stdlib.h>

int sum_of_num(int i){
    static int sum = 0;
    sum += i;
    ++i;
    if(i <= 100){
    sum_of_num(i);
    }
     return sum;
}
int main(){
    int sum =0;
printf("the sum is %d", sum_of_num(sum));
}
