#include <stdio.h>

int maiorNum(int num1, int num2){
    if (num1 > num2){
        printf("%d e maior que %d\n", num1, num2);
    }else if(num1 < num2){
        printf("%d e maior que %d\n", num2, num1);
    }else{
        printf("%d = %d\n", num1, num2);
    }
    return 0;
}

int main(){
    int num1,num2;
    printf("Digite dois numeros para saber qual e maior\n");
    scanf("%d", &num1);
    printf("\n");
    scanf("%d", &num2);
    printf("%d\n" , maiorNum(num1,num2));
}