#include<stdio.h>
#include<string.h>


int no_of_ones(int num){
        static int i = 0;
        static int x = 0;
        int bit;

        bit = num >> i;
        bit &= 1;
    if(bit == 1){
        x += 1;
    }
    ++i;
    while(i<4){
    no_of_ones(num);
    }
    return x;
}


int main(){
    char bit[100];
    int num;
    int no_of_ones(int num);

 printf("Enter the number\t"); 
 scanf("%d", &num);  
printf("%d", no_of_ones(num));
}
