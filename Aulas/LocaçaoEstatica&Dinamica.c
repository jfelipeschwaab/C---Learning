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
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int i;

    //Alocação dinamica de memória para o vetor
    int *vetor = malloc(tamanho * sizeof(int));

    // Preenchendo o vetor com alguns valores
    for (i = 0; i <tamanho; i++)
    {
        vetor[i] = i + 1;
    }

    // Imprimindo o vetor usando as duas funções
    printf("Usando a função que recebe um ponteiro:\n");
    imprimeVetor(vetor, tamanho);

    printf("Usando a função que recebe um vetor via colchetes []:\n");
    ImprimeVetorColchetes(vetor, tamanho);

    free(vetor);
    
}

