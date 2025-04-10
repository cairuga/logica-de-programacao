#include <stdio.h>

int main() {

    //declaração das variáveis
    float celcius, fahrenheit;
    
    //leitura da temperatura em Celcius
    printf("Informe a temperatura em °C: ");
    scanf("%f", &celcius);
    
    //cálculo
    fahrenheit = 32 + (9 * celcius) / 5;
    
    //impressão
    printf("A temperatura em °F é igual a %.1f.", fahrenheit);

    return 0;
}
