#include <stdio.h>

int main() {

    int numero1, numero2, troca;
    
    printf("Informe o valor para numero1: ");
    scanf("%d", &numero1);
    
    printf("Informe o valor para numero2: ");
    scanf("%d", &numero2);
    
    troca = numero1;
    numero1 = numero2;
    numero2 = troca;
    
    printf("Agora, numero1 vale %d \n", numero1);
    printf("Agora, numero2 vale %d \n", numero2);

    return 0;
}
