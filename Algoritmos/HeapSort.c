#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cria_heap(int vetor[], int n, int i) {
    int maior = i; 
    int esquerda = 2 * i + 1;  
    int direita = 2 * i + 2;  

    if (esquerda < n && vetor[esquerda] > vetor[maior])
        maior = esquerda;

    if (direita < n && vetor[direita] > vetor[maior])
        maior = direita;

    if (maior != i) {
        int temp = vetor[i];
        vetor[i] = vetor[maior];
        vetor[maior] = temp;

        cria_heap(vetor, n, maior);
    }
}

void heap_sort(int vetor[], int n) {

    for (int i = n / 2 - 1; i >= 0; i--)
        cria_heap(vetor, n, i);


    for (int i = n - 1; i > 0; i--) {

        int temp = vetor[0];
        vetor[0] = vetor[i];
        vetor[i] = temp;

        cria_heap(vetor, i, 0);
    }
}

void preencher_vetor(int vetor[], int tam) {
    for (int i = 0; i < tam; i++) {
        int num = rand() % 100;  
        int repetido = 0;

        for (int j = 0; j < i; j++) {
            if (vetor[j] == num) {
                repetido = 1;
                break;
            }
        }
        if (repetido == 0) {
            vetor[i] = num;  
        } else {
            i--;  
        }
    }
}

void printar_vetor(int vetor[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[6];

    preencher_vetor(vetor, 6);

    printf("Vetor original: ");
    printar_vetor(vetor, 6);

    heap_sort(vetor, 6);

    printf("Vetor ordenado com Heap Sort: ");
    printar_vetor(vetor, 6);

    return 0;
}
