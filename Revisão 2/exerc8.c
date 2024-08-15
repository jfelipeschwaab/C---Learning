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
    }
    for (int j = 0; j < num; j++){
        resultado *= fatorial[j];
    }
    for (int k = sizeof(fatorial)/sizeof(fatorial[0]) - 1 ; k >= 0; k--)
    {   
        if (k == 0)
        {
            printf("%d", fatorial[k]);       
            break; 
            }
        
        printf("%d x ", fatorial[k]);
    }
    
    printf("\nO resultado eh %d", resultado);
    
}