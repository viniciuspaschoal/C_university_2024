//EXEMPLO COMPLETO

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int valor, *apt;
	
	printf("Digite um valor: ");
	
	apt = &valor;
	
	scanf("%d", &valor);
	
	printf("Valor = %d", valor);
	printf("\n");
	printf("\n");
	
	*apt = 98;
	
	printf("Novo valor = %d", valor);
	
	return 0;
}
