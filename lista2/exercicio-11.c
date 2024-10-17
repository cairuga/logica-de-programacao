#include <stdio.h>

int main() {

    int mes;

    printf("Informe o mês: ");
    scanf("%d", &mes);
    
    switch(mes) {
        case 2:
            printf("O mês terá 28 dias");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("O mês terá 30 dias");
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("O mês terá 31 dias");
            break;
        default:
            printf("Mês inválido!");
    }
    
    return 0;
}
