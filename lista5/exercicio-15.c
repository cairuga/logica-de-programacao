// O ENUNCIADO NÃO ESPECIFICOU SE O USUÁRIO DEVE INFORMAR A QUANTIDADE DE PESSOAS OU SE A CADA PESSOA PERGUNTA-SE SE O USUÁRIO QUER CONTINUAR. ENTÃO VAMOS FAZER DOR PRIMEIRO MODO, MAS USANDO WHILE PARA VARIAR

#include <stdio.h>

int main() {
 
    float peso, altura, imc;
    float soma, media;
    int i, pessoas, acima, abaixo;
    
    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &pessoas);
    
    //PODERIA SER FEITO COM FOR, MAS PARA PRATICAMOS
    //VAMOS FAZER COM WHILE
    i = 1;
    soma = 0;
    acima = 0;
    abaixo = 0;
    while (i <= pessoas) {
        printf("Informe o peso da pessoa %d: ", i);
        scanf("%f", &peso);
        soma = soma + peso;
        printf("Informe altura da pessoa %d: ", i);
        scanf("%f", &altura);
        
        imc = peso / (altura * altura);
        printf("O IMC é %.2f\n", imc);
        
        if (imc > 24.9) {
            acima++;
        } else if (imc < 18.5) {
            abaixo++;
        }
        i++;
    }
    media = soma / pessoas;
    printf("\nPeso médio: %.2f", media);
    printf("\nAcima do peso: %d", acima);
    printf("\nAbaixo do peso: %d", abaixo);
    return 0;
}
