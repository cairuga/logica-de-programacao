#include <stdio.h>

int main() {

    int impar = 1; //primeiro ímpar
    
    //veja que i é apenas um contador
    for (int i=1; i<=12; i++) {
        printf("%d ", impar);
        impar = impar + 2; //o próximo ímpar
    }

    return 0;
}
