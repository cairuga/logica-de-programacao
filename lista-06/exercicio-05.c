#include <stdio.h>

int main() {

    int provas;
    float nota, media;
    float soma = 0;
    
    printf("Informe a quantidade de provas: ");
    scanf("%d", &provas);

    int i = 1;
    while (i<=provas) {
        printf("Informe a nota da prova %d: ", i);
        scanf("%f", &nota);
        soma = soma + nota;
        i++;
    }
    
    media = soma / provas;
    
    printf("A média das notas das provas é: %.2f", media);
    
    return 0;
}
