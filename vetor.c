#include <stdio.h>

int main(void){
	
	int i, n[10];
	
	for(i =1; i < 11; i++){
		printf("Digite o %d numero: ", i);
		scanf("%d", & n[i]);
	}
	
	for(i = 0; i < 10; i ++)
		if(n[i] %2 == 0){
			printf("Os numeros pares sao: %d\n", n[i]);
		}
}
