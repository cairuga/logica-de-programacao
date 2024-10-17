#include <stdio.h>

int main() {

    char letra;

    printf("Informe uma letra: ");
    scanf("%c", &letra);
    
    switch(letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("É uma vogal");
            break;
        default:
            printf("É uma consoante!");
    }
    return 0;
}
