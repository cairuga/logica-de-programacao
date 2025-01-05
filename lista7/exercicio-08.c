#include <stdio.h>

int main() {

    int i, qtd_alunos, maiores;
    float soma, media; //soma é float para forçar divisão decimal

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &qtd_alunos);

    int idades[qtd_alunos];

    //Lendo o vetor
    for (i = 0; i < qtd_alunos; i++) {
        printf("Digite a idade: ");
        scanf("%d", &idades[i]);
    }

    maiores = 0;
    soma = 0;
    for (i = 0; i < qtd_alunos; i++) {
        if (idades[i] >= 18) {
            maiores++;
            soma += idades[i];
        } 
    }
    
    media = soma / maiores;

    printf("idade média dos alunos maiores de idade: %.1f", media);

    return 0;
}
