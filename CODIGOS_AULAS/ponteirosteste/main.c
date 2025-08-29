#include <stdio.h>

int main(void) {
    int x = 1 , y =2 ;
    int *p , *q;
    p = &x;
    y = *p;
    *p = 0;
    q = p;
    *q = 20;

    printf("Valor de i = %d\n", x);
    printf("Valor de j = %d\n", y);
    printf("Valor de p = %p\n", p);
    printf("Valor de p = %p\n", q);
}