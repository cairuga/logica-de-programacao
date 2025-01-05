#include <stdio.h>

int main() {

    int ordem, lin, col;
    
    printf("Informe a ordem da matriz quadrada: ");
    scanf("%d", &ordem);
    
    int matriz[ordem][ordem];
    
    //criando aa matriz
    for (lin = 0; lin < ordem; lin++) {
        for (col = 0; col < ordem; col++) {
            if (lin == col) {
                matriz[lin][col] = 1;
            } else {
                matriz[lin][col] = 0;    
            }
        }
    }

    for (lin = 0; lin < ordem; lin++) {
        for (col = 0; col < ordem; col++) {
            printf("%d ", matriz[lin][col]);
        }
        printf("\n");
    }

    return 0;
}
