#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *apt1, *apt2;
    
    if(!(apt1 = malloc(sizeof(int)))){
        printf("Falha 1\n");
        exit(1);
    }
    
    if(!(apt2 = malloc(sizeof(int)))){
        printf("Falha 2\n");
        exit(2);
    }
    
    printf("Digite o primeiro: ");
    scanf("%d", apt1);  // Corre��o aqui
    
    printf("Digite o segundo: ");
    scanf("%d", apt2);  // Corre��o aqui
    
    printf("Soma: %d\n", (*apt1) + (*apt2));
    
    free(apt1);
    free(apt2);  // Corre��o aqui
    
    return 0;
}

