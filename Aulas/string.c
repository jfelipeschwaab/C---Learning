#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 30

void clearScreen(){
    system("cls");
}


int main(){
    char s[N];
    //printf("Digite qualquer coisa(scanf aprimorado: \n)");
    //scanf("%9[^\n]s", s);     //scanf aprimorado para pegar apenas as 9 primeiras letras que o usuario digitar
    //fflush(stdin);  //limpa a memoria usada pelo scanf, para nao bugar, sempre necessario
    //printf("Aprimorado - Foi digitado: %s\n", s);

    //printf("Digite qualquer coisa com o fgets");  
    //fgets(s,sizeof(s),stdin);  //scanf para strings, melhor formatado
    //fflush(stdin);
    //gets(s);

    //char origem[N] = {"Ola mundo"};
    //char destino[N];
    //printf("Antes do strcpy:\n");
    //puts(origem);
    //puts(destino);
    //strcpy(destino, origem); //copia a string original para a string secundária
    //printf("Depois do strcpy: \n");
    //puts(origem);
    //puts(destino);

    //clearScreen();
    //char s1[N] = {"Algoritmo e "};
    //char s2[N] = {"Programacao Estruturada"};
    //printf("Antes do strcat\n");
    //printf("S1: %s\n", s1);
    //printf("S2:%s\n\n", s2);
    //strcat(s1,s2);      //concatenação de strings.
    //printf("Depois do strcat\n");
    //puts(s1);

    //clearScreen();
    //char s[N];
    //int i;
    //printf("Digite um texto:\n");
    //fgets(s,N,stdin);
    //fflush(stdin);
    //s[strcspn(s,"\n")] = '\0'; //Limpa os espaços vazios nas strings
    //i = strlen(s);  //aloca o tamanho da string sem espaços vazios após a remoção dos espaços vazios
    //printf("Tamanho do texto digitado: %d\n", i);
    //printf("Impressao de posicao em posicao\n");
    //for (i=0; i < strlen(s); i++){
    //    printf("%d - %c \n", i, s[i]);
    //}

    clearScreen();
    char staticText[N] = {"soudev"};
    char senha_usr[N];
    int ok;

    printf("Digite sua senha:\n");
    fgets(senha_usr,sizeof(senha_usr),stdin);

    clearScreen();

    senha_usr[strcspn(senha_usr, "\n")] ='\0';

    ok = strcmp(staticText, senha_usr);

    if(ok==0){
        printf("Acesso Liberado");
    }else{
        printf("Acesso Negado");
    }






    return 0;

}
