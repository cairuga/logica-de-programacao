#include <stdio.h>

int main() {

    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha);
    
    while (senha != 1732) {
        printf("SENHA INVÁLIDA\n");
        
        printf("Digite a senha: ");
        scanf("%d", &senha);
    }
    
    printf("ACESSO PERMITIDO");
    
    return 0;
}
