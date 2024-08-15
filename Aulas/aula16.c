#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _univ{
char nome[100];
} Universidade;

typedef struct _aluno{

char nome[50];
int idade;
Universidade *universidade;

}Aluno;

Universidade *createUniversidade(char *nome){

Universidade *u = calloc(1, sizeof(Universidade));
strcpy(u->nome, nome);
return u;

}
Universidade *copyUniversidade(Universidade *univ){

return createUniversidade(univ->nome);

}

void desaloca_universidade(Universidade **univ_ref){

Universidade *universidade = *univ_ref;
free(universidade);
*univ_ref = NULL;

}

void displayUniv(Universidade *univ){

printf("Universidade %s\n", univ->nome);

}

Aluno *createAluno(char *nome, int idade, Universidade *univ){

Aluno *a = calloc(1, sizeof(Aluno));
strcpy(a->nome, nome);
a->idade = idade;
a->universidade = copyUniversidade(univ);
return a;

}

void desaloca_aluno(Aluno **aluno_ref){
Aluno *aluno = *aluno_ref;
free(aluno);
*aluno_ref = NULL;
}

void printAluno(Aluno *aluno){

printf("Nome: %s\n", aluno->nome);
printf("Idade: %d\n", aluno->idade);
displayUniv(aluno->universidade);

}

int main(void) {

Universidade *u = createUniversidade("Catolica");
Aluno *maria = createAluno("Maria", 20, u);
Universidade *unb = createUniversidade("UNB");
Aluno *ludmila = createAluno("Ludmila", 18, unb);
printAluno(maria);
printAluno(ludmila);
desaloca_universidade(&u);
desaloca_universidade(&unb);
desaloca_aluno(&maria);
desaloca_aluno(&ludmila);
return 0;

}