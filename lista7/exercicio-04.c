#include <stdio.h>

int main() {

    float soma, media; //soma é float para forçar divisáo decimal
    int i, tamanho;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    //Lendo o vetor
    for (i = 0; i < tamanho; i++) {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }

    soma = 0;
    for (i = 0; i < tamanho; i++) {
        soma = soma + vetor[i];
    }
    media = soma / tamanho;
    
    
    printf("A média dos elementos é %.1f", media);
    
    
    return 0;
}
