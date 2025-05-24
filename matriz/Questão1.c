#include <stdio.h>
#include <stdbool.h>

#define TAM 9
bool verificarTamanho(int vetor[]) {
    int contador[10] = {0};

    for (int i = 0; i < TAM; i++) {
        int tamanho = vetor[i];
        if (tamanho < 1 || tamanho > 9 || contador[tamanho] > 0) {
            return false;
        }
        contador[tamanho]++;
    }
    return true;
}

bool verificarLinhas(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        if (!verificaTamanho(matriz[i])) {
            return false;
        }
    }
    return true;
}

bool verificarColunas(int matriz[TAM][TAM]) {
    for (int j = 0; j < TAM; j++) {
        int coluna[TAM];
        for (int i = 0; i < TAM; i++) {
            coluna[i] = matriz[i][j];
        }
        if (!verificaTamanho(coluna)) {
            return false;
        }
    }
    return true;
}

bool verificarBlocos(int matriz[TAM][TAM]) {
    for (int linha = 0; linha < TAM; linha += 3) {
        for (int coluna = 0; coluna < TAM; coluna += 3) {
            int bloco[TAM];
            int k = 0;
            for (int i = linha; i < linha + 3; i++) {
                for (int j = coluna; j < coluna + 3; j++) {
                    bloco[k++] = matriz[i][j];
                }
            }
            if (!verificaTamanho(bloco)) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matriz[TAM][TAM];

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    if (verificarLinhas(matriz) && verificarColunas(matriz) && verificarBlocos(matriz)) {
        printf("A matriz poder ser um Sodoku.\n");
    } else {
        printf("A matriz NÃO pode ser um Sudoku.\n");
    }

    return 0;
}
