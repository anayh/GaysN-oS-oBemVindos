#define NUM_OPERARIOS 15
#define SALARIO_MINIMO 1518.00

int main() {
    int vetNumOp[NUM_OPERARIOS];
    int vetNumPecas[NUM_OPERARIOS];
    int vetSexo[NUM_OPERARIOS];
    float vetSalarios[NUM_OPERARIOS];
    float folhaPagamento = 0.0;

    for (int i = 0; i < NUM_OPERARIOS; i++) {
        printf("\nOperário %d\n", i + 1);
        printf("Número do operário: ");
        scanf("%d", &vetNumOp[i]);

        printf("Número de peças fabricadas: ");
        scanf("%d", &vetNumPecas[i]);

        printf("Sexo (1 - Masculino, 2 - Feminino): ");
        scanf("%d", &vetSexo[i]);

        int pecas = vetNumPecas[i];

        if (pecas <= 30) {
            vetSalarios[i] = SALARIO_MINIMO;
        } else if (pecas <= 35) {
            vetSalarios[i] = SALARIO_MINIMO + (pecas - 30) * 0.03 * SALARIO_MINIMO;
        } else {
            vetSalarios[i] = SALARIO_MINIMO + (pecas - 30) * 0.05 * SALARIO_MINIMO;
        }

        folhaPagamento += vetSalarios[i];
    }

    for (int i = 0; i < NUM_OPERARIOS; i++) {
        printf("%d\t\t%d\t\t\t%.2f\n", vetNumOp[i], vetNumPecas[i], vetSalarios[i]);
    }
    printf("Total da folha de pagamento: R$ %.2f\n", folhaPagamento);

    return 0;
}
