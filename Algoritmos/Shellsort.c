#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void shell_sort(int vetor[], int tam) {
    int grupo = 1;
    while (grupo < tam) {
        grupo = 3 * grupo + 1;
    }
    while (grupo > 1) {
        grupo /= 3;  
        for (int i = grupo; i < tam; i++) {
            int troca = vetor[i];
            int j = i - grupo;

            while (j >= 0 && troca < vetor[j]) {
                vetor[j + grupo] = vetor[j];
                j -= grupo;
            }
            vetor[j + grupo] = troca;
        }
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

    shell_sort(vetor, 6);
    printf("Vetor ordenado com Shell Sort: ");
    printar_vetor(vetor, 6);

    return 0;
}
