#ifndef ESTRUTURAS_H_INCLUDED
#define ESTRUTURAS_H_INCLUDED

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Para cada indiv�duo, regista-se o seu n�mero do Cart�o de Cidad�o, a sua
//altura, a sua massa, o g�nero (M/F) e a data de nascimento (dia, m�s, ano).
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
