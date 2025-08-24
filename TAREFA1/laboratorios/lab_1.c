#include "header/lab_1.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ex_1() {
    printf("Exercicio 1\n");
    int *p;
    int a = 5;
    p = &a;
    printf("O valor da variavel é %d\n", *p);
    printf("O valor do endereço apontado é %p\n", p);
    return 0;
}

int ex_2() {
    printf("\n");
    printf("Exercicio 2\n");
    int array[5] = {20, 25, 30, 35, 40};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int *p;
    p = &array[0];
    for (int i = 0 ; i < tamanho; i++) {
    printf("Os valores do array são %d\n", *(p+i) );
    }
}

int ex_3() {
    printf("\n");
    printf("Exercicio 3\n");
    int alfa = 10;
    printf("O valor de alfa original é : %d\n", alfa);
    int *p;
    p = &alfa;
    *p = 20;
    printf("O valor modificado agora é : %d\n", alfa);
}

int ex_4() {
    printf("\n");
    printf("Exercicio 4\n");
    int tamanho = 5;
    int *array;
    array = malloc(tamanho * sizeof(int));
    int *p;
    p = array;

    for (int i = 0; i < tamanho; i++) {
        printf("Digite um elemento numeral inteiro %d: ", i+1);
        scanf("%d", &*(p+i));


        // acho importante frisar este funcionamento para não me esquecer:
        //p + i , aponta para o primeiro espaço do meu array, ja que "p" tem o endereço
        //do primeiro elemento do meu array/vetor, e como i = 0 no começo do loop,
        //logo eu aponto pro primeiro item do array/vetor.

        //*(p + i) com o "*" eu desrefenrecio esse ponteiro
        //passo a ter acesso ao conteudo que tem dentro do respectivo endereço,
        //e como ainda não tenho nada, então sera redundante à algo sem valor ou lixo.
        // alem de poder ver posso tambem posso manipular ele.

        //&*(p + i) e com o "&" eu tenho o edenreço de memoria referente a quem esta sendo apontado
        //por (p + i) e com o scanf eu armazeno o que foi digitado neste endereço de memoria!!
    }
    printf("\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Os elementos são %d\n", *(p+i));
    }
  free(array);
}
//
void swap(int *a, int *b) {
    int antes = *a;
    *a = *b;
    *b = antes;
}

int ex_5() {
    printf("\n");
    printf("Exercicio 5\n");
    int x = 10 , y = 20;
    printf("Antes da troca x = %d e y = %d\n", x , y);
    swap(&x, &y);
    printf("Depois da troca x = %d e y = %d\n", x , y);
    return 0;
}
//

int ex_6() {
    printf("\n");
    printf("Exercicio 6\n");
    char string[20] = "Eu sou nathan";
    char *p;
    p = string;
    for (int i = 0; *(p + i) != '\0'; i++) {
        if (*(p + i) != ' ') {
            printf("Caractere %d = %c\n", i + 1, *(p + i));
        }
    }
return 0;
}

int ex_7() {
    printf("\n");
    printf("Exercicio 7\n");
    int linhas, colunas;
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &colunas);
    printf("\n");

    int **mat;
    mat = malloc(linhas * sizeof(int*));

    for (int i = 0; i < linhas; i++) {
        mat[i] = malloc(colunas * sizeof(int));
    }
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o elemento [%d] [%d] : ", i+1, j+1);
            scanf("%d", &*(*(mat + i) + j));
        }
    }
    printf("\n Matriz Feita! : \n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
    for (int i = 0; i < linhas; i++) {
        free(*(mat + i));
    }
free(mat);
    return 0;
}

int ex_8() {
    printf("\n");
    printf("Exercicio 8\n");

    int *vetor , tamanho = 5;
    vetor = malloc(tamanho * sizeof(int));
    for (int i = 0; i < tamanho; i++) {
        printf("Digite um elemento numero %d: ", i+1);
        scanf("%d", &*(vetor + i));
    }
    printf("\n");
    for (int i = 0; i < tamanho; i++) {
        printf("O elemento %d é: %d\n ", i+1, *(vetor + i));
    }
    printf("\n");
    printf("Realoquei o vetor para aramazenar mais 5 numeros!\n");
    int tamanhonovo = tamanho + 5;
    vetor = realloc(vetor, tamanhonovo * sizeof(int));

    for (int i = tamanho; i < tamanhonovo; i++) {
        printf("Digite os novos elementos %d: ", i+1);
        scanf("%d", &*(vetor + i));
    }
    printf("\n");
    printf("O vetor agora é\n");
    for (int i = 0; i < tamanhonovo; i++) {
        printf("O elemento %d é: %d\n" , i+1, *(vetor + i));
    }
    free(vetor);
    return 0;
}

int ex_9() {
    printf("\n");
    printf("Exercicio 9\n");

    char nomearquivo[50];
    char texto[100];
    FILE *arq;
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomearquivo);

    printf("Digite o texto do arquivo: ");
    getchar();
    fgets(texto, sizeof(texto), stdin);

    arq = fopen(nomearquivo, "w");
    if (arq == NULL) {
        printf("Erro na abertura do arquivo\n");
        return 1;
    }
    fputs(texto , arq);
    fclose(arq);
    printf("Texto escrito com sucesso!\n");
    return 0;
}
int ex_10() {
    printf("\n");
    printf("Exercicio 10\n");

    char nomeArquivo[50];
    char linha[100];
    FILE *arq;
    printf("Digite o nome do arquivo que deseja ler: ");
    scanf("%s", nomeArquivo);

    arq = fopen(nomeArquivo, "r");
    if (arq == NULL) {
        printf("Erro: não foi possível abrir o arquivo ou não existe '%s'.\n", nomeArquivo);
        return 1;
    }

    printf("\n O que esta escrito no arquivo é '%s':\n\n", nomeArquivo);

    while (fgets(linha, sizeof(linha), arq) != NULL) {
        printf("%s", linha);
    }
    fclose(arq);
    printf("\nLeitura concluída.\n");
    return 0;
}

int ex_11() {

    printf("\n");
    printf("Exercicio 11\n");

    char arquivoOrigem[50] , arquivoDestino[50];
    char caracteres;
    FILE *arqOrigem;
    FILE *arqDestino;

    printf("Digite o nome do arquivo de origem: ");
    scanf("%s", arquivoOrigem);

    printf("Digite o nome do arquivo de destino: ");
    scanf("%s", arquivoDestino);

    arqOrigem = fopen(arquivoOrigem, "r");
    if (arqOrigem == NULL) {
        printf("Erro: não foi possível abrir o arquivo ou não existe '%s'.\n", arqOrigem);
        return 1;
    }

    arqDestino = fopen(arquivoDestino, "w");
    if (arqDestino == NULL) {
        printf("Erro: não foi possível criar o arquivo '%s'\n", arquivoDestino);
        return 1;
    }

    while ((caracteres = fgetc(arqOrigem)) != EOF) {
        fputc(caracteres, arqDestino);

    }
    printf("Arquivo copiado com sucesso!\n");
    fclose(arqOrigem);
    fclose(arqDestino);

    ex_10(); //Para verificar se realmente foi copiado!!

    return 0;




}