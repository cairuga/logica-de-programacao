#include <stdio.h>

int main() {

    char conceito;

    printf("Informe o conceito do aluno: ");
    scanf("%c", &conceito);
    
    switch(conceito) {
        case 'A':
            printf("Você foi aprovado com nota superior a 9.");
            break;
        case 'B':
            printf("Você foi aprovado com nota entre 7,5 e 9.");
            break;
        case 'C':
            printf("Você foi aprovado com nota entre 6 e 7,5.");
            break;
        case 'D':
            printf("Você está reprovado mas pode fazer uma reavaliação.");
            break;
        case 'E':
            printf("Você foi reprovado com nota inferior a 4.");
            break;
        default:
            printf("Conceito inválido!");
    }
    return 0;
}
