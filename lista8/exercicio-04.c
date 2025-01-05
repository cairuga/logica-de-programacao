#include <stdio.h>

int main() {

    int qtd_produtos, lin, col;
    
    
    printf("Informe a quantidade de produtos: ");
    scanf("%d", &qtd_produtos);
    
    int codigos[qtd_produtos];
    float valores[qtd_produtos][2];
    
    //lendo os dados
    for (lin = 0; lin < qtd_produtos; lin++) {
        printf("Informe o código: ");
        scanf("%d", &codigos[lin]);
        
        printf("Informe a quantidade: ");
        scanf("%f", &valores[lin][0]);
        
        printf("Informe o valor unitário: ");
        scanf("%f", &valores[lin][1]);
    }
    

    int pos_mais_vendido = 0;
    int pos_mais_caro = 0;
    float total = 0;
    for (lin = 0; lin < qtd_produtos; lin++) {
        if (valores[lin][0] > valores[pos_mais_vendido][0]) {
            pos_mais_vendido = lin;
        }
        
        if (valores[lin][1] > valores[pos_mais_caro][1]) {
            pos_mais_caro = lin;
        }
        
        total += valores[lin][0] * valores[lin][1];
    }

    printf("\na) O código do produto mais vendido é %d e ele custa %.2f", codigos[pos_mais_vendido], valores[pos_mais_vendido][1]);
    
    printf("\nb) O código do produto mais caro é %d e foram vendidos %.0f unidades", codigos[pos_mais_caro], valores[pos_mais_caro][0]);

    printf("\nc) O valor total da venda é %.2f", total);
    
    return 0;
}
