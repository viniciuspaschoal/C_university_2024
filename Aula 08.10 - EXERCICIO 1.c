#include <stdio.h>

double functionSoma(int i, int fim);

int main(void){
	int valor;
	double resp;
	
	printf("Digite o fim da serie: ");
	scanf("%d",& valor);
	
	resp = functionSoma(1, valor);
	printf("Soma = %d \n", resp);
	
	return 0;
}

double functionSoma(int i, int fim){
	if(i == fim){
		return(fim/fim + 1.0);
	}
	
	return(i/(i + 1.0) + functionSoma(i + 1, fim));
}
