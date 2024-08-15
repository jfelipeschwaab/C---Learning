#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void systemClear(){
    system("cls");
}

#define N 3
typedef struct _livros
{
    char nome[50];
    int ano;
    char autor[50];

}Livros;

int main(){
    systemClear();
    int op;
    printf("Digite a quantidade de Livros que voce quer inserir: \n");
    scanf("%d", &op);
    fflush(stdin);
    Livros livros[op];
    for (int i = 0; i < op; i++)
    {
        printf("Insira o nome do Livro:\n");
        fgets(livros[i].nome, 50, stdin);
        fflush(stdin);

        printf("Insira o Autor: \n");
        fgets(livros[i].autor, 50, stdin);
        fflush(stdin);

        printf("Insira o ano do Livro:\n");
        scanf("%d", &livros[i].ano);
        fflush(stdin);
    }
    systemClear();
    for (int j = 0; j < op; j++)
    {
        printf("Livro: %d\n", j+1);
        printf("Nome: %s", livros[j].nome);
        printf("autor: %s", livros[j].autor);
        printf("ano: %d\n\n", livros[j].ano);
    }
}