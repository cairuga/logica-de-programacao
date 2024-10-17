#include <stdio.h>

int main() {

    float raio, diametro, comprimento, area;
    
    printf("Informe o raio da circunferência: ");
    scanf("%f", &raio);
    
    diametro = 2 * raio;
    comprimento = 2 * 3.14 * raio;
    area = 3.14 * raio * raio;
    
    printf("O diâmetro da circunferência é %f \n", diametro);
    printf("O comprimento da circunferência é %f \n", comprimento);
    printf("A área da circunferência é %f \n", area);

    return 0;
}
