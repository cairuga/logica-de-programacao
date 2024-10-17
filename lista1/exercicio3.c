#include <stdio.h>

int main() {

    float basico, valor_metro, consumo, tarifa;
    
    printf("Informe o valor do serviço básico: ");
    scanf("%f", &basico);

    printf("Informe o valor do metro cúbico de água: ");
    scanf("%f", &valor_metro);

    printf("Informe o consumo (m3) de água: ");
    scanf("%f", &consumo);

    tarifa = basico + (consumo * valor_metro);
    
    printf("A tarifa de água do usuário é %.2f", tarifa);

    return 0;
}
