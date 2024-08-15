#include <stdio.h>
#include <stdlib.h>

int SimulacaoDeDado(){
    srand(time(NULL));
    return (rand() % 6) + 1;
}

int main(){
    printf("%d",SimulacaoDeDado());
}