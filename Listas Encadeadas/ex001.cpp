#include <stdio.h>
#include <stdlib.h>
struct ponto{
    
    double x;
    double y;
    struct ponto *prox;
};

typedef struct ponto Ponto;


Ponto *listaPontos;

void add(double x, double y){
    Ponto *p =(Ponto*) malloc(sizeof(Ponto));
   p->x = x;
   p->y = y;
   p ->prox = listaPontos;
   listaPontos = p;
}

int main(){
    
    add(1,5);
    add(2,7); 
    add(5,3);

    printf("%2.f", listaPontos -> x);
    printf("%2.f", listaPontos -> y);
return 0;
}