#include <stdio.h>

int main() {

    float comanda, taxa, servico, total;
    
    printf("Informe o valor da comanda: ");
    scanf("%f", &comanda);

    printf("Informe o %% da taxa de serviço: ");
    scanf("%f", &taxa);

    servico = comanda * (taxa / 100);
    total = comanda + servico;
    
    printf("O valor do serviço é %.2f \n", servico);
    printf("O varlo total a pagar é %.2f \n", total);

    return 0;
}
