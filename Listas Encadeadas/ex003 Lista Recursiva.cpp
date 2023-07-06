//Criando Lista e Exibindo Lista

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

void imprime(Ponto *p){
    if(p!=NULL){
        printf("\nPonto(%d,%d)", p-> x, p->y);
        imprime(p->prox);
    }
}

int main(){
    
    add(1,5);
    add(2,7); 
    add(5,3);
    Ponto *auxLista = listaPontos;
    imprime(auxLista);
return 0;
}