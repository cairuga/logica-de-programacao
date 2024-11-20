#include <stdio.h>

int main() {

    int pessoas, idade;
    int obrigatorio = 0;
    int facultativo = 0;
    int nao_permitido = 0;
    

    printf("Informe a quantidade de pessoas: ");
    scanf("%d", &pessoas);

    for (int i=1; i<=pessoas; i++) {
        printf("Informe a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        
        if (idade < 16) {
            nao_permitido = nao_permitido + 1;
        } else if (idade < 18 || idade >= 70) {
            facultativo = facultativo + 1;
        } else {
            obrigatorio = obrigatorio + 1;   
        }
    }
    
    printf("Pessoas que não podem votar: %d\n", nao_permitido);
    printf("Pessoas cujo voto é facultativo: %d\n", facultativo);
    printf("Pessoas cujo voto é obrigatório: %d", obrigatorio);
    
    return 0;
}
