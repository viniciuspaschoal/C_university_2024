#include <stdio.h>
#include <stdlib.h>

int main(void){
	int pri = 5;
	int *apt;
	
	if(!(apt = malloc(sizeof(int)))){
		printf("Falhou tentando criar variavel!\n");
		exit(1);
	}
	
	printf("Digite um numero: ");
	scanf("%d",& pri);
	printf("Digite outro numero: ");
	scanf("%d",& apt);
	printf("Soma = %d\n", *apt + pri);
	free(apt);
	return 0;
}
