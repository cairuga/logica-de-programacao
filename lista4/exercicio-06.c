#include <stdio.h>

int main() {

    int quantidade;
    
    printf("Quantos ímpares deseja imprimir? ");
    scanf("%d", &quantidade);
    
    int impar = 1; //primeiro ímpar
    
    //veja que i é apenas um contador
    // que vai de 1 até a qunatidade informada
    for (int i=1; i<=quantidade; i++) {
        printf("%d ", impar);
        impar = impar + 2; //o próximo ímpar
    }

    return 0;
}
