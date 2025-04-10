#include <stdio.h>

int main() {

    //declaração das variáveis
    float valor_basico, consumo, preco_m3, tarifa;
    
    //leitura do valor do serviço básico
    printf("Informe o valor do serviço básico: R$ ");
    scanf("%f", &valor_basico);
    
    //leitura do volume de água consumida
    printf("Informe o volume (m3) de água consumido: ");
    scanf("%f", &consumo);
    
    //leitura do preço do metro cúbico de água
    printf("Informe o preço do metro cúbuco de água: R$ ");
    scanf("%f", &preco_m3);
    
    //cálculo e impressão
    tarifa = valor_basico + (consumo * preco_m3);
    printf("A tarifa de água é R$ %.2f.", tarifa);
    // %.2f formata o valor com duas casas descimais
    // nesse caso, o uso de parênteses no cálculo 
    // é desnecessário em função da precedência dos operadores
    
    return 0;
}
