#include <stdio.h>

int main() {

    int i, tamanho, divisor, divisiveis;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    //Lendo o vetor
    for (i = 0; i < tamanho; i++) {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }

    printf("Informe o divisor: ");
    scanf("%d", &divisor);
    
    divisiveis = 0;
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] % divisor == 0) {
            divisiveis = divisiveis + 1;
        } 
    }

    printf("Números divisíveis por %d: %d", divisor, divisiveis);

    return 0;
}
