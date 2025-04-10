#include <stdio.h>

int main() {

    //declaração das variáveis
    int trabalhadores, horas;
    float valor_hora, servico;
    
    //leitura da quantidade de horas trabalhadas
    printf("Informe a duração do serviço (em horas): ");
    scanf("%d", &horas);
    
    //leitura do valor da hora trabalhada
    printf("Informe o valor da hora de trabalho: R$ ");
    scanf("%f", &valor_hora);
    
    //leitura da quantidade de trabalhadores
    printf("Informe a quantidade de trabalhadores: ");
    scanf("%d", &trabalhadores);
    
    //cálculo e impressão
    servico = trabalhadores * horas * valor_hora;
    printf("O valor total do serviço é R$ %.2f.", servico);

    return 0;
}
