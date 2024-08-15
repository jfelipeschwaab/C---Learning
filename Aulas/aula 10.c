#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void systemClear(){
    system("cls");
}
int main(){
    systemClear();
    int op;
    char nome[30];
    char sobrenome[30];
    char curso[30];
    char nomeCase4[30];
    char nome2Case4[30];
    char cattext[100];
    printf("Bem vindo a aula 10, digite qual exemplo voce deseja testar: \n(1)Nome e sobrenome com Scanf\n(2)Nome,sobrenome e curso com scanf aprimorado\n(3)nome, sobrenome e curso com fgets\n(4)Uso do strcpy\n(5)Uso do strcat");
    printf("\n\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        puts("Digite seu nome:");
        scanf("%s", nome);
        puts("Digite seu sobrenome:");
        scanf("%s", sobrenome);
        printf("\nNome digitado: %s", nome);
        printf("\nSobrenome digitado: %s", sobrenome);
        break;

    case 2:
        fflush(stdin);
        puts("Digite seu nome:");
        scanf("%9[^\n]s", nome);
        fflush(stdin);

        puts("Digite seu sobrenome:");
        scanf("%9[^\n]s", sobrenome);
        fflush(stdin);

        puts("Digite seu curso: ");
        scanf("%29[^\n]s", curso);
        fflush(stdin);

        printf("\n%s %s\nCurso:%s", nome, sobrenome, curso);

        break;
    
    case 3:
        fflush(stdin);
        puts("Digite seu nome:");
        fgets(nome, 10, stdin);
        fflush(stdin);

        puts("Digite seu sobrenome:");
        fgets(sobrenome, 10, stdin);
        fflush(stdin);

        puts("Digite seu curso: ");
        fgets(curso, 30, stdin);
        fflush(stdin);

        printf("\n%s %s\nCurso:%s", nome, sobrenome, curso);
        break;

    case 4:
        fflush(stdin);
        puts("Digite um nome para ele ser copiado");
        fgets(nomeCase4,30,stdin);

        strcpy(nome2Case4, nomeCase4);
        printf("\nNome 1: %s\nNome 2: %s",nomeCase4, nome2Case4);
        break;

    case 5:
        fflush(stdin);
        puts("Digite um nome");
        fgets(nome,30,stdin);

        nome[strcspn(nome, "\n")] = '\0';

        fflush(stdin);
        printf("Digite um sobrenome:");
        fgets(sobrenome,10, stdin);
        fflush(stdin);
        printf("\n\n");
        strcat(nome,sobrenome);

        printf("%s", nome);

        


        
        break;

    default:
        printf("Numero invalido");
        break;
    }

}