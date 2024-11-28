#include <stdio.h>

int main() {

    int idade;
    int maiores = 0;
    int menores = 0;

    printf("informe a idade: ");
    scanf("%d", &idade);
    
    while (idade >= 0) {
        
        if (idade < 18) {
            menores++;
        } else {
            maiores++;
        } 
        
        printf("informe a idade: ");
        scanf("%d", &idade);
    }
    
    printf("Maiores de idade: %d\n", maiores);
    printf("Menores de idade: %d\n", menores);
    return 0;
}

