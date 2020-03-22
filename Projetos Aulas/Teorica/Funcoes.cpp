
#include <stdlib.h>
#include "Tipo_Dados.h"

Cesto *CriarCesto()
{
     printf("Passei na Funcao <%s>\n", __FUNCTION__);
     Cesto *X = (Cesto *)malloc(sizeof(Cesto));
     return X;
}

void Funcao_1(Cesto *X)
{
    printf("Um dia vou fazer a funcao <%s>\n", __FUNCTION__);
 //   printf("FICHEIRO = %s, LINHA = %s\n", __FILE__, __LINE__);
}
void Funcao_2(Cesto *X)
{
    printf("Um dia vou fazer a funcao <%s>\n", __FUNCTION__);
    for (int i = 0; i < X->NCarros; i++)
    {
        printf("CARRO\n");
        printf("\t MARCA = [%s]\n", X->VC[i].Marca);
        printf("\t ANO = %d\n", X->VC[i].Ano);
    }
}
void Funcao_3(Cesto *X)
{
    printf("Um dia vou fazer a funcao <%s>\n", __FUNCTION__);
    FILE *F = fopen("Kaluzito.txt", "w");
    for (int i = 0; i < X->NCarros; i++)
    {
        fprintf(F, "CARRO\n");
        fprintf(F,"\t MARCA = [%s]\n", X->VC[i].Marca);
        fprintf(F,"\t ANO = %d\n", X->VC[i].Ano);
    }
    fclose(F);
}
int Funcao_4(Cesto *X, int z)
{
    printf("Um dia vou fazer a funcao <%s>\n", __FUNCTION__);
    return -1;
}
