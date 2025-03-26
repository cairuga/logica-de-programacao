#include <stdio.h>
int main() {
	
	int idade = 43;
	float altura = 1.68;
	
	printf("Eu tenho %d anos.\n", idade);
	printf("Minha altura é %.2f m.\n", altura);
	printf("Eu tenho %d anos e minha altura é %.2f m.\n", idade, altura);
	printf("Minha altura é %.2f e eu tenho %d anos.", altura, idade);
	
	return 0;
}
