#include <stdio.h>

int main() {

    float peso;
    float total = 0;
    
    do {
        
        printf("Informe o peso do lote: ");
        scanf("%f", &peso);
        
        total = total + peso;
        
    } while (peso != 0 && total <= 500);

    printf("Total de uvas: %.2f kg.", total);

    if (total > 500) {
        printf("\nO limite foi ultrapassado!");
    }
    
    return 0
}
