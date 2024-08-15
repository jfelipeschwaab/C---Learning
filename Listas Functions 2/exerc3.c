#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct _aluno
{
    char nome[50];
    float notas[3];
}Aluno;

float mediaNotas(Aluno aluno);

int main(){
    Aluno aluno;
    puts("Bem vindo a calculadora de media, primeiro, diga seu nome:");
    fgets(aluno.nome, 50, stdin);
    fflush(stdin);
    float num;
    int size;
    size = (sizeof(aluno.notas)/sizeof(aluno.notas[0]));
    for (int i = 0; i < 3; i++)
    {
        printf("\nDigite a nota %d\n", i+1);
        scanf("%f", &num);
        aluno.notas[i] = num;
        num = 0;
    }
    fflush(stdin);
    printf("A media eh: %.2f", mediaNotas(aluno)/size);
}

float mediaNotas(Aluno aluno){
    float total = 0;

    for (int i = 0; i < 3; i++)
    {
        total += aluno.notas[i];
    }
    return total;
    
}