#include <stdio.h>

int main(){
    int n1 = 0;
    int n2 = 0;
    printf("Forneça dois números para executar a soma deles:\n\n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    printf("%d + %d = %d", n1, n2, n1+n2);
}