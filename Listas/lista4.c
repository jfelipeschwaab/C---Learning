#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define n 8
#define m 12
#define j 20
 
 int main(){
    int op;
    int array[5] = {1,2,3,4,5};
    int i = 0;
    int soma = 0;
    float arrayCase2[5] = {1.5, 2.5, 3.5, 4.5, 5.5}, somaCase2;
    int iCase2;
    char stringCase3[15];
    int tamanhoCase3;
    char nomeCase4[20];
    char sobrenomeCase4[50];
    char nomeCompletoCase4[80];
    char senhaCase5[5] ={"hoje"};
    char senhaUserCase5[5];
    char string1Case6[n];
    char string2Case6[n];
    char nomeCase7[m], tempCase7;
    int iCase7, tamanhoCase7;
    char stringCase8[j];
    char letraCase8;
    int iCase8, contadorCase8 = 0;
    printf("Digite qual questao vc deseja acessar:\n\n(1)Soma de elementos em um array\n(2)Media de elementos em um array\n(3)Contagem de caracteres em uma string\n(4)Concatenacao de strings\n(5)Comparacao de Strings\n(6)Copia de Strings\n(7)Inversao de uma string\n(8)Contagem de ocorrencia de uma letra em uma string\n\n");
    scanf("%d", &op);
    while (op != 9)
    {
        switch (op)
    {
    case 1:
        for (i = 0; i < 5; i++){
            printf("%d -> ", array[i]);
            soma += array[i];
        }

        printf(" soma = %d", soma);
        break;
    case 2:
        for (iCase2 = 0; iCase2 < 5; iCase2++){
            printf("%.2f -> ", arrayCase2[iCase2]);
            somaCase2 += arrayCase2[iCase2];
        }

        printf("\nA media dos numeros e %.2f", somaCase2/5);
        break;

    case 3:
        

        puts("Digite algo com ate 14 caracteres:");
        fflush(stdin);
        fgets(stringCase3, 15, stdin);
        fflush(stdin);

        tamanhoCase3 = strlen(stringCase3);

        printf("Numero de caracteres: %d",tamanhoCase3-1);
        break;
    
    case 4:

        printf("Digite seu primeiro nome:");
        fflush(stdin);
        fgets(nomeCase4, 20, stdin);
        fflush(stdin);

        printf("Digite seu sobrenome:");
        fflush(stdin);
        fgets(sobrenomeCase4, 50, stdin);
        fflush(stdin);

        strcat(nomeCase4, sobrenomeCase4);

        strcpy(nomeCompletoCase4, nomeCase4);

        printf("\nNome completo: %s", nomeCompletoCase4);
        break;

    case 5:

        printf("Digite a senha: ");
        fflush(stdin);
        fgets(senhaUserCase5,5, stdin);
        fflush(stdin);

        if (strcmp(senhaUserCase5, senhaCase5) == 0){
            printf("A senha esta correta");
        }else{
            printf("A senha esta incorreta");
        }

    case 6:

        printf("Digite um nome: ");
        fflush(stdin);
        fgets(string1Case6, n, stdin);
        fflush(stdin);

        strcpy(string2Case6,string1Case6);

        printf("String 1: %s", string1Case6);
        printf("String 2: %s", string2Case6);
        break;
    
    case 7:
        printf("Digite um nome: ");
        fflush(stdin);
        fgets(nomeCase7, sizeof(nomeCase7), stdin);
        fflush(stdin);

        tamanhoCase7 = strlen(nomeCase7);

        for (iCase7=0;iCase7<tamanhoCase7/2;iCase7++){
            tempCase7 = nomeCase7[iCase7];
            nomeCase7[iCase7]= nomeCase7[tamanhoCase7-1-iCase7];
            nomeCase7[tamanhoCase7-1-iCase7] = tempCase7;
        }

        printf("String invertida: %s\n", nomeCase7);
        break;

    case 8:

        printf("Digite uma string(19): ");
        fgets(stringCase8, n, stdin);

        printf("Digite uma letra:");
        scanf("%c", &letraCase8);

        for (iCase8=0;iCase8<n;iCase8++){
            if (stringCase8[iCase8] == letraCase8){
                contadorCase8++;
            }
        }

        printf("A letra %c aparece %d vezes em (%s)", letraCase8, contadorCase8, stringCase8);
        break;
    default:
        break;
    }
    }
    
    
 }