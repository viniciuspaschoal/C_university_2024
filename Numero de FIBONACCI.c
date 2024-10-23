// NUMERO DE FIBONACCI

#include <stdio.h>

int calcular(int termo);

int main(void) {
    int i, termo, fibonacci;

    printf("Digite o termo: ");
    scanf("%d", &termo);

    for (i = 1; i <= termo; i++) {  
        fibonacci = calcular(i);    
        printf("%d ", fibonacci);   
    }

    printf("\n");

    return 0;
}

int calcular(int termo) {
    if (termo <= 2) {
        return 1;
    }
    
    return calcular(termo - 1) + calcular(termo - 2);
}

