

#include "Lista.h"

extern Lista *CriarLista();
extern void DestruirLista(Lista *L);
extern void Mostrar(Lista *L);
extern void AddInicio(Lista *L, Carro *X);
extern void GravarFicheiro(Lista *L, char *nf);
extern int ContarCarrosMarca(Lista *kjhgfd, char *wertyui);


Carro *CriarCarro(char *m, int an)
{
	Carro *X = (Carro *)malloc(sizeof(Carro));
	X->ANO = an;
	strcpy(X->MARCA, m);
	return X;
}

void main()
{
    printf("Inicio\n");

	Lista *LV = CriarLista();
	Carro *X = CriarCarro((char *)"VW", 2000);
	AddInicio(LV, X);
	for (int i = 0; i < 10; i++)
	{
		X = CriarCarro((char *)"BMW", 2020+i);
		AddInicio(LV, X);
	}

	Mostrar(LV);
	GravarFicheiro(LV, (char *)"FICHEIRO.txt");

	int C = ContarCarrosMarca(LV, (char *)"Carrinho de Mao");
	printf("Contagem = %d\n", C);

	DestruirLista(LV);

    printf("Fim\n");
	system("pause");
    return;
}
