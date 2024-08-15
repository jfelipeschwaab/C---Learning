#include <stdio.h>

int maiorNum(int num1, int num2, int num3){
    if (num1 > num2 && num1>num3){
        printf("%d es o maior numero\n", num1);
    }else if(num2 > num1 && num2 > num3 ){
        printf("%d es o maior numero\n", num2);
    }else if(num3 > num1 && num3 > num2){
        printf("%d es o maior numero\n", num3);
    }else{
        printf("Numeros iguais\n");
    }
    return 0;
}

int main(){
    int num1,num2,num3;
    printf("Digite tres numeros para saber qual e maior\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    printf("%d\n" , maiorNum(num1,num2,num3));
}