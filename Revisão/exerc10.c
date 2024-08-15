#include <stdio.h>

int main(){
    int ano;
    printf("Digite um ano para verificar se o mesmo eh bissexto:\n\n");

    scanf("%d", &ano);
    if(ano % 4 == 0 && ano % 100 != 0){
        printf("\nAno bissexto");
    }else if (ano % 4 == 0 && ano % 400 == 0 && ano % 100 == 0)
    {
        printf("\nAno Bissexto");
    }else{
        printf("Ano nao bissexto");
    }
    
    


}