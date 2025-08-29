#include <stdio.h>
int main(void) {
int a , b, opcao ;
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

    switch (opcao) {

        case 1:
            printf("Soma : %d + %d = %.2f\n" , a, b , (float)a + (float)b);
            break;
        case 2:
            printf("Subtração : %d - %d = %.2f\n", a, b, (float)a - (float)b);
            break;
        case 3:
            printf("Multiplicao : %d * %d = %.2f\n", a, b, (float)a * (float)b);
            break;
        case 4:
            if (b != 0)
        {
            printf("Divisão : %d / %d = %.2f\n", a, b, (float)a / (float)b);
        } else {
            printf("Erro : divisão por Zero!\n");
        }
            break;
            default:
            printf("Opcao invalida!\n");
    }

    return 0;
}