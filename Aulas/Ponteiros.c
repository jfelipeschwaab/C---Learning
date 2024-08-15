#include <stdio.h>
#include <stdlib.h>


int main(){
    int a = 20;
    //int b = 10;
    //int c;
    //c = a  + b;

    //printf("&a = %p, a = %d\n", &a, a);
    //printf("&b = %p, b = %d\n", &b, b);
    //printf("&c = %p, c = %d\n", &c, c);

    int *p1 = NULL;
    int *p2;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, p1 = %p\n", &p1, p1);
    printf("&p2 = %p, p2 = %p\n", &p2, p2);

    p1 = &a;
    p2 = p1;
    *p2 = 4;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, *p1 = %d\n", &p1, *p1);
    printf("&p2 = %p, *p2 = %d\n", &p2, *p2);

    return 0;


}