#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct _aluno
{
    char nome[50];
    int idade;
    float nota;
    
}Aluno;

Aluno criarAluno(Aluno aluno);

int main(){
    system("cls");
    int num;
    printf("Quantos alunos deseja criar?:\n");
    scanf("%d", &num);
    getchar();
    Aluno alunos[num];

    for (int i = 0; i < num; i++)
    {
        alunos[i] = criarAluno(alunos[i]);
    }
    for (int j = 0; j < num; j++)
    {
        printf("Aluno %d\n", j + 1);
        printf("Nome: %s\n", alunos[j].nome);
        printf("Idade: %d\n", alunos[j].idade);
        printf("Nota: %.2f\n", alunos[j].nota);
        printf("\n");
    }



    
    
}

Aluno criarAluno(Aluno aluno){
    printf("Insira os dados do aluno: Nome, idade e nota, respectivamente\n");
    fgets(aluno.nome, 50, stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';
    scanf("%d", &aluno.idade);
    getchar();
    scanf("%f", &aluno.nota);
    getchar();

    return aluno;
}