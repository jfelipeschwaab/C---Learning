#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _livro {
  char titulo[100];
  int numeroPaginas;
  float preco;

  
} Livro;


typedef struct _aluno {
  char nome[100];
  int idade;
  Livro *livro_fav;
} Aluno;

Livro *create_livro(char *titulo, int numeroPaginas, float preco){
  
  Livro *livro = calloc(1, sizeof(Livro));
  strcpy(livro->titulo, titulo);
  livro->numeroPaginas = numeroPaginas;
  livro->preco = preco;

  return livro;
}

Livro *copy_livro(Livro *livro){
  return create_livro(livro->titulo, livro->numeroPaginas, livro->preco);
}

void display_livro(Livro *livro){
  printf("Titulo: %s\n", livro->titulo);
  printf("Numero de paginas: %d\n", livro->numeroPaginas);
  printf("preco: %.2f\n", livro->preco);
  
}

void deallocate_livro(Livro **livro_ref){
  Livro *livro = *livro_ref;
  free(livro);
  *livro_ref = NULL;
}

void update_livro(Livro *livro_ref, float novoPreco){
  livro_ref->preco = novoPreco;
}

Aluno *create_aluno(char *nome, int idade, const Livro *livro) {
    Aluno *aluno = calloc(1, sizeof(Aluno));
    strcpy(aluno->nome, nome);
    aluno->idade = idade;
    aluno->livro_fav=copy_livro(livro);

    return aluno;
}

void deallocate_aluno(Aluno **aluno_ref) {
  free(aluno_ref);
  *aluno_ref = NULL;
}

void display_aluno(const Aluno *aluno) {
  puts("Aluno:");
  printf("Nome: %s\n", aluno->nome);
  printf("Idade: %d\n", aluno->idade);
  display_livro(aluno->livro_fav);
}

int main() {
  Livro *LordOfTheRing = create_livro("Lord Of The Ring", 280, 129);
  Livro *CaliceDeFogo = create_livro("Calice de Fogo", 300, 70);
  display_livro(LordOfTheRing);
  display_livro(CaliceDeFogo);
  
  update_livro(LordOfTheRing, 400);
  update_livro(CaliceDeFogo, 200);
  
  
  Aluno *bob = create_aluno("Bob", 30, LordOfTheRing);
  Aluno *mariana = create_aluno("Mariana", 19, CaliceDeFogo);

  display_aluno(bob);
  display_aluno(mariana);

  deallocate_aluno(&bob);
  deallocate_aluno(&mariana);

  deallocate_livro(&LordOfTheRing);
  deallocate_livro(&CaliceDeFogo);

  return 0;
}