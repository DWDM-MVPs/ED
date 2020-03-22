#ifndef ESTRUTURAS_H_INCLUDED
#define ESTRUTURAS_H_INCLUDED

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Para cada indivíduo, regista-se o seu número do Cartão de Cidadão, a sua
//altura, a sua massa, o género (M/F) e a data de nascimento (dia, mês, ano).
typedef struct data
{
    int Dia, Mes, Ano;
}Data;

typedef struct individuo
{
    char CC[20];
    int Altura;
    float Peso;
    char Genero;
    Data Dt_Nascimento;
}Individuo;

#endif // ESTRUTURAS_H_INCLUDED
