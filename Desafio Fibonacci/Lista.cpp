
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
		if (strcmp(P->Info->MARCA, marca) == 0)
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

// Aula T 10/03/2020

void Add_Fim(Lista *L, Carro *X)
{
	if (!L) return;
	NO *Aux = (NO *)malloc(sizeof(NO));
	Aux->Prox = NULL;
	Aux->Info = X;
	if (!L->Inicio)
		L->Inicio = Aux;
	else
	{
		NO *Ant = NULL;
		NO *P = L->Inicio;
		while (P)
		{
			Ant = P;
			P = P->Prox;
		}
		Ant->Prox = Aux;
	}
	L->NEL++;
}


bool Remover_Elemento(Lista *L, char *marc)
{
	if (!L) return false;
	if (!L->Inicio) return false;
	NO *Ant = NULL;
	NO *P = L->Inicio;
	bool ACHOU = false;
	while (P && !ACHOU)
	{
		if (strcmp(P->Info->MARCA, marc) == 0)
			ACHOU = true;
		else
		{
			Ant = P;
			P = P->Prox;
		}
	}
	if (ACHOU)
	{
		if (!Ant) // Remover do inicio
			L->Inicio = P->Prox;
		else
			Ant->Prox = P->Prox;
		free(P->Info);
		free(P);
		L->NEL--;
	}
}
void Mostrar_Rec_Nos(NO *P)
{
	if (!P) return;
	Mostrar_Rec_Nos(P->Prox);
	printf("MARCA=[%s], ANO = %d\n", P->Info->MARCA, P->Info->ANO);
}

void MostrarRec(Lista *L)
{
	if (!L) return;
	Mostrar_Rec_Nos(L->Inicio);
}

//----------------------------
void Mostrar_MARCA_ANO(Lista *L)
{
	if (!L) return;
	NO *P = L->Inicio;
	while (P)
	{
		printf("MARCA=[%s]; ANO=%d\n", P->Info->MARCA, P->Info->ANO);
		P = P->Prox;
	}
}
void Mostrar_ANO_MARCA_NLUGARES(Lista *L)
{
	if (!L) return;
	NO *P = L->Inicio;
	while (P)
	{
		printf("MARCA=[%s]; ANO=%d\n", P->Info->MARCA, P->Info->ANO);
		P = P->Prox;
	}
}
void Mostrar_ANO_PESO(Lista *L)
{
	if (!L) return;
	NO *P = L->Inicio;
	while (P)
	{
		printf("PESO=[%d]; ANO=%d\n", P->Info->PESO, P->Info->ANO);
		P = P->Prox;
	}
}
void Mostrar_MARCA_PESO(Lista *L)
{
	if (!L) return;
	NO *P = L->Inicio;
	while (P)
	{
		printf("PESO=[%d]; ANO=%d\n", P->Info->PESO, P->Info->ANO);
		P = P->Prox;
	}
}

void Mostrar_GERAL(Lista *L, void (*funcao)(Carro *))
{
	if (!L) return;
	if (!L->Inicio) return;

	NO *P = L->Inicio;
	while (P)
	{
		funcao(P->Info);
		P = P->Prox;
	}
}

//.... vários mostrar....
