#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void systemClear(){
    system("cls");
}

#define N 3
typedef struct _pessoa
{
    char nome[50];
    int idade;
    int mat;
    float media;
    
}Pessoa;

int main(){
    systemClear();
    int i;
    Pessoa pessoas[N];
    int contagem = 1;

    for(i=0;i<N;i++){
        printf("Insira os dados %d: \n", i + 1);
        puts("Nome: ");
        fgets(pessoas[i].nome,50,stdin);
        fflush(stdin);
        
        puts("Idade: ");
        scanf("%d", &pessoas[i].idade);
        fflush(stdin);

        puts("Matricula: ");
        scanf("%d", &pessoas[i].mat);
        fflush(stdin);

        puts("Media: ");
        scanf("%f", &pessoas[i].media);
        fflush(stdin);
    }

    printf("\n\n");
    for(int j = 0; j < N; j++)
    {
        printf("Pessoa: %d\n", contagem);
        printf("Nome: %s\n", pessoas[j].nome);
        printf("Idade: %d\n", pessoas[j].idade);
        printf("Matricula: %d\n", pessoas[j].mat);
        printf("Media: %.2f\n", pessoas[j].media);
        contagem++;

    }
    
    
    

}
