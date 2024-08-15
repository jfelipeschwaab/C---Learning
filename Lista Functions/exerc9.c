#include <stdio.h>


void Fatorial(int num);

int main(){
    int num;
    puts("Digite um numero para obter seu fatorial");
    scanf("%d", &num);
    Fatorial(num);
}

void Fatorial(int num){
    
    int fatorial[num];
    int resultado = 1;
    for (int i = 0; i < num; i++)
    {
        fatorial[i] = (i + 1);
        printf("%d ", fatorial[i]);
    }
    for (int j = 0; j < num; j++){
        resultado *= fatorial[j];
    }
    printf("\nO resultado eh %d", resultado);
    
}