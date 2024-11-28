#include <stdio.h>

int main() {

    int idade;
    int maiores = 0;
    int menores = 0;
    
    do {
        printf("informe a idade: ");
        scanf("%d", &idade);
        
        if (idade >= 0 && idade < 18) {
            menores++;
        } else if (idade >= 18) {
            maiores++;
        } 
    } while (idade >= 0);
    
    printf("Maiores de idade: %d\n", maiores);
    printf("Menores de idade: %d\n", menores);
    return 0;
}
