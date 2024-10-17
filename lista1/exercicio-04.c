#include <stdio.h>

int main() {

    float temp_c, temp_f;
    
    printf("Informe a temperatura em °C: ");
    scanf("%f", &temp_c);

    temp_f = (temp_c * 9 / 5) + 32;
    
    printf("A temperatura em °F é %.1f", temp_f);

    return 0;
}
