#include <stdio.h>

int main() {

    /*
    ESTA SOLUÇÂO FOI ESCRITA EM 2024!
    NO FUTURO, ATUALIZE A SOLUÇÃO
    */

    int ano, idade;
    
    printf("Informe o ano de nascimento: ");
    scanf("%d", &ano);


    if (ano > 2024) {
        printf("Ano de nascimento inválido!");
    } else {
        if (ano == 2024) {
            printf("Recém-nascido!");
        } else {
            idade = 2024 - ano;
            printf("A idade é %d anos.", idade);
        }
    }

    /*
    Há outras formas de montar esse IF. O importante é cobrir todos os casos!
    Repare que seguimos uma ordem: maiores, igual, menores
    
    Nesse exercício, poderia-se declarar uma constante com o valor do ano atual.
    Assim, ficaria mais fácil alerar o ano atual no futuro. 
    Mas é apenas um exercício, no mundo real, o ano atual seria obtido através de funções da própria linguagem!
    */
    
    return 0;
}
