#include <stdio.h>

int main() {

    int senha;

    do  {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        
        if (senha == 1732) {
            printf("ACESSO PERMITIDO");
        } else {
            printf("SENHA INVÀLIDA\n");
        }
    } while (senha != 1732);
    
    return 0;
}
