#include <stdio.h>

int main() {
    int i;
    char arr[26];
    char *ptr = arr ;

    for(i=0; i<26; i++){
        *ptr = i + 'A';
        ptr++;
    }
ptr = arr;
printf("The Alphabets are:\n");
    for(i=0; i<26; i++){
    printf(" %c ", *ptr);
        ptr++;
    }
}    

