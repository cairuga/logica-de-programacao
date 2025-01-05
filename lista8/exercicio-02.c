#include <stdio.h>

int main() {

    int ordem, lin, col, soma;
    
    printf("Informe a ordem da matriz quadrada: ");
    scanf("%d", &ordem);
    
    int matriz[ordem][ordem];
    
    //leitura da matriz
    for (lin = 0; lin < ordem; lin++) {
        for (col = 0; col < ordem; col++) {
            printf("Informe o elemento da linha %d coluna %d: ", lin, col);
            scanf("%d", &matriz[lin][col]);
        }
    }

    soma = 0;
    for (lin = 0; lin < ordem; lin++) {
        for (col = 0; col < ordem; col++) {
            if (lin == col) {
                soma += matriz[lin][col];
            }
        }
    }
    printf("\nA soma da diagonal principal é %d", soma);

    return 0;
}
