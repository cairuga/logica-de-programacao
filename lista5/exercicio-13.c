#include <stdio.h>

int main() {
 
    float manha, tarde, noite;
    float maior, menor, amplitude;
    float maxima; //para a amplitude máxima
    int resposta;
    
    maxima = 0;
    do {
        printf("Digite a temperatura da manhã: ");
        scanf("%f", &manha);
        maior = manha;
        menor = manha;
        
        printf("Digite a temperatura da tarde: ");
        scanf("%f", &tarde);
        if (tarde > maior) {
            maior = tarde;
        }
        if (tarde < menor) {
            menor = tarde;
        }
    
        printf("Digite a temperatura da noite: ");
        scanf("%f", &noite);
        if (noite > maior) {
            maior = noite;
        }
        if (noite < menor) {
            menor = noite;
        }
        amplitude = maior - menor;
        printf("A amplitude térmica do dia foi: %.2f", amplitude); 
        
        if (amplitude > maxima) {
            maxima = amplitude;
        }
        
        printf("\nDeseja calcula outro dia? 1-sim: ");
        scanf("%d", &resposta);
    } while (resposta == 1);

    printf("\nA maior amplitude foi: %.2f", maxima);
    
    return 0;
}
