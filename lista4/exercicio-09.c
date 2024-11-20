#include <stdio.h>

int main() {

    int soma = 0;
    for (int i=1; i<=100; i++) {
        soma = soma + i;
    }
    
    printf("A soma dos número de 1 a 100 é: %d", soma);
  
    return 0;
}
