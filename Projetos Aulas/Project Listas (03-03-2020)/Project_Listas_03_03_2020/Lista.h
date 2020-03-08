
#define _CRT_SECURE_NO_WARNINGS

#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct carro
{
	int ANO;
	char MARCA[20];
}Carro;

typedef struct no
{
	Carro *Info;
	struct no *Prox;
}NO;

typedef struct lista
{
	NO *Inicio;
	int NEL;
}Lista;



#endif // LISTA_H_INCLUDED
