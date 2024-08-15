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
    float salario;
    char cargo[50];
}Funcionarios;

int main(){
    systemClear();
    int op;
    printf("Digite a quantidade de funcionarios que voce quer inserir: \n");
    scanf("%d", &op);
    fflush(stdin);
    Funcionarios funcionarios[op];
    for (int i = 0; i < op; i++)
    {
        printf("Insira o nome do Funcionario:\n");
        fgets(funcionarios[i].nome, 50, stdin);
        fflush(stdin);

        printf("Insira o cargo: \n");
        fgets(funcionarios[i].cargo, 50, stdin);
        fflush(stdin);

        printf("Insira o salario do Funcionario:\n");
        scanf("%f", &funcionarios[i].salario);
        fflush(stdin);
    }
    systemClear();
    for (int j = 0; j < op; j++)
    {
        printf("Funcionario: %d\n", j+1);
        printf("Nome: %s", funcionarios[j].nome);
        printf("Cargo: %s", funcionarios[j].cargo);
        printf("Salario: %.2f\n\n", funcionarios[j].salario);
    }
    
    


}