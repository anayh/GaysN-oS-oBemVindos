#include <stdio.h>

#define TAM 3

int main() {
    int tabuleiro[TAM][TAM];
    int jogada = 0;

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &tabuleiro[i][j]);
        }
    }

    for (int i = 0; i < TAM && !jogada; i++) {
        for (int j = 0; j < TAM && !jogada; j++) {
            if (tabuleiro[i][j] == 0) {
                printf("Proxima jogada: linha %d, coluna %d\n", i, j);
                jogada = 1;
            }
        }
    }

    if (!jogada)
        printf("Tabuleiro cheio, nenhuma jogada possível.\n");

    return 0;
}
