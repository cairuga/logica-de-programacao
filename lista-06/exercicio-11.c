#include <stdio.h>

int main() {

    float nota1, nota2, nota3;
    float media;
    int resposta;
    int aprovados = 0;
    int reprovados = 0;

    do {
        printf("Informe a nota 1: ");
        scanf("%f", &nota1);
        
        printf("Informe a nota 2: ");
        scanf("%f", &nota2);
        
        printf("Informe a nota 3: ");
        scanf("%f", &nota3);
        
        media = (nota1 + nota2 + nota3) / 3;
        
        if (media >= 6) {
            aprovados++;
            printf("Aprovado!\n");
        } else {
            reprovados++;
            printf("Reprovado!\n");
        }
        
        printf("Deseja calcular outra média? 1-sim: ");
        scanf("%d", &resposta);
        
    } while (resposta == 1);

    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);
    return 0;
}
