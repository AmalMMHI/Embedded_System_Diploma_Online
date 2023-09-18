#include <stdio.h>

int prime (int z){
    int a = 0;
    int j;
if (z==1){
    printf("1\t");
}
else{
for (j=1; j<=z; j++){
   if (z % j == 0){
    a++;
   }
        }

    if (a == 2){
printf("%d\t", z);
  }
}
}

void main(){
int x,y,i;

printf("Enter two numbers(intervals)");
scanf("%d %d", &x,&y);
printf("Prime numbers between %d and %d are:\t", x,y);

for (i=x; i<=y; i++){
  prime (i);  
}
}
