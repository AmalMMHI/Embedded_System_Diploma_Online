#include <stdio.h>
#include <string.h>

int main() {
    float radius, area;
    const float pi = 3.141;

    printf("Enter the radius:\t");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("Area = %.2f", area);
}




