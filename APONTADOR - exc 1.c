/* Escreva um programa em C que leia dois n�meros inteiros e mostre 
sua soma usando duas vari�veis est�ticas e um apontador para TODOS 
os acessos a essas vari�veis est�ticas.*/

#include <stdio.h>
#include <stdlib.h>


int main(void){
	int n1, n2, *apt;
	
	printf("Digite o primeiro numero: ");
	apt = &n1;
	scanf("%d", apt);
	
	printf("Digite o sehundo numero: ");
	apt = &n2;
	scanf("%d", n2);
	
	printf("A soma de %d + %d = %d", n1, n2, n1+n2);
	return 0;
	
}
