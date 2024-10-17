#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c, delta, x1, x2;

    printf("Informe o coeficiente a: ");
    scanf("%f", &a);
    
    printf("Informe o coeficiente b: ");
    scanf("%f", &b);
    
    printf("Informe o coeficiente c: ");
    scanf("%f", &c);
    
    if (a == 0) {
        printf("Não é uma equação do segundo grau.");
    } else {
        
        delta = (b * b) - (4 * a * c);  
        if (delta < 0) {
            printf("A equação não possui raízes reais.");
        } else {
            x1 = (-b  +  sqrt(delta))/(2*a);
            x2 = (-b  -  sqrt(delta))/(2*a);
            printf ("A raízes da equação são %f e %f", x1, x2);
        }
    }

    return 0;
}
