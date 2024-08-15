#include <stdio.h>

int main(){
    int n1,n2,n3 = 0;

    puts("Digite 3 numeros para obter o maior entre eles:");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    maiorNum(n1,n2,n3);



}

void maiorNum(int n1, int n2, int n3){
    if(n1 >= n2 && n1 >= n3){
        printf("%d eh o maior numero", n1);
    }else if(n2>= n1 && n2>= n3){
        printf("%d eh o maior numero", n2);
    }else{
        printf("%d eh o maior numero", n3);
    }
    
}