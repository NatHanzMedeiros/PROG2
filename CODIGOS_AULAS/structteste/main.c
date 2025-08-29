#include <stdio.h>

struct produto {
    int cod;      // código do produto
    float valor;  // valor do produto
};

int main() {
    struct produto p;

    // Solicita os dados do produto
    printf("Digite o código do produto: ");
    scanf("%d", &p.cod);

    printf("Digite o valor do produto: ");
    scanf("%f", &p.valor);

    // Exibe os dados cadastrados
    printf("\nProduto cadastrado:\n");
    printf("Código: %d\n", p.cod);
    printf("Valor: %.2f\n", p.valor);

    return 0;
}
