#include <stdio.h>

float delta(float a,float b, float c){
    return (b*b) - (4 * a * c);
}

int main(){
    delta(10,20,30);
    printf("%.2f", delta(10,20,30));
}