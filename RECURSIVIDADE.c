#include <stdio.h>

int fat(int parm);

int main(void){
	int num, resp;
	printf("Digite o numero: ");
	scanf("%d",& num);
	
	resp = fat(num);
	printf("Fatorial de %d eh %d\n", num, resp);
}

int fat(int parm){
	//1º controle de parada
	if(parm <= 2){
		return parm;
	}
	
	//2º processamento de parcial
	return parm * fat(parm - 1);
}
