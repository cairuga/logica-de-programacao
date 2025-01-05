#include <stdio.h>

int main() {

    int lin, col;
    int dados[5][3];

    //lendo os dados
    for (lin = 0; lin < 5; lin++) {
        printf("Informe o idade (anos): ");
        scanf("%d", &dados[lin][0]);
        
        printf("Informe o peso (kg): ");
        scanf("%d", &dados[lin][1]);
        
        printf("Informe a altura (cm): ");
        scanf("%d", &dados[lin][2]);
    }
    
    printf("a) RELATÓRIO DE ALUNOS: \n");
    for (lin = 0; lin < 5; lin++) {
        printf("O aluno %d tem %d anos, pesa %d kg e mede %d cm.\n", lin, dados[lin][0], dados[lin][1], dados[lin][2]);
    }

    int pos_mais_alto = 0;
    int idade_mais_novo = dados[0][0];
    int idade_mais_velho = dados[0][0];
    float soma_peso = 0, soma_altura = 0;
    for (lin = 0; lin < 5; lin++) {
        if (dados[lin][2] > dados[pos_mais_alto][2]) {
            pos_mais_alto = lin;
        }
        
        if (dados[lin][0] > idade_mais_velho) {
            idade_mais_velho = dados[lin][0];
        }
        
        if (dados[lin][0] < idade_mais_novo) {
            idade_mais_novo = dados[lin][0];
        }
        soma_peso += dados[lin][1];
        soma_altura += dados[lin][2];
    }

    int diferenca = idade_mais_velho - idade_mais_novo;
    float peso_medio = soma_peso / 5;
    float altura_media = soma_altura / 5;
    
    printf("\nb) a idade do aluno mais alto é %d", dados[pos_mais_alto][0]);
    printf("\nc) o peso médio da turma é %.1f", peso_medio);
    printf("\nd) o altura média da turma é %.1f", altura_media);
    printf("\ne) a diferença de idade entre o mais velho e o mais novo é %d", diferenca);
    
    return 0;
}
