#include <stdio.h>

int main() {

    int dia;
    
    printf("Digite o dia do mês: ");
    scanf("%d", &dia);

    /*
    Como são 7 dias na semana, verificamos o resto da divisão do dia por 7, ou seja, dia % 7
    Caso seja 3, é uma sexta, como afirma o enunciado.
    Então, 4 será sábado, 5 domingo, 6 segunda...
    Da mesma forma, 2 será quinta, 1 será quarta e 0 será terça.
    */

    switch(dia % 7) {
        case 0:
            printf("terça-feira");
            break;
        case 1:
            printf("quarta-feira");
            break;
        case 2:
            printf("quinta-feira");
            break;
        case 3:
            printf("sexta-feira");
            break;            
        case 4:
            printf("sábado");
            break;
        case 5:
            printf("domingo");
            break;
        case 6:
            printf("seguinda-feira");
    }
    
    return 0;
}
