
#include "Tipo_Dados.h"

//--------------------
extern Cesto *CriarCesto();
extern void Funcao_1(Cesto *X);
extern void Funcao_2(Cesto *X);
extern void Funcao_3(Cesto *X);
extern int Funcao_4(Cesto *X, int z);
extern int Aleatorio(int min, int max);
//--------------------
void Inicializacao(Cesto *X)
{
    printf("Passei na funcao <%s>\n", __FUNCTION__);
    srand(time(NULL));
    int N = 5;
    X->VC = (Carro*)malloc(N*sizeof(Carro));
    X->NCarros = N;
    for (int i = 0; i < X->NCarros; i++)
    {
        X->VC[i].Ano = Aleatorio(2000, 2020);
        strcpy(X->VC[i].Marca,"BMW");
    }
}
//--------------------
void Terminar(Cesto *X)
{
    printf("Passei na funcao <%s>\n", __FUNCTION__);
    free(X->VC);
    free(X);
}
//--------------------
int Menu()
{
    printf("1 - Opcao 1\n");
    printf("2 - Opcao 2\n");
    printf("3 - Opcao 3\n");
    printf("4 - Opcao 4\n");
    printf("0 - Sair\n");
    printf("Qual a opcao ?\n");
    int X;
    scanf("%d", &X);
    return X;
}

int main()
{
    printf("INICIO do Programa\n");
    Cesto *Kalu = CriarCesto();
    Inicializacao(Kalu);
    bool STOP = false;
    int OP;
    while (!STOP)
    {
        OP = Menu();
        switch(OP)
        {
            case 1: Funcao_1(Kalu); break;
            case 2: Funcao_2(Kalu);break;
            case 3: Funcao_3(Kalu);break;
            case 4: Funcao_4(Kalu, 10);break;
            case 0: STOP = true; break;
        }
    }
    Terminar(Kalu);
    printf("FIM do Programa\n");
    return 1;
}
