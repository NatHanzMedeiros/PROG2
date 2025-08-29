#include <stdio.h>

int main(void) {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int *ptr = &matriz[0][0];  // ponteiro para o primeiro elemento


    for (int i = 0; i < 9; i++) {
        printf("%d ", *(ptr + i)); // acessa cada elemento sequencialmente

        if ((i + 1) % 3 == 0)       // quebra de linha a cada 3 elementos
            printf("\n");
    }

    return 0;
}
