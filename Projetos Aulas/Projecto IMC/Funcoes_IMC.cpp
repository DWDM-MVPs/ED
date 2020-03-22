

#include <stdio.h>
#include <string.h>

#include "Estruturas.h"


void Funcao_Teste()
{
    printf("Inicio da Funcao <%s>\n", __FUNCTION__);
}

//------------------------
Individuo *CriarVector(int N)
{
    printf("Funcao <%s> AINDA NAO FEITA\n", __FUNCTION__);
    Individuo *V = (Individuo *)malloc(N*sizeof(Individuo));
    for(int i = 0; i < N; i++)
    {
        sprintf(V[i].CC,"%d-%d",rand(), rand());
        V[i].Altura = 100 + rand() % 100;
        V[i].Dt_Nascimento.Dia = rand() % 32;
        V[i].Dt_Nascimento.Mes = 1 + rand() % 12;
        V[i].Dt_Nascimento.Ano = 2000 + rand() % 21;
        V[i].Peso = 50 + rand() % 50;
    }
    return V;
}
//------------------------
void MostrarVector(Individuo *V, int N)
{
    printf("Funcao <%s> AINDA NAO FEITA\n", __FUNCTION__);
    for (int i = 0; i < N; i++)
    {
        printf("Individuo[%d]\n", i);
        printf("\tCC=[%s]\n", V[i].CC);
        printf("\tAltura=%d\n", V[i].Altura);
        printf("\tPeso=%f\n", V[i].Peso);
        printf("\t\tDia=%d", V[i].Dt_Nascimento.Dia);
        printf("\t\Mes=%d", V[i].Dt_Nascimento.Mes);
        printf("\t\Ano=%d\n", V[i].Dt_Nascimento.Ano);

    }
}
//------------------------
void CalcularIMC(Individuo *V, int N)
{
    printf("Funcao <%s> AINDA NAO FEITA\n", __FUNCTION__);
}
//------------------------
void GravarFicheiro(char *nome_ficheiro, Individuo *V, int N)
{
    printf("Funcao <%s> AINDA NAO FEITA\n", __FUNCTION__);
}
//------------------------
void DestruirVector(Individuo *V)
{
    printf("Funcao <%s> AINDA NAO FEITA\n", __FUNCTION__);
    free (V);
}
//------------------------
void Almocar_Com_Individuos(Individuo *V, int N, float peso)
{
    printf("Funcao <%s> AINDA NAO FEITA\n", __FUNCTION__);
    for (int i = 0; i < N; i++)
        V[i].Peso += peso;
}
//------------------------
Individuo *Get_Individuo_Mais_Alto(Individuo *V, int N)
{
    printf("Funcao <%s> AINDA NAO FEITA\n", __FUNCTION__);
    return NULL;
}
