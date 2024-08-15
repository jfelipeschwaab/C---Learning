#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char nome[50];
    int tamanho;
    printf("Digite seu nome:\n\n");

    fflush(stdin);
    fgets(nome,50,stdin);
    fflush(stdin);
    
    nome[strcspn(nome, "\n")] = '\0';
    tamanho = strlen(nome);
    printf("O tamanho do seu nome eh: %d", tamanho);
}