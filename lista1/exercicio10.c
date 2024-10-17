#include <stdio.h>

int main() {

    float nota;
    
    printf("Informe a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 9) {
        printf("O conceito do aluno é A");
    } else if (nota >= 7.5) {
        printf("O conceito do aluno é B");
    } else if (nota >= 6) {
        printf("O conceito do aluno é C");
    } else if (nota >= 4) {
        printf("O conceito do aluno é D");
    } else {
        printf("O conceito do aluno é E");
    }

    return 0;
}
