#include <stdio.h>
#include <math.h>

typedef struct _ponto
{
    float x;
    float y;

}ponto;

float distanciaOrigem(ponto cartesiano);

int main(){
    ponto cartesiano;
    cartesiano.x = 10;
    cartesiano.y = 30;
    distanciaOrigem(cartesiano);
    printf("%.2f", distanciaOrigem((cartesiano)));
}

float distanciaOrigem(ponto cartesiano){
    return sqrt(cartesiano.x * cartesiano.x + cartesiano.y * cartesiano.y);
}