#include <stdio.h>

int main(){
    int n = 0;
    printf("Forneça um numero inteiro: \n\n");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("%d eh positivo!", n);
    }else if(n == 0){
        printf("%d eh Neutro", n);
    }else{
        printf("%d eh negativo!", n);
    }
    
}