#include <stdio.h>

//Com retorno e com parametro
int soma(int num1,int num2){
    return num1 + num2;
}

//Sem retorno e Sem parametro
void sayHello(char greet[50]){
    printf("Hello %s", greet);
}

void imprime1(int vetor[], int n){
    int i;
    for(i = 0;i < n; i++){
        printf("%d ", vetor[i]);
    }
}

void imprime2(int vetor[10]){
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    
}

void imprime3(int *vetor, int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    
}
int main(){
    int vetor[5] = {1,2,3,4,5};
    int vetor2[10] = {1,2,3,4,5,6,7,8,9,10};
    puts("Primeiro");
    imprime1(vetor, 5);
    puts("Segundo");
    imprime2(vetor2);
    puts("Terceiro");
    imprime3(vetor, 5);
}

