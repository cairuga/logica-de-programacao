#include <stdio.h>

int main() {

    char sexo;
    float altura, peso;
    
    printf("M - Masculino\n");
    printf("F - Feminino\n");
    printf("Informe o sexo da pessoa: ");
    scanf("%c", &sexo);

    printf("Informe a altura (em metros): ");
    scanf("%f", &altura);

    //Considerando que o usuário vai digitar apenas F, f, M ou m
    if (sexo == 'F' || sexo == 'f') {
        peso = (62.1 * altura) - 47.7;
    } else {
        peso = (72.7 * altura) - 58;
    }

    printf("O peso ideal é %.1f ", peso);


    return 0;
}
