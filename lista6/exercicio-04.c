
#include <stdio.h>

int main() {

    int pessoas;
    float peso;
    float total = 0;
    float maior = 0;
    
    
    printf ("Informe o número de pessoas no grupo: ");
    scanf ("%d", &pessoas);
    
    for (int i=1; i<=pessoas; i++) {
        printf ("BAGAGENS DA PESSOA %d\n", i);
        printf ("Informe o peso da bagagem: ");
        scanf ("%f", &peso); 

        while (peso != 0) {
            total = total + peso;
            if (peso > maior) {
                maior = peso;
            }
            
            printf ("Informe o peso da bagagem: ");
            scanf ("%f", &peso);
        }
    }
    
    printf("\nPeso total: %.2f", total);
    printf("\nA bagagem mais pesada pesa %.2f", maior);

    return 0;
}
















