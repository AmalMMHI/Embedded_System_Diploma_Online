#include <stdio.h>

int main() {
    int m = 29;
    int *pab = &m;

    printf("Address of m: %p\n", &m);
    printf("Value of m: %d\n\n", m);

    printf("Address of pab: %p\n", pab);
    printf("Content of pab: %d\n\n", *pab);

    m = 34;
    printf("Address of pab: %p\n", pab);
    printf("Content of pab: %d\n\n", *pab);

    *pab = 7;
    printf("Address of m: %p\n", &m);
    printf("Value of m: %d\n", m);
}

