#include <stdio.h>

int main() {

    int numero1, numero2;
    
    printf("Informe o primeiro número: ");
    scanf("%d", &numero1);

    printf("Informe o segundo número: ");
    scanf("%d", &numero2);

    if (numero1 > numero2) {
        if (numero1 % numero2 == 0) {
            printf("%d é divisível por %d", numero1, numero2);
        } else {
            printf("%d não é divisível por %d", numero1, numero2);
        }
    } else {
        if (numero2 % numero1 == 0) {
            printf("%d é divisível por %d", numero2, numero1);
        } else {
            printf("%d não é divisível por %d", numero2, numero1);
        }
    }

    return 0;
}
