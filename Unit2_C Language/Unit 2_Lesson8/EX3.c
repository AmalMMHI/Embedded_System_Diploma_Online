#include <stdio.h>
#include <string.h>

int main() {
    int i, size;
    char str[100];
    char *pstr = str;

    printf("Pointer : Print a string in reverse order :");
    printf("\nInput a string :");
    gets(str);

    size = strlen(str);
    pstr = &str[size-1];
    printf("\nReverse of the string is: ");
    for (i=size-1; i>=0; i--){
        printf("%c", *pstr);
        pstr--;
    }
}    

