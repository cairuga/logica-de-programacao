#include <stdio.h>

int main() {

    int provas;
    float nota, peso, media;
    float soma_notas = 0;
    float soma_pesos = 0;
    
    printf("Informe a quantidade de provas: ");
    scanf("%d", &provas);

    for (int i=1; i<=provas; i++) {
        printf("Informe a nota da prova %d: ", i);
        scanf("%f", &nota);
        printf("Informe o peso da prova %d: ", i);
        scanf("%f", &peso);
        soma_notas = soma_notas + (nota * peso);
        soma_pesos = soma_pesos + peso;
    }
    
    media = soma_notas / soma_pesos;
    
    printf("A média das notas das provas é: %.2f", media);
    
    return 0;
}
