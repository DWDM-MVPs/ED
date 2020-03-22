
#include "Lista.h"


Lista *CriarLista()
{
	Lista *ls = (Lista *)malloc(sizeof(Lista));
	if (!ls) return NULL;
	ls->Inicio = NULL;
	ls->NEL = 0;
	return ls;
}

void AddInicio(Lista *L, Carro *X)
{
	if (!L) return;
	NO *caixinha = (NO *)malloc(sizeof(NO));
	caixinha->Info = X;
	caixinha->Prox = L->Inicio;
	L->Inicio = caixinha;
	L->NEL++;
}

void Mostrar(Lista *L)
{
	if (!L) return;
	NO *P = L->Inicio;
	while (P)
	{
		printf("MARCA=[%s]; ANO=%d\n", P->Info->MARCA, P->Info->ANO);
		P = P->Prox;
	}
}

void GravarFicheiro(Lista *L, char *nf)
{
	if (!L) return;
	FILE *Caderno = fopen(nf, "w");
	NO *P = L->Inicio;
	while (P)
	{
		fprintf(Caderno, "MARCA=[%s]; ANO=%d\n", P->Info->MARCA, P->Info->ANO);
		P = P->Prox;
	}
	fclose(Caderno);
}

Carro *PesquisarCarro(Lista *L, char *marca)
{
	if (!L) return NULL;
	if (!marca) return NULL;
	NO *P = L->Inicio;
	while (P)
	{
		if (strcmp(P->Info->MARCA, marca) == 0)
			return P->Info;
		P = P->Prox;
	}
	return NULL;
}

int ContarCarrosMarca(Lista *L, char *marca)
{
	if (!L) return 0;
	if (!marca) return 0;
	int Cont = 0;
	NO *P = L->Inicio;
	while (P)
	{
		if (_stricmp(P->Info->MARCA, marca) == 0)
			Cont++;
		P = P->Prox;
	}
	return Cont;
}

void DestruirLista(Lista *L)
{
	if (!L) return;
	NO *Aux;
	NO *P = L->Inicio;
	while (P)
	{
		free(P->Info);
		Aux = P->Prox;
		free(P);
		P = Aux;
	}
	free(L);
}