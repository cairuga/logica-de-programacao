#include <stdio.h>

int main() {
    int i = 1;
    int numero = 1;
    
    while (i <= 12) {
        printf("%d ", numero);
        numero = numero + 2;
        i++;
    }
    return 0;
}

/* ALTERNATIVA

#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 12) {
        printf("%d ", 2 * i - 1);
        i++;
    }
    return 0;
}

*/
