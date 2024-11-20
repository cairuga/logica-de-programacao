#include <stdio.h>

int main() {

    int quantidade;
    float nota;

    
    printf("Informe a quantidade de notas: ");
    scanf("%d", &quantidade);

    float maior = 0; 
    for (int i=1; i<=quantidade; i++) {
        printf("Informe a nota %d: ", i);
        scanf("%f", &nota);
        if (nota > maior) {
            maior = nota;
        }
    }
    
    printf("A maior nota é: %.2f", maior);
    
    return 0;
}
