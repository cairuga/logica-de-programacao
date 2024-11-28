#include <stdio.h>

int main() {
    int alunos, resposta;
    float maior, menor;
    float nota, soma, media;
    float media_geral;
    int turmas = 0;
    float soma_geral = 0;

    do {
        printf("Informe a quantidade de alunos: ");
        scanf("%d", &alunos);
        
        maior = 0;
        menor = 10;
        soma = 0;
        for (int i=1; i<=alunos; i++) {
            printf("Informe a nota %d: ", i);
            scanf("%f", &nota);
            
            soma = soma + nota;
            
            if (nota > maior) {
                maior = nota;
            } 
            
            if (nota < menor) {
                menor = nota;
            }
        }
        media = soma / alunos;
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Média da turma: %.2f\n", media);
        
        turmas = turmas + 1;
        soma_geral = soma_geral + media;
        
        printf("Deseja calcular outra turma? 1-sim: ");
        scanf("%d", &resposta);
        
    } while (resposta == 1);

    media_geral = soma_geral / turmas;
    
    printf("Turmas calculadas: %d\n", turmas);
    printf("Média das turmas: %.2f", media_geral);
    
    return 0;
}
