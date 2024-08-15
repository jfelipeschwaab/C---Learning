#include <stdio.h>


int main(){
    system("cls");
    int vetor[5];
    int num;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o numero %d a ser armazenado\n", i+1);
        scanf("%d", &num);
        vetor[i] = num;
        num = 0;
    }
    printf("Imprimindo na ordem inversa:\n");
    for (int j = (sizeof(vetor)/sizeof(vetor[0])) - 1; j >= 0; j--)
    {
        printf("|%d|", vetor[j]);
    }
    
    

}