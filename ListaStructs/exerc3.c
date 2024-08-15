#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void systemClear(){
    system("cls");
}

#define N 3
typedef struct _pessoas
{
    char nome[50];
    int idade;
    char cidade[50];
}Pessoas;

int main(){
    systemClear();
    int op;
    printf("Digite a quantidade de pessoas que voce quer inserir: \n");
    scanf("%d", &op);
    fflush(stdin);
    Pessoas pessoas[op];
    for (int i = 0; i < op; i++)
    {
        printf("Insira o nome da pessoa:\n");
        fgets(pessoas[i].nome, 50, stdin);
        fflush(stdin);

        printf("Insira a idade: \n");
        scanf("%d", &pessoas[i].idade);
        fflush(stdin);

        printf("Insira a cidade da pessoa:\n");
        fgets(pessoas[i].cidade, 50, stdin);
        fflush(stdin);
    }
    systemClear();
    for (int j = 0; j < op; j++)
    {
        printf("Pessoa %d\n", j+1);
        printf("Nome: %s", pessoas[j].nome);
        printf("Idade: %d\n", pessoas[j].idade);
        printf("Cidade: %s\n\n", pessoas[j].cidade);
    }
    
    


}