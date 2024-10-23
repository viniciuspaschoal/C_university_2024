#include <stdio.h>
#include <string.h>

int main(void){
	char pri[30], seg[30];
	
	memset(pri, 0, 30);
	memset(seg, 0, 30);
	
	printf("Digite a primeira palavra: ");
	scanf(" %30[^\n]", pri);
	
	printf("Digite a segundo palavra: ");
	scanf(" %30[^\n]", seg);
	
	if (strcmp(pri, seg) <0){
		printf("Ordem: %s, %s\n", pri, seg);
	}
	else{
		printf("Ordem: %s, %s\n", seg, pri);
	}
	
	return 0;
}
