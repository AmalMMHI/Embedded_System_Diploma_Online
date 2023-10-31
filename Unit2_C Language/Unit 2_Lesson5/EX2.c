#include <stdio.h>

int factorial (int z){
 static int f = 1;
 int i;
 f *=z;
 --z;
 if (z>0){
 factorial (z);
 }
 else {
printf("the factorial is %d", f);
 }
}
void main(){
int x;
printf("Enter a positive integer");
scanf("%d", &x);
factorial(x);  
}
