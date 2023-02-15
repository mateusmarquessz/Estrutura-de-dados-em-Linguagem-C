#include <stdio.h>

struct pessoa{
    int idade;
    float altura;
};

int main(){
    struct pessoa p;

    p.idade =5;
    p.altura = 1.65;

    printf("A altura da pessoa e: %.2f\n", p.altura);
    printf("A altura da pessoa e:%i", p.idade);
    
    return 0;
}