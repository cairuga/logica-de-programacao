#include <stdio.h>

int main() {
    
    int quantidade;
    int i = 1;
    int numero = 1;
    
    printf("Informe quanto números ímpares: ");
    scanf("%d", &quantidade);
    
    while (i <= quantidade) {
        printf("%d ", numero);
        numero = numero + 2;
        i++;
    }

    return 0;
}
