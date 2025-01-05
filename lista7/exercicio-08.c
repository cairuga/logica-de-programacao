#include <stdio.h>

int main() {

    int i, qtd_alunos, aprovados, reprovados, recuperacao;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &qtd_alunos);

    float notas[qtd_alunos];

    //Lendo o vetor
    for (i = 0; i < qtd_alunos; i++) {
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);
    }

    aprovados = 0;
    reprovados = 0;
    recuperacao = 0;
    for (i = 0; i < qtd_alunos; i++) {
        if (notas[i] >= 6) {
            aprovados++;
        } else if (notas[i] >= 4) {
            recuperacao++;
        } else {
            reprovados++;
        }
    }

    printf("Alunos aprovados: %d", aprovados);
    printf("\nAlunos em recuperação: %d", recuperacao);
    printf("\nAlunos reprovados: %d", reprovados);

    return 0;
}
