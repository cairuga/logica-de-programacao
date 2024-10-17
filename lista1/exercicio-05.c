#include <stdio.h>

int main() {

    float temp_original, temp_convertida;
    char escala;
    
    printf("Informe a temperatura: ");
    scanf("%f", &temp_original);
    
    printf("Escalas de Temperatura: \n");
    printf("C - Celcius \n");
    printf("F - Fahrenheit \n");
    printf("Informe a escala: ");
  
    getchar(); // Leia a explicação abaixo
    scanf("%c", &escala); 

    /*
    Aqui encontramos um problema: ao realizarmos a leitura da temperatura, digitamos um número e então, teclamos "enter".
    O scanf que lê a tempratura, pega o número digitado, mas aquele "enter" que teclamos fica no buffer de entrada, tornando-se um "lixo", pois é inútil para o programa.
    Assim, o scanf que vair ler a escala encontra esse lixo no buffer e o utiliza, não esperando pela digitação do usuário.
    Para esse problema, há alguns paliativos, entre eles:
    a) scanf(" %c", &escala); colocar um espaço antes do %c;  
    b) getchar(); antes de ler a escala, capturar esse lixo como outra leitura;
    Esses paliativos são específicos para esse contexto e consideram que o usuário vai digitar apenas o valor numérico da temperatura na primeira leitura.
    É importante salientar que esse problema só acontece porque a leitura do caracter ocorre após uma leitura anterior. 
    Se iniciássemos o programa com a leitura da escala (caracter), e depois lêssemos a temperatura (um número), não teríamos o problema.
    */

    if (escala == 'C' || escala == 'c') {
        temp_convertida = (temp_original * 9 / 5) + 32;
        printf("A temperatura em °F é %.1f", temp_convertida);
    } else {
        temp_convertida = (temp_original - 32) * 5 / 9;
        printf("A temperatura em °C é %.1f", temp_convertida);
    }

    /* 
    Detalhe: estou repetindo o printf tanto no IF quanto no ELSE porque o texto muda conforme o caso (°C ou °F). 
    Se o texto fosse exatamente o mesmo, mundando apenas o valor da variável, poderíamos usar um único printf após o bloco IF...ELSE. 
    */

    return 0;
}
