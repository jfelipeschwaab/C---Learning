#include <stdio.h>

void incrementa(int *valor) {
    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", valor);
    printf("O endereco de memoria eh ¨%d\n", &valor);
    printf("Depois de incrementar.\n");
    printf("O contador vale: %d\n", ++valor);
    printf("O endereco de memoria eh ¨%d\n", &valor);
    valor ++;
}

int main(){
    int cont = 10;
    printf("Antes de incrementar.\n");
    printf("O Contador vale: %d\n", cont);

    incrementa(&cont);

    printf("Depois de incrementar.\n");
    printf("O Contador vale: %d\n", cont);
    printf("O endereco de memoria eh %d\n", &cont);   
}