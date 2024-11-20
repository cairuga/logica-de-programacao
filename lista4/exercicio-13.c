#include <stdio.h>

int main() {

    int quantidade;
    float nota;

    // Esta solução considera que:
    // - uma nota é um número decimal entre 0 e 10;
    // - pelo menos uma nota será informada;
    // - todas as notas informadas estão no intervalo correto.
    
    printf("Informe a quantidade de notas: ");
    scanf("%d", &quantidade);

    float maior = 0; 
    for (int i=1; i<=quantidade; i++) {
        printf("Informe a nota %d: ", i);
        scanf("%f", &nota);
        if (nota > maior) {
            maior = nota;
        }
    }
    
    printf("A maior nota é: %.2f", maior);
    
    return 0;
}
