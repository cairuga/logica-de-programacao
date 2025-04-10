#include <stdio.h>

int main() {

    //declaração das variáveis
    int ano_nascimento, idade;
    
    //leitura do ano de nascimento
    printf("Em que ano você nasceu: ");
    scanf("%d", &ano_nascimento);
    
    //cálculo da idade e impressão
    idade = 2050 - ano_nascimento;
    printf("Você terá %d anos em 2050", idade); 
    
    return 0;
    
    /* VARIAÇÃO
    
    Voce pode declarar uma constante para o ano futuro:
    const int ano_futuro = 2050;
    
    Então altera o cálculo:
    idade = ano_futuro - ano_nascimento;
    
    E altera a impressão:
    printf("Você terá %d anos em %d", idade, ano_futuro); 
    
    Assim, se quiser alterar o programa para outro ano futuro,
    basta alterar a inicialização da constante e não precisa
    mexer no resto do código.
    
    */
}
