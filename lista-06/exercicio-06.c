#include <stdio.h>

int main() {

    int quantidade;
    float temperatura, maior, menor, amplitude;

    printf("Informe a quantidade de temperaturas: ");
    scanf("%d", &quantidade);

    int i=1;
    while (i<=quantidade) {
        printf("Informe a temperatura %d: ", i);
        scanf("%f", &temperatura);
        
        if (i == 1) {
            menor = temperatura;
            maior = temperatura;
        } else {
            if (temperatura < menor) {
                menor = temperatura;
            }
            
            if (temperatura > maior) {
                maior = temperatura;
            }
        }
        i++;
    }
    
    amplitude = maior - menor;
    printf("A amplitude térmica é %.2f", amplitude);
    
    return 0;
}
