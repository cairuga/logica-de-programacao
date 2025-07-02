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

    float menor = 10; 
    for (int i=1; i<=quantidade; i++) {
        printf("Informe a nota %d: ", i);
        scanf("%f", &nota);
        if (nota < menor) {
            menor = nota;
        }
    }
    
    printf("A menor nota é: %.2f", menor);
    
    return 0;
}
