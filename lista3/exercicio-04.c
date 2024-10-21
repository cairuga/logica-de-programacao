#include <stdio.h>

int main() {

    int ano;   
    printf("Informe o ano: ");
    scanf("%d", &ano);
    
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
        printf("É bissexto");
    } else {
        printf("Não é bissexto");
    }
         
    /* ALTERNATIVA 1     
    if (ano % 4 == 0) {
        if (ano % 100 == 0) {
            if (ano % 400 == 0) printf("É bissexto");
            else printf("Não é bissexto");
        } else printf("É bissexto");
    } else printf("Não é bissexto");    
    */
    
    /* ALTERNATIVA 2    
    if (ano % 400 == 0) {
        printf("É bissexto");
    } else if (ano % 100 == 0) {
        printf("Não é bissexto");
    } else if (ano % 4 == 0) {
        printf("É bissexto");
    } else {
        printf("Não é bissexto");
    }    
    */
  
    return 0;
}
