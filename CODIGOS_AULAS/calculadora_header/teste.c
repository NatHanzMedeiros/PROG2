#include "teste.h"
#include <stdio.h>


float soma(int a, int b) {
    return  a + b ;
}

float subtração(int a, int b) {
    return a - b;
}

float multiplicação(int a, int b) {
    return a * b;
}

float divisão(int a, int b) {
    if (b != 0) {
        return (float) a / b;
    } else {
        printf("ERRO: Divisão por Zero!\n");
        return 0;
    }

}