#include <stdio.h>

int main() {

    //declaração das variáveis
    int presentes, criancas, presentes_por_crianca, sobra;
    
    //leitura da quantidade de presentes
    printf("Quantos presentes foram arrecadados? ");
    scanf("%d", &presentes);
    
    //leitura da quantidada de crianças
    printf("Quantas crianças estão inscritas? ");
    scanf("%d", &criancas);
    
    //cálculos
    presentes_por_crianca = presentes / criancas;
    sobra = presentes % criancas;
    
    //impressão
    printf("Cada criança receberá %d presentes.\n", presentes_por_crianca);
    printf("Presentes que sobraram: %d", sobra);

    return 0;
}
