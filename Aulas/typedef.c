#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30

typedef struct StructChar{
    char c;
}Caractere;

typedef struct _pessoa{
    int idade;
    float peso;
    char nome[N];
}Pessoa;

int main(){
    system("cls");
    //Caractere char1;
    //char1.c = 'J';
    //printf("%c", char1.c);
    Pessoa humano = {0,0.0,"Joao Felipe"};
    int n = sizeof(humano.nome) / sizeof(humano.nome[0]);

    puts("Imprimindo dados de pessoa:");
    printf("Idade: %d\nPeso: %.2f\nNome: %s\n", humano.idade, humano.peso, humano.nome);

    humano.idade = 18;
    humano.peso = 70.0;
    strcpy(humano.nome, "Eu denovo");

    //Atribuindo dados dinamicamente

    

}