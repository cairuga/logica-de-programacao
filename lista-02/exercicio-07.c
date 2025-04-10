#include <stdio.h>

int main() {

    //declaração das variáveis
    float raio, diametro, comprimento, area;
    
    //declara da constante pi
    const float pi = 3.14;
    
    //leitura do raio
    printf("Informe a medida do raio da circunferência: ");
    scanf("%f", &raio);
    
    //cálculos
    diametro = 2 * raio;
    comprimento = 2 * pi * raio; // ou diametro * pi
    area = pi * raio * raio;
    
    //impressões
    printf("O diâmetro da cirunferência é %.1f.\n", diametro);
    printf("O comprimento da cirunferência é %.1f.\n", comprimento);
    printf("A área da cirunferência é %.1f.", area);

    return 0;
}
