#include <stdio.h>

void contagem(int param);

int main(void){
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%d", & num);
	contagem(num);
	return 0;
}

void contagem(num){
	if(num < 0){
		return;
	}
	
	printf("%d\n", num);
	contagem(num -1);
}


