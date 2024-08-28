#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializa a semente aleat�ria com o tempo atual
    srand(time(NULL));

    // Gera um n�mero aleat�rio entre 0 e 99
    int numero_aleatorio = rand() % 100;

    // Imprime o n�mero gerado
    printf("%d", numero_aleatorio);
    
}
