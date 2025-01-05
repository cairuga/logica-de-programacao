#include <stdio.h>

int main() {

    int i, qtd_alunos;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &qtd_alunos);

    float notas[qtd_alunos];

    //Lendo o vetor
    for (i = 0; i < qtd_alunos; i++) {
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);
    }

    printf("Notas dos aprovados: ");
    for (i = 0; i < qtd_alunos; i++) {
        if (notas[i] >= 6) {
            printf("%.1f ", notas[i]);
        }
    }

    printf("\nNotas dos reprovados: ");
    for (i = 0; i < qtd_alunos; i++) {
        if (notas[i] < 6) {
            printf("%.1f ", notas[i]);
        }
    }

    return 0;
}
