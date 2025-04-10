#include <stdio.h>

int main() {

    //declaração das variáveis
    int numero1, numero2, soma;

    //leitura do primeiro número
    printf("Informe o primeiro número: ");
    scanf("%d", &numero1);
    
    //leitura do segundo número
    printf("Informe o segundo número: ");
    scanf("%d", &numero2);
    
    //cálculo da soma e impressão
    soma = numero1 + numero2;
    printf("A soma dos números é %d.", soma);

    return 0;
}
