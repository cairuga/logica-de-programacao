#include <stdio.h>

int main() {

    //declaração das variáveis
    float numero1, numero2, numero3, media;

    //leitura do primeiro número
    printf("Informe o primeiro número: ");
    scanf("%f", &numero1);
    
    //leitura do segundo número
    printf("Informe o segundo número: ");
    scanf("%f", &numero2);
    
    //leitura do terceiro número
    printf("Informe o terceiro número: ");
    scanf("%f", &numero3);
    
    //cálculo da média e impressão
    media = (numero1 + numero2 + numero3) / 3;
    printf("A média dos números é %.1f.", media); 
    
    //usando %.1f formatamos o valor com 1 casa decimal!
    //mas isso só vale aqui no printf.

    return 0;
}
