#include <stdio.h>

int main() {

    float numero1, numero2;
    
    printf("Informe o primeiro número: ");
    scanf("%f", &numero1);

    printf("Informe o segundo número: ");
    scanf("%f", &numero2);

    if (numero1 > numero2) {
        printf("O maior número digitado é %f ", numero1);
    } else {
        printf("O maior número digitado é %f ", numero2);
    }

    /*    
    Como são apenas dois valores, esta é uma solução simples. 
    Contudo, a partir de três valores, é mais indicado utilizar uma variável auxiliar. 
    Veja outra solução no arquivo exercicio-06-s2.c
    */
    
    return 0;
}
