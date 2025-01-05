#include <stdio.h>

int main() {

    int lin, col;
    int matriz[3][4] = {{4, 7, 1, 0},
                        {7, 3, 2, 8},
                        {9, 1, 4, 2}};
    
    printf("a) impressáo linha por linha (original):\n");
    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 4; col++) {
            printf("%d ", matriz[lin][col]);
        }
        printf("\n");
    }

    printf("\nb) Impressáo coluna por coluna (transposta):\n");
    for (col = 0; col < 4; col++) {
        for (lin = 0; lin < 3; lin++) {
            printf("%d ", matriz[lin][col]);
        }
        printf("\n");
    }
    
    printf("\nc) soma dos elementos de cada linha:");
    int maior_soma = 0;
    int lin_maior_soma = 0;
    for (lin = 0; lin < 3; lin++) {
        int soma = 0;
        for (col = 0; col < 4; col++) {
            soma += matriz[lin][col];
        }
        if (soma > maior_soma) {
            maior_soma = soma;
            lin_maior_soma = lin;
        }
        printf("\nA soma da linha %d é %d", lin, soma);
    }
    printf("\nA linha com maior soma é a linha %d", lin_maior_soma);

    printf("\n\nd) soma dos elementos de cada coluna:");
    float menor_media = 1000000;
    int col_menor_media = 0; 
    for (col = 0; col < 4; col++) {
        float soma = 0; //soma é float para forçar divisáo decimal
        for (lin = 0; lin < 3; lin++) {
            soma += matriz[lin][col];
        }
        float media = soma / 3;
        if (media < menor_media) {
            menor_media = media;
            col_menor_media = col;
        }
        printf("\nA média da coluna %d é %.1f", col, media);
    }
    printf("\nA coluna com a menor media é a coluna %d", col_menor_media);

    int pares = 0;
    int impares = 0;
    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 4; col++) {
            if (matriz[lin][col] % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }
    }
    printf("\n\ne) Há %d valores pares e %d valores ímpares,", pares, impares);
    return 0;
}
