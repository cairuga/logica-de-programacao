#include <stdio.h>

int main() {

    int idade1, idade2, diferenca;
    
    printf("Informe a idade da primeira pessoa: ");
    scanf("%d", &idade1);

    printf("Informe a idade da segunda pessoa: ");
    scanf("%d", &idade2);

    if (idade1 > idade2) {
        diferenca = idade1 - idade2;
        printf("A pessoa mais velha tem %d anos.\n", idade1);
        printf("A pessoa mais nova tem %d anos.\n", idade2);
        printf("A diferença entre elas é de %d anos.", diferenca);
    } else {
        diferenca = idade2 - idade1;
        printf("A pessoa mais velha tem %d anos.\n", idade2);
        printf("A pessoa mais nova tem %d anos.\n", idade1);
        printf("A diferença entre elas é de %d anos.", diferenca);
    }

    /*    
    Como se tratam apenas de dois valores, esta é uma solução simples,
    Contudo, a partir de três valores, é mais indicado utilizar  variáveis auxiliares. Veja a solução 2 do exercício 6.
    Detalhes importante: o enunciado não pediu para tratarmo o caso de idades iguais!
    */
    
    return 0;
}
