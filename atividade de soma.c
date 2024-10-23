#include <stdio.h>

int main(void){
	int i, n = 0, soma;
	
	for(i = 0; i < 10; i++){
		printf("Digite o numero: ");
		scanf("%d", & n);
		soma += n;
	}
	printf("A soma dos numeros e: %d", soma);
}
