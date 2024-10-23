#include <stdio.h>
#include <string.h>

int main(void){
	char nome[30], rua[30], linha[100];
	
	memset(nome, 0, 30);
	memset(rua, 0, 30);
	memset(linha, 0, 100);
	
	strncpy(nome, "um teste", 8);
	printf("resultado: %s\n", nome);
	printf("tamanho: %d\n", strlen(nome));
	strncpy(rua, "outro teste", 11);
	strcat(linha, nome);
	printf("linha: %s\n", linha);
	strcat(linha, ", ");
	strcat(linha, rua);
	printf("linha: %s\n", linha);
	printf("comparando: %d\n", strcmp (nome, rua));
	return 0;
}
	
	
