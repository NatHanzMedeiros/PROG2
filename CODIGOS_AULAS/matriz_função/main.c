#include <stdio.h>

void exibe_matriz(int valores[], int numero_de_elementos)
{
    int i;
    for(i = 0; i < numero_de_elementos; i++){
    printf("%d\n", valores[i]);
}


int main(void) {
    int notas[5] = {1, 2, 3, 4, 5};
    exibe_matriz(notas, 5);
}