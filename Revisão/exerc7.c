#include <stdio.h>
void systemClear(){
    system("cls");
}
int main(){
    systemClear();
    char nome[50];
    int idade = 0;
    printf("Digite seu nome e logo em seguida, sua idade\n\n");
    fflush(stdin);
    fgets(nome, 50, stdin);
    fflush(stdin);
    scanf("%d", &idade);
    printf("Nome: %s\nIdade: %d", nome, idade);
    
}