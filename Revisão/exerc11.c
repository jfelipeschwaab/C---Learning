#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int num = 0;
    printf("Digite um numero de 1 a 7\n\n");
    scanf("%d", &num);
    printf("\n\n");
    switch (num)
    {
    case 1:
        printf("Hoje eh domingo");
        break;
    case 2:
        printf("Hoje eh segunda");
        break;
    case 3:
        printf("Hoje eh terca");
        break;
    case 4:
        printf("Hoje eh quarta");
        break;
    case 5:
        printf("Hoje eh quinta");
        break;
    case 6:
        printf("Hoje eh sexta");
        break;
    case 7:
        printf("Hoje eh Sabado");
        break;
    
    default:
        break;
    }

    
}
