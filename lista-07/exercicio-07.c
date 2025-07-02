#include <stdio.h>

int main() {

    int i, qtd_alunos, maiores, menores;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &qtd_alunos);

    int idades[qtd_alunos];

    //Lendo o vetor
    for (i = 0; i < qtd_alunos; i++) {
        printf("Digite a idade: ");
        scanf("%d", &idades[i]);
    }

    maiores = 0;
    menores = 0;
    for (i = 0; i < qtd_alunos; i++) {
        if (idades[i] >= 18) {
            maiores++;
        } else {
            menores++;
        }
    }

    printf("Alunos maiores de idade: %d", maiores);
    printf("\nAlunos menores de idade: %d", menores);

    return 0;
}
