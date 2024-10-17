#include <stdio.h>

int main() {

    // Esta solução não trata divisão por 0!
    
    // Aproveitei para mostrar um exemplo de uso de mais de um return!

    float numero1, numero2, resultado;
    char operacao;
    
    printf("Informe o primeiro número: ");
    scanf("%f", &numero1);
    
    printf("Informe o segundo número: ");
    scanf("%f", &numero2);
    
    printf("Informe a operacao: ");
    scanf(" %c", &operacao);
    
    /* Aqui temos o mesmo problema já discutido no exercío 5 da lista 1. */
    
    switch(operacao) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
            resultado = numero1 / numero2;
            break;            
        default:
            printf("Operação inválida.");
            return 0; 
            //ESSE RETURN ENCERRA O PROGRAMA E NADA MAIS É EXECUTADO!
    }
    
    printf("%f %c %f = %f", numero1, operacao, numero2, resultado);
    
    return 0;
}
