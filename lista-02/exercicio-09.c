#include <stdio.h>

int main() {

    //declaração das variáveis
    float valor_comanda, taxa_percentual, valor_taxa, total;
    
    //leitura do valor da comanda
    printf("Informe o valor da comanda: R$ ");
    scanf("%f", &valor_comanda);
    
    //leitura do % da taxa
    //repare que para imprimir o % é preciso usar o escape %%
    printf("Informe o %% da taxa de serviço: ");
    scanf("%f", &taxa_percentual);
    
    //cálculos
    valor_taxa = valor_comanda * taxa_percentual / 100;
    total = valor_comanda + valor_taxa;
    
    //impressão
    printf("O valor da taxa é R$ %.2f.\n", valor_taxa);
    printf("O valor total a pagar é R$ %.2f", total);

    return 0;
}
