#include <stdio.h>

int main() {

    int i, qtd_produtos, pos_mais_caro;
    
    printf("Informe a quantidade de produtos: ");
    scanf("%d", &qtd_produtos);

    int codigos[qtd_produtos];
    float precos[qtd_produtos];
    
    //Lendo os vetores
    for (i = 0; i < qtd_produtos; i++) {
        printf("Digite o código: ");
        scanf("%d", &codigos[i]);
        
        printf("Digite o preco: ");
        scanf("%f", &precos[i]);

    }

    pos_mais_caro = 0; //assumimos que o produto mais caro é o primeiro (indice/posicao 0)
    for (i = 0; i < qtd_produtos; i++) {
        if (precos[i] > precos[pos_mais_caro]) {
            pos_mais_caro = i;
        }
    }

    printf("O produto mais caro custa %.1f e o seu código é %d", precos[pos_mais_caro], codigos[pos_mais_caro]);

    return 0;
}
