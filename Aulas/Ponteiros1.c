#include <stdio.h>
#include <stdlib.h>


void imprimeVetor(int *vetor, int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        printf("|%d|", vetor[i]);
    }
    printf("\n");
    
}

void ImprimeVetorColchetes(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        printf("|%d|", vetor[i]);
    }
    printf("\n");
}

int main(){
    int *p;
    int v[5] = {0, 1 , 2, 3, 4};
    int tamanho = sizeof(v)/sizeof(v[0]);
    p = v;

    imprimeVetor(p, tamanho);
    
}

