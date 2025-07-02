#include <stdio.h>

int main() {

    int inicial, final;
    int soma = 0;
    
    printf("Digite o valor inicial: ");
    scanf("%d", &inicial);

    printf("Digite o valor inicial: ");
    scanf("%d", &final);

    for (int i=inicial; i<=final; i++) {
        if (i % 2 == 0) {
            soma = soma + i;
        }
    }
    
    printf("A soma dos pares no intervalo é: %d", soma);
    
    return 0;
}
