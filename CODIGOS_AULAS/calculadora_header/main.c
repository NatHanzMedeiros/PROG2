#include <stdio.h>
#include "teste.h"

int main(void) {
    int a, b, opcao;
    printf("Digite o valor para a: ");
    scanf("%d" , &a);

    printf("Digite o valor para b: ");
    scanf("%d" , &b);

    printf("\n Escolha sua operação: \n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Digite sua opção 1 a 4: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Soma: %.2f\n", soma(a, b));
            break;
        case 2:
            printf("Subtração: %.2f\n", subtração(a, b));
            break;
        case 3:
            printf("Multiplicação: %.2f\n", multiplicação(a, b));
            break;
        case 4:
            printf("Divisão: %.2f\n", divisão(a, b));
            break;
        default:
            printf("Opção inválida!\n");
    }


    return 0;
}