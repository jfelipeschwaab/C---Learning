#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void systemClear(){
    system("cls");
}

#define N 3
typedef struct _produtos
{
    char nome[50];
    float preco;
    int quantidadeEstoque;
}Produto;

int main(){
    systemClear();
    int i;
    Produto produtos[N];
    int contagem = 1;

    for(i=0;i<N;i++){
        printf("Insira os dados %d: \n", i + 1);
        puts("Nome do produto: ");
        fgets(produtos[i].nome,50,stdin);
        fflush(stdin);
        
        puts("Preco do produto");
        scanf("%f", &produtos[i].preco);
        fflush(stdin);

        puts("Quantidade em Estoque: ");
        scanf("%d", &produtos[i].quantidadeEstoque);
        fflush(stdin);
    }

    printf("\n\n");
    for(int j = 0; j < N; j++)
    {
        printf("Produto: %d\n", contagem);
        printf("Nome: %s", produtos[j].nome);
        printf("Valor:%.2f\n", produtos[j].preco);
        printf("Estoque: %d\n\n", produtos[j].quantidadeEstoque);
        contagem++;

    }
    
    
    

}
