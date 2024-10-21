#include <stdio.h>

int main() {

    float temp1, temp2, temp3;
    float maior, menor, amplitude;
    
    printf("Informe a temperatura 1: ");
    scanf("%f", &temp1);
    
    printf("Informe a temperatura 2: ");
    scanf("%f", &temp2);
    
    printf("Informe a temperatura 3: ");
    scanf("%f", &temp3);
    
    // Começamos supondo que a temperatura 1 é a maior e a menor
    maior = temp1;
    menor = temp1;
    
    //caso a temperatura 2 seja maior que a maior até agora
    //ela é a nova maior!!!
    if (temp2 > maior) maior = temp2;
    
    //caso a temperatura 2 seja menor que a menor até agora
    //ela é a nova maior!!!
    if (temp2 < menor) menor = temp2;

    //Mesmos testes, mas para a temperatura 3
    if (temp3 > maior) maior = temp3;
    if (temp3 < menor) menor = temp3; 
    
    /* Detalhes: poderia ser assim:
    if (temp3 > maior) maior = temp3;
    else if (temp3 < menor) menor = temp3; 
    */
    
    amplitude = maior - menor;
    printf("A amplitude térmica é %.1f", amplitude);

    return 0;
}
