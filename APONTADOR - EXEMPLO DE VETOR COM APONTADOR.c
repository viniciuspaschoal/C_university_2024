//EXEMPLO DE VETOR COM APONTADOR

#include <stdio.h>
#include <stdio.h>

int main(void){
	int i, vet[5], *apt;
	
	for(i = 1; i < 6; i++){
		printf("Digite o %d numero: ", i);
		scanf("%d", &vet[i]);
	}
	
	i = 0;
	apt = vet;			//Mesma coisa que apt = &vet[0]
	
	while(i<5){
		printf("Valor %d\n", *apt);
		apt ++;
		i ++;
	}
	return 0;
}
