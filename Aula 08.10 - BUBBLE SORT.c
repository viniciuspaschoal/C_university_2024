#include <stdio.h>

int main(void) {
    int exte, inte, i, aux;
    int lista[10];

    // Entrada dos números
    for(i = 0; i < 10; i++) {
        printf("Digite um numero aleatorio: ");
        scanf("%d", &lista[i]);
    }

    // Algoritmo de Bubble Sort corrigido
    for(exte = 0; exte < 9; exte++) {
        for(inte = 0; inte < 9 - exte; inte++) {
            if(lista[inte] > lista[inte+1]) {
                aux = lista[inte];
                lista[inte] = lista[inte+1];
                lista[inte+1] = aux;
            }
        }
    }

    // Impressão da lista ordenada
    printf("Lista ordenada: \n");
    for(i = 0; i < 10; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    return 0;
}

