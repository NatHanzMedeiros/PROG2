#include <stdio.h>

void mostra(int *p , int n) { // p é um ponteiro para int
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

}

int main() {
    int notas[5] = {10, 20, 30, 40, 50};

    mostra(notas ,5); // 'notas' DECai para '&notas[0]'

    return 0;
}
