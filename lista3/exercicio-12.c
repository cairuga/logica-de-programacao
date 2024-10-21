#include <stdio.h>

int main() {

    float salario1, salario2, salario3, media, parcela;
    
    printf("Digite o antepenúltimo salário: ");
    scanf("%f", &salario1);
    
    printf("Digite o penúltimo salário: ");
    scanf("%f", &salario2);
    
    printf("Digite o último salário: ");
    scanf("%f", &salario3);

    media = (salario1 + salario2 + salario3) / 3;
    
    if (media <= 2041.39) {
        parcela = media * 0.8;
    } else if (media <= 3402.65) {
        parcela = (media - 2041.39) * 0.5 + 1633.1;
    } else {
        parcela = 2313.74;
    }
    
    printf("O valor da parcela é %.2f ", parcela);

    return 0;
}
