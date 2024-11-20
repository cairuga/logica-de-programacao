#include <stdio.h>

int main() {

    for (int i=1; i<=100; i++) {
        //imprime apenas se for divisível por 7
        if (i % 7 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
