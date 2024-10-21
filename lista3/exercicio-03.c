#include <stdio.h>

int main() {

    int idade, mensalidade;
    char plano;
    
    printf("R - Regional\n")
    printf("N - Nacional\n")
    printf("Informe o plano: ");
    scanf("%c", &plano);
    
    printf("Informe a idade: ");
    scanf("%d", &idade);
    
    mensalidade = 180 + (6 * idade);
    
    if (idade < 18 || idade > 60) mensalidade += 200;
    //poderia ser mensalidade = mensalidade + 200;
    
    if (plano == 'n' || plano == 'N') mensalidade *= 1.5;
    //poderia ser mensalidade = mensalidade * 1.5;

    printf("O valor da mensalidade é %d", mensalidade);

    return 0;
}
