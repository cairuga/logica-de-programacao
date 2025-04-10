#include <stdio.h>

int main() {

    //declaração das variáveis
    float base, altura, area;
    
    //leitura da base
    printf("Informe a medida da base do triângulo: ");
    scanf("%f", &base);
    
    //leitura da altura
    printf("Informe a medida da altura do triângulo: ");
    scanf("%f", &altura);
    
    //cálculo e impressão
    area = (base * altura) / 2;
    printf("A área do triângulo é %.1f.", area);

    return 0;
}
