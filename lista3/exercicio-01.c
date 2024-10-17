#include <stdio.h>

int main() {

    float raio, comprimento, area;
    
    printf("Informe o raio da circunferência: ");
    scanf("%f", &raio);
    
    comprimento = 2 * 3.14 * raio;
    area = 3.14 * raio * raio;
    
    printf("O comprimento da circunferência é %f \n", comprimento);
    printf("A área da circunferência é %f \n", area);

    return 0;
}
