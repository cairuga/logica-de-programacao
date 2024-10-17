#include <stdio.h>

int main() {

    float numero1, numero2, maior;
    
    printf("Informe o primeiro número: ");
    scanf("%f", &numero1);

    //como só foi lido um número, esse é o maior por enquanto!
    maior = numero1; 

    printf("Informe o segundo número: ");
    scanf("%f", &numero2);

    //se o segundo número digitado for maior do que o 
    //maior até agora até agora, trocamos! 
    if (numero2 > maior) {
        maior = numero2;
    }

    printf("O maior número digitado é %f ", maior);

    /*
    Como são apenas dois números, poderíamos escrever outra solução que não usa uma variável auxiliar:
   
    if (numero1 > numero2) {
        printf("O maior número digitado é %f ", numero1);
    } else {
        printf("O maior número digitado é %f ", numero2);
    }
    
    Contudo, a partir de três números, já começa a ficar complexo se não utulizarmos uma variável auxiliar
    
    */
    
    return 0;
}
