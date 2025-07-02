#include <stdio.h>
#include <math.h>

int main() {

    float lado;
    float cateto1, cateto2, hipotenusa;
    
    printf("Informe o primeiro lado: ");
    scanf("%f", &lado);

    //como só lemos um lado, este é o maior por enquanto,
    //ou seja, atual candidato à hipotenusa!
    hipotenusa = lado;

    //podemos reaproveitar a mesma variável lado
    printf("Informe o segundo lado: ");
    scanf("%f", &lado);

    //se o segundo lado for maior que o atual candidato à hipotenusa
    //significa que o lado anterior não era a hipotenusa,
    //ou seja, era um dos catetos, no caso o cateto1,
    //e o lado recém lido, maior, é o novo candidato à hipotenusa
    if (lado > hipotenusa) {
        cateto1 = hipotenusa;
        hipotenusa = lado;
    } else { // se não for maior, é um cateto!
        cateto1 = lado;
    }

    //podemos reaproveitar a mesma variável
    printf("Informe o terceiro lado: ");
    scanf("%f", &lado);

    //mesma verificação, porém agora definindo o cateto2
    if (lado > hipotenusa) {
        cateto2 = hipotenusa;
        hipotenusa = lado;
    } else { 
        cateto2 = lado;
    }
    
    //já sabemos que é quem, só resta verificar se as medidas batem:
    //hipotenusa^2 = cateto1^2 + cateto^2
    
    if (pow(hipotenusa, 2) == pow(cateto1,2) + pow(cateto2, 2)) {
        printf("É um triângulo retângulo");
    } else {
        printf("Não é um triângulo retângulo");
    }

    return 0;
}
