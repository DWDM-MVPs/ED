#ifndef TIPO_DADOS_H_INCLUDED
#define TIPO_DADOS_H_INCLUDED

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

typedef struct Carro
{
    char Marca[100];
    int Ano;
}Carro;

typedef struct cesto
{
    //------
    Carro *VC;
    int NCarros;
}Cesto;

#endif // TIPO_DADOS_H_INCLUDED
