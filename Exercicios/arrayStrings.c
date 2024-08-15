#include <stdio.h>
#define NUM_NOTAS 3
#define TAM_NOME 50
#define TAM_NOME 50
#define TAM_RUA 50
#define TAM_CIDADE 50
#define NUM_PESSOAS 3

struct Aluno {
    char nome[TAM_NOME];
    float notas[NUM_NOTAS];
};

struct Endereco {
    char rua[TAM_RUA];
    int numero;
    char cidade[TAM_CIDADE];
};

struct Pessoa {
    char nome[TAM_NOME];
    int idade;
    struct Endereco endereco;
};

int main (){
    #define NUM_STRINGS 3
    #define STRING_SIZE 50


    int op = 0;
    char arrStrings[NUM_STRINGS][STRING_SIZE];
    struct Aluno aluno;
    struct Pessoa pessoa;
    struct Pessoa pessoas[NUM_PESSOAS];

    

    while (op != 5)
    {
        printf("Qual exercicio voce quer realizar:\n(1)Array de Strings\n(2)Struct Com Array\n(3)Struct Aninhada\n(4)Array de Structs\n(5)Sair do Questionário\n");
        scanf("%d", &op);
        getchar(); 
        switch (op)
        {
        case 1:
            for (int i = 0; i < NUM_STRINGS; i++)
            {
                printf("Digite a string %d, (max caracteres: %d)", i+1, STRING_SIZE);
                fgets(arrStrings[i], STRING_SIZE, stdin);
                fflush(stdin);
            }

            printf("Strings inseridas: \n");
            for (int j = 0; j < NUM_STRINGS; j++)
            {
                printf("string %d: %s", j+1, arrStrings[j]);
            }
            
            break;
        
        case 2:
            printf("Digite o nome do aluno: ");
            fflush(stdin);
            fgets(aluno.nome, TAM_NOME, stdin);
            fflush(stdin);
            
            for (int i = 0; i < NUM_NOTAS; i++) {
            printf("Digite a nota %d: ", i + 1);
            scanf("%f", &aluno.notas[i]);
            }

            printf("\nNome do aluno: %s\n", aluno.nome);
            printf("Notas:\n");
            for (int i = 0; i < NUM_NOTAS; i++) {
                printf("Nota %d: %.2f\n", i + 1, aluno.notas[i]);
            }

            break;

        case 3:
            printf("Digite o nome da pessoa: ");
            fflush(stdin);
            fgets(pessoa.nome, TAM_NOME, stdin);
            fflush(stdin);

            printf("Digite a idade da pessoa: ");
            scanf("%d", &pessoa.idade);
            getchar(); 

            printf("Digite o nome da rua: ");
            fflush(stdin);
            fgets(pessoa.endereco.rua, TAM_RUA, stdin);
            fflush(stdin);

            printf("Digite o número da casa: ");
            scanf("%d", &pessoa.endereco.numero);
            getchar();

            printf("Digite o nome da cidade: ");
            fgets(pessoa.endereco.cidade, TAM_CIDADE, stdin);
            fflush(stdin);

            printf("\nDados da Pessoa:\n");
            printf("Nome: %s", pessoa.nome);
            printf("Idade: %d\n", pessoa.idade);
            printf("Endereço:\n");
            printf("Rua: %s", pessoa.endereco.rua);
            printf("Número: %d\n", pessoa.endereco.numero);
            printf("Cidade: %s", pessoa.endereco.cidade);

            break;
        
        case 4:
            for (int i = 0; i < NUM_PESSOAS; i++) {
                printf("Pessoa %d\n", i + 1);
                
                printf("Digite o nome da pessoa: ");
                fgets(pessoas[i].nome, TAM_NOME, stdin);
                fflush(stdin);

                printf("Digite a idade da pessoa: ");
                scanf("%d", &pessoas[i].idade);
                getchar();

                
                printf("Digite o nome da rua: ");
                fgets(pessoas[i].endereco.rua, TAM_RUA, stdin);
                fflush(stdin);

                printf("Digite o número da casa: ");
                scanf("%d", &pessoas[i].endereco.numero);
                getchar(); 

                printf("Digite o nome da cidade: ");
                fgets(pessoas[i].endereco.cidade, TAM_CIDADE, stdin);
                fflush(stdin);

                printf("\n");

                printf("Dados das Pessoas:\n");
            }
            for (int i = 0; i < NUM_PESSOAS; i++) {
                    printf("Pessoa %d\n", i + 1);
                    printf("Nome: %s", pessoas[i].nome);
                    printf("Idade: %d\n", pessoas[i].idade);
                    printf("Endereço:\n");
                    printf("Rua: %s", pessoas[i].endereco.rua);
                    printf("Número: %d\n", pessoas[i].endereco.numero);
                    printf("Cidade: %s", pessoas[i].endereco.cidade);
                    printf("\n"); 
                }
        default:
            break;
        }
    }
    
}