#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero para obter a tabuada do mesmo:\n\n");
    scanf("%d", &num);
    
    printf("\n");
    for(int i=1; i<=10;i++){
        printf("%d x %d = %d\n",num, i, num * i);
    }
}