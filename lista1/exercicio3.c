#include <stdio.h>

int main() {

    float basico, valorM3, consumo, tarifa;
    
    printf("Informe o valor do serviço básico: ");
    scanf("%f", &basico);

    printf("Informe o valor do metro cúbico de água: ");
    scanf("%f", &valorM3);

    printf("Informe o consumo (m3) de água: ");
    scanf("%f", &consumo);

    tarifa = basico + (consumo * valorM3);
    
    printf("A tarifa de água do usuário é %.2f", tarifa);

    return 0;
}
