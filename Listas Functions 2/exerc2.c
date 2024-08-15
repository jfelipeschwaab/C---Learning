#include <stdio.h>
#include <math.h>

typedef struct _retangulo
{
    float w;
    float h;
}Retangulo;

float areaRetangulo(Retangulo r);

int main(){
    Retangulo r;
    puts("Qual a largura do retangulo?");
    scanf("%f", &r.w);
    puts("Qual a altura do retangulo?");
    scanf("%f", &r.h);
    printf("A area do retangulo: %.2f", areaRetangulo(r));
}

float areaRetangulo(Retangulo r){
    return r.w * r.h;
}