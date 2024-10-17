#include <stdio.h>

int main() {

    float nota, frequencia;
    
    printf("Informe a nota do aluno: ");
    scanf("%f", &nota);

    printf("Informe a frequência do aluno: ");
    scanf("%f", &frequencia);

    if (nota >= 6 && frequencia >= 75) { 
        printf("O aluno foi aprovado!");
    } else {
        if (nota >= 6) {
            printf("Reprovado por frequência!");
        } else {
            if (frequencia >= 75) {
                printf("Reprovado por nota!");
            } else {
                printf("Reprovado por nota e frequência!");
            }
        }
    }        
    
    /* SOLUÇÃO ALTERNATIVA 1
    if (nota >= 6 && frequencia >= 75) {
        printf("O aluno foi aprovado!");
    } else {
        if (nota < 6 && frequencia < 75) {
            printf("Reprovado por nota e frequência!");
        } else {
            if (nota < 6) {
                printf("Reprovado por nota!");
            } else {
                printf("Reprovado por frequência!");
            }
        }
    }
    */

    /* SOLUÇÃO ALTERNATIVA 2
    if (nota >= 6) { 
        if (frequencia >= 75) {
            printf("O aluno foi aprovado!");
        } else {
            printf("Reprovado por frequência!");
        }
    } else {
        if (frequencia >= 75) {
            printf("Reprovado por nota");
        } else {
            printf("Reprovado por nota e frequência!");
        }
    }
    */
    
    /* SOLUÇÃO ALTERNATIVA 3
    if (nota >= 6 && frequencia >= 75) {
        printf("O aluno foi aprovado!");
    } else if (nota >= 6 && frequencia < 75) {
        printf("Reprovado por frequência!");
    } else if (nota < 6 && frequencia >= 75) {
        printf("Reprovado por nota!");
    } else {
        printf("Reprovado por nota e frequência!");
    }
    */
    
    return 0;
}
