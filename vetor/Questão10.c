#include <stdio.h>
#include <stdbool.h>

#define TAM 50

bool ehPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int conjunto[TAM];
    int conjunto2[TAM]; 
    int c = 0;

    for (int i = 0; i < TAM; i++) {
        conjunto[i] = i + 1;

        if (ehPrimo(conjunto[i])) {
            conjunto2[c] = conjunto[i];
            c++;
        }
    }

    for (int i = 0; i < TAM; i++) {
        printf("%d \n", conjunto[i]);
    }
    printf("Primos:");
    for (int i = 0; i < c; i++) {
        printf("%d ", conjunto2[i]);
    }

    return 0;
}
