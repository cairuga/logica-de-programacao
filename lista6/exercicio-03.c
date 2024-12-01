#include <stdio.h>

int main() {

    int idade, resposta;
    int pessoas = 0;
    float soma = 0;
    float media;
    
    do {
        printf ("Informe a idade: ");
        scanf ("%d", &idade);
        
        while (idade < 0) {
            printf ("Idade inválida, informe novamente: ");
            scanf ("%d", &idade);
        }
        pessoas = pessoas + 1;
        soma = soma + idade;
        
        printf("Deseja informar a idade de outra pessoa? 1-sim ");
        scanf("%d", &resposta);
    } while (resposta == 1);
    
    media = soma / pessoas;
    printf("A idade média do grupo é: %.2f", media);

    return 0;
}
















