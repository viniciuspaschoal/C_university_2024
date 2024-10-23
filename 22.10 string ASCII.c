#include <stdio.h>

int main(void){
	char caracter;
	
	printf("Digite um caractere: ");
	scanf("%c", &caracter);
	
	printf("Caractere digitado: %c \n", caracter);
	printf("Codigo do caractere: %d \n", caracter);
	
	return 0;
}
