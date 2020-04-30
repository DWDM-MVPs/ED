

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Estruturas.h"

Individuo *V_Individuos = NULL;
int N_Individuos = 0;
//---------------------------
extern void Funcao_Teste();
extern Individuo *CriarVector(int N);
extern void MostrarVector(Individuo *V, int N);
extern void CalcularIMC(Individuo *V, int N);
extern void GravarFicheiro(char *nome_ficheiro, Individuo *V, int N);
extern void DestruirVector(Individuo *V);
extern void Almocar_Com_Individuos(Individuo *V, int N, float peso);
extern Individuo *Get_Individuo_Mais_Alto(Individuo *V, int N);

//---------------------------
int main()
{
    printf("INICIO Programa\n");
    srand(time(NULL));

        N_Individuos = 5000;
        V_Individuos = CriarVector(N_Individuos);
        MostrarVector(V_Individuos, N_Individuos);
        Almocar_Com_Individuos(V_Individuos, N_Individuos, 5);
        MostrarVector(V_Individuos, N_Individuos);

        DestruirVector(V_Individuos);

    printf("FIM Programa\n");

    return 1;
}
