#include <stdio.h>

int main() {

    int valor;

    printf("Informe o valor: ");
    scanf("%d", &valor);
    
    if (valor <= 0) {
        printf("Valor inválido!");
    } else {
        
        if (valor >= 100) {
            printf("%d nota(s) de 100\n", valor / 100);
            valor = valor % 100;
        } 
        
        if (valor >= 50) {
            printf("%d nota(s) de 50\n", valor / 50);
            valor = valor % 50;
        }
        
        if (valor >= 20) {
            printf("%d nota(s) de 20\n", valor / 20);
            valor = valor % 20;
        }
        
        if (valor >= 10) {
            printf("%d nota(s) de 10\n", valor / 10);
            valor = valor % 10;
        }
        
        if (valor >= 5) {
            printf("%d nota(s) de 5\n", valor / 5);
            valor = valor % 5;
        }
        
        if (valor >= 2) {
            printf("%d nota(s) de 2\n", valor / 2);
            valor = valor % 2;
        }
        
        if (valor > 0) {
            printf("%d moeda(s) de 1\n", valor);
        }

    }

    return 0;
}
