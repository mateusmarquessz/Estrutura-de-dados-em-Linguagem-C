#include <stdio.h>
#include <stdlib.h>

struct  ponto{
    float x;
    float y;
};

int main(){
    ponto *p =(ponto*) malloc(sizeof(ponto));
    p ->x = 1;
    p ->y = 5;

    printf("Ponto = (%.2f, %.2f)", p->x, p->y);
    return 0;
}