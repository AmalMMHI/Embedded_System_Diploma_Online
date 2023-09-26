#include <stdio.h>
#include <string.h>

Power (int x, int y){
    if (y != 0){
        return (x*Power(x, y-1));
    }
else 
    return 1;
}

int main(){
    int x,y;
printf("Enter base number\t");
scanf("%d", &x);
printf("Enter power number (positive number)\t");
scanf("%d", &y);
printf("%d^%d = %d", x, y, Power(x,y));
return 0; 
}           