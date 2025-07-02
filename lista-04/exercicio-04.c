#include <stdio.h>
#include <math.h>

int main() {
    
    float cateto1, cateto2, hipotenusa;
    
    printf("Informe o primeiro cateto: ");
    scanf("%f", &cateto1);
    printf("Informe o segundo cateto: ");
    scanf("%f", &cateto2);
    
    // hipotenusa = (cateto1 * cateto1) + (cateto2 * cateto2);
    // hipotenusa = sqrt(hipotenusa);
    
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    
    printf("A hipotenusa mede %.1f", hipotenusa);

    return 0;
}
