#include <stdio.h>

int main(void){
	
	int i, n = 0, par = 0, impar = 0;
	
	for(i =1; i < 11; i++){
		printf("Digite o %d numero: ", i);
		scanf("%d", & n);
		
		if(n %2 == 0){
			par += 1;
		}else{
			impar += 1;
		}
	}
	printf("%d sao pares e %d sao impares", par, impar);
	
}
