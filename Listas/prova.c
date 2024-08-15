#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void systemClear(){
    system("cls");
}

int main(){
    systemClear();
    int points = 0;
    int question = 1;
    char answer[2];
    while(question <=7){
        switch (question)
        {
        case 1:
            printf("\nQuestao 1:\n\nQual a sintaxe correta para declarar uma variavel inteira em C?\na) int x;\nb) var x;\nc) intenger x;\nd) numero x;\n");
            puts("Digite sua resposta:");
            fflush(stdin);
            fgets(answer,2,stdin);
            fflush(stdin);
            if(strcmp(answer,"A") == 0 || strcmp(answer,"a") == 0){
                printf("Parabens!, voce acertou!\n");
                question++;
                points++;
            }else{
                printf("Voce errou!\n");
                question++;
            }
            sleep(1);
            
        
        case 2:
            printf("\nQuestao 2:\n\nQual a funcao usada para imprimir no console em C?\na) print();\nb) console.log();\nc) printtext();\nd) printf();\n");
            puts("Digite sua resposta:");
            fflush(stdin);
            fgets(answer,2,stdin);
            fflush(stdin);
            if(strcmp(answer, "D") == 0 || strcmp(answer,"d") == 0){
                puts("Parabens!, voce acertou\n");
                question++;
                points++;
            }else{
                puts("Voce errou!");
                question++;
            }
            sleep(1);

        case 3:
            printf("\nQuestao 3:\n\nO que o operador '==' faz em C?\na) Atribui um valor a variavel\nb) Compara dois valores\nc) Divide dois valores\nd) Multiplica dois valores\n");
            puts("Digite sua resposta:");
            fflush(stdin);
            fgets(answer,2,stdin);
            fflush(stdin);
            if(strcmp(answer, "b") == 0 || strcmp(answer,"B") == 0){
                puts("Parabens!, voce acertou\n");
                question++;
                points++;
            }else{
                puts("Voce errou!");
                question++;
            }
            sleep(1);

        case 4:
            printf("\nQuestao 4:\n\nQual eh o operador logico para 'OU' em C?\na) &&\nb) ||\nc) !\nd) <>\n");
            puts("Digite sua resposta:");
            fflush(stdin);
            fgets(answer,2,stdin);
            fflush(stdin);
            if(strcmp(answer, "b") == 0 || strcmp(answer,"B") == 0){
                puts("Parabens!, voce acertou\n");
                question++;
                points++;
            }else{
                puts("Voce errou!");
                question++;
            }
            sleep(1);
        
        case 5:
            printf("\nQuestao 5:\n\nQual a estrutura de controle usada para repeticao em C?\na) if\nb) switch\nc) for\nd) else\n");
            puts("Digite sua resposta:");
            fflush(stdin);
            fgets(answer,2,stdin);
            fflush(stdin);
            if(strcmp(answer, "c") == 0 || strcmp(answer,"C") == 0){
                puts("Parabens!, voce acertou\n");
                question++;
                points++;
            }else{
                puts("Voce errou!");
                question++;
            }
            sleep(1);

        case 6:
            printf("\nQuestao 6:\n\nQual eh a funcao usada para ler um numero inteiro em C?\na) read_intenger();\nb) input_int();\nc) scanf();\nd) get_int();\n");
            puts("Digite sua resposta:");
            fflush(stdin);
            fgets(answer,2,stdin);
            fflush(stdin);
            if(strcmp(answer, "c") == 0 || strcmp(answer,"C") == 0){
                puts("Parabens!, voce acertou\n");
                question++;
                points++;
            }else{
                puts("Voce errou!");
                question++;
            }
            sleep(1);

        case 7:
            printf("\nQuestao 7:\n\nQual o valor da expressao 5 + 3 * 2 em C?\na) 16\nb) 11\nc) 13\nd) 10\n");
            puts("Digite sua resposta:");
            fflush(stdin);
            fgets(answer,2,stdin);
            fflush(stdin);
            if(strcmp(answer, "b") == 0 || strcmp(answer,"B") == 0){
                puts("Parabens!, voce acertou\n");
                question++;
                points++;
            }else{
                puts("Voce errou!");
                question++;
            }
            sleep(1);

        default:
            break;
        }

        printf("\n\nVoce acertou %d/7, parabens!", points);
    }
    
    }