#include <stdio.h>
int main() {
	
	char letra1 = 'E', letra2 = 'C', letra3 = 'A';
	
	printf("Eu curso %c%c%c no IFSul.\n", letra1, letra2, letra3);
	printf("%c%c%c = Engenharia de Controle e Automação.\n", letra1, letra2, letra3);
	printf("%c%c%c é um anagrama de %c%c%c.", letra2, letra3, letra1, letra1, letra2, letra3);
	
	return 0;
}
