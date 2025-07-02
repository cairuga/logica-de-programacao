#include <stdio.h>

int main() {

    int i;
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Vetor na ordem original:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    
    printf("\nVetor na ordem inversa:\n");
    for (i = 9; i >=0; i--) {
        printf("%d ", numeros[i]);
    }
  
    return 0;
}
