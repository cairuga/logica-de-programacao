#include <stdio.h>

int main() {

    float tempC, tempF;
    
    printf("Informe a temperatura em °C: ");
    scanf("%f", &tempC);

    tempF = (tempC * 9 / 5) + 32;
    
    printf("A temperatura em °F é %.1f", tempF);

    return 0;
}
