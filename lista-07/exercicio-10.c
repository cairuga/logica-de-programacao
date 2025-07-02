#include <stdio.h>

int main() {

    int i, qtd_alunos;
    float maior, menor, soma, media;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &qtd_alunos);

    float notas[qtd_alunos];

    //Lendo o vetor
    for (i = 0; i < qtd_alunos; i++) {
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);
    }

    maior = notas[0]; //assumimos que a maior nota é a do primeiro aluno
    menor = notas[0]; //assumimos que a menor nota é a do primeiro aluno
    soma = 0;
    for (i = 0; i < qtd_alunos; i++) {
        soma += notas[i];
        
        if (notas[i] > maior) {
            maior = notas[i];
        }
        
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }
    
    media = soma / qtd_alunos;

    printf("Média da turma: %.1f", media);
    printf("\nMaior nota: %.1f", maior);
    printf("\nMenor nota: %.1f", menor);

    return 0;
}
