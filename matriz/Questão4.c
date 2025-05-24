#include <stdio.h>

#define ALUNOS 5
#define QUESTOES 10

int main() {
    char respostas[ALUNOS][QUESTOES];
    char gabarito[QUESTOES];
    int resultado[ALUNOS] = {0};

    printf("Gabarito:\n");
    for (int i = 0; i < QUESTOES; i++) {
        scanf(" %c", &gabarito[i]);
    }

    for (int i = 0; i < ALUNOS; i++) {
        printf("Respostas do aluno %d:\n", i + 1);
        for (int j = 0; j < QUESTOES; j++) {
            scanf(" %c", &respostas[i][j]);
            if (respostas[i][j] == gabarito[j])
                resultado[i]++;
        }
    }

    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d: %d acertos\n", i + 1, resultado[i]);
    }

    return 0;
}
