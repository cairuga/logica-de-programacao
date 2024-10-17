#include <stdio.h>

int main() {

    float lado1, lado2, lado3;

    printf("Informe o primeiro lado: ");
    scanf("%f", &lado1);
    
    printf("Informe o segundo lado: ");
    scanf("%f", &lado2);
    
    printf("Informe o terceiro lado: ");
    scanf("%f", &lado3);
    
    if (lado1 < 0 || lado2 < 0 || lado3 < 0) {
        printf("Valores inválidos!");
    } else {
        //testa se os três lados são iguais
        if (lado1 == lado2 && lado2 == lado3 ) {
            printf("É um triângulo equilátero!");
        } else {
            // testa se dois lados quaisquer são iguais
            if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
                printf("É um triângulo isósceles!");
            } else {
                printf("É um triângulo escaleno!");
            }
        }
    }

    return 0;
}
