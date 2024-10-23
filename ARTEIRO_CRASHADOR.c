#include <stdio.h>
#include <stdlib.h>

int main(void){
	int pos, *vet;
	
	for(pos = 0; pos< 1000000; pos++){
		if(!(vet = malloc(30000 * sizeof(int)))){
			printf("faltou memória ao criar %d vetores \n", pos);
			exit(1);
		}
		
		printf("%d ", pos);
	}
	return 0;
}
