#include <stdio.h>

int main() {

    int i, tamanho;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    //Preenchendo o vetor
    for (i = 0; i < tamanho; i++) {
        vetor[i] = i + 1;
    }

    printf("Vetor na ordem original:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    
    printf("\nVetor na ordem inversa:\n");
    for (i = tamanho - 1; i >=0; i--) {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}
