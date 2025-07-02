#include <stdio.h>

int main() {

    int inicial, final;
    int quantidade = 0;

    printf("Digite o valor inicial: ");
    scanf("%d", &inicial);

    printf("Digite o valor final: ");
    scanf("%d", &final);

    for (int i=inicial; i<=final; i++) {
        if (i % 3 == 0) {
            quantidade = quantidade + 1;
        }
    }
    
    printf("Números divisíveis por 3 no intervalo: %d", quantidade);
    return 0;
}
