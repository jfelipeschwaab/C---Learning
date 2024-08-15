#include <stdio.h>

struct Ponto
{
    int x;
    int y;
};
struct StructChar
{
    char c;
};

int main(){
    system("cls");

    struct Ponto ponto1;
    struct StructChar char1;

    ponto1.x = 10;
    ponto1.y = 20;
    char1.c = 'V';
    
    printf("Coordenadas: (%d, %d)\n", ponto1.x, ponto1.y);
    printf("Caractere %c", char1.c);
    

}

