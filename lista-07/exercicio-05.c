#include <stdio.h>

int main() {

    int i, tamanho;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    //Lendo o vetor
    for (i = 0; i < tamanho; i++) {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor original:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    for (i = 0; i < tamanho; i++) {
        if (i % 2 == 0) {
            vetor[i] = vetor[i] * 2;
        } else {
            vetor[i] = -vetor[i];
        }
    }

    printf("\nVetor transformado:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
