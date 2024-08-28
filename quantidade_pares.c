#include <stdio.h>

int main(void){
	int i, n, qnt = 0;
	
	do{
		printf("Digite um numero: ");
		scanf("%d", & n);
		
		
		if(n %2 == 0){
			qnt += 1;
		}
	}while(qnt == 3);
	
	printf("De 10 numeros, %d sao pares.", qnt);
}

