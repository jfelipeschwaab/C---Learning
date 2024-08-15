#include <stdio.h>

int main(){
    int contador = 0;
    while (contador<=100)
    {
        if(contador % 10 == 0){
            printf("\n");
        }
        
        if(contador % 2 == 0){
            printf("|%d|", contador);
            contador++;
        }else{
            contador++;
        }
}
}