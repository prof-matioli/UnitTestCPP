#include "../headers/funcoes.h"

int soma(int a, int b)
{
    return a+b;
}

int somaDiagonal(int m[][4], int nlc)
{
    int lc=0;
    int soma=0;
    for(lc=0; lc<nlc;lc++)
        soma+=m[lc][lc];
    return soma;
}
