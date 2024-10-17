#include <stdio.h>

int main() {

    int numero;
    
    printf("Informe um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf ("%d é par!", numero);
    } else {
        printf ("%d é ímpar!", numero);
    }
    
    return 0;
}
