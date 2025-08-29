#include <stdio.h>

int main()
{
    int alfa = 10;
    int *ptr1;
    int *(*ptr2);

    ptr1 = &alfa;
    printf("O endereço de alfa é: %p\n", &alfa);
    printf("O endereço do ptr1 é: %p\n", &ptr1);
    printf("Prt1 aponta para: %p\n", ptr1);
    printf("Prt1 tem: %d\n", *ptr1);

    ptr2 = &ptr1;
    printf("Prt2 aponta para: %p\n", ptr2);
    printf("O valor de alfa via ptr2: %d\n", *(*ptr2));

    return 0;
}
