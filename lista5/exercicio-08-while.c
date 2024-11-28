#include <stdio.h>

int main() {

    int numero = 1;

    while (numero != 0) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        
        if (numero < 0) {
            printf("NEGATIVO\n");
        } else if (numero > 0) {
            printf("POSITIVO\n");
        } 
    }
    return 0;
}
