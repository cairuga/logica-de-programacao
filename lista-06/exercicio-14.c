
#include <stdio.h>

int main() {

    float valor;
    float total = 0;
    int produtos = 0;
    
    printf("Informe o valor do produto: ");
    scanf("%f", &valor);

    while (valor != 0) {
        total = total + valor;
        produtos = produtos + 1;
        
        printf("Informe o valor do produto: ");
        scanf("%f", &valor);
    }
    
    printf("Quantidade de produtos: %d\n", produtos);
    printf("Valor total da compra: %.2f\n", total);

    return 0;
}
