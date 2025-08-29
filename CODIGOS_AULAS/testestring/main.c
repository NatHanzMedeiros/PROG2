#include <stdio.h>
#include <string.h>

void main (void) {
    char string[256];
    int i;

    printf("Enter a string: ");
    gets (string);
    for (i = 0; string[i] != '\0'; i++) {
        putchar(string[i]);
    }
        printf("\nO numero de caracteres na string é %d \n", i);


}
