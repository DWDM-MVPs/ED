#define _CRT_SECURE_NO_WARNINGS

#include "Tipos.h"

int Aleatorio(int min, int max)
{
	return min + rand() % (max - min + 1);
}
//-------------------------------------
void Gerar_Ficheiro_Dados(char *nf)
{
	FILE *F = fopen(nf, "wb");
	int N = 5;
	USER *xx = (USER *)malloc(N * sizeof(USER));
	for (int i = 0; i < N; i++)
	{
		xx[i].joia = Aleatorio(10, 128);
		xx[i].data_registo.dia = Aleatorio(1, 28);
		strcpy(xx[i].nome, "Dioguito!");
			//........
	}
	fwrite(xx, sizeof(USER), N, F);
	free(xx);
	fclose(F);
}
int Num_Registos_Ficheiro(char *nf, int tqr)
{
	FILE *F = fopen(nf, "rb");
	if (!F) return 0;
	fseek(F, 0, SEEK_END);
	int tam = ftell(F);
	int NEL = tam / tqr;
	fclose(F);
	return NEL;
}

EDADOS *Ler_Ficheiro(char *nf)
{
	int T_user = sizeof(USER);
	printf("sizeof(DATA) = %d\n", sizeof(DATA));
	printf("T_user = %d\n", T_user);

	EDADOS *ED = (EDADOS *)malloc(sizeof(EDADOS));
	int N = Num_Registos_Ficheiro(nf, T_user);

	FILE *F = fopen(nf, "rb");
	ED->NEL = 0;
	if (F)
	{
		ED->Dados = (USER *)malloc(N * T_user);
		fread(ED->Dados, T_user, N, F);
		fclose(F);
		ED->NEL = N;
	}
	return ED;
}
void MostrarDados(EDADOS *ED)
{
	if (!ED) return;
	if (!ED->Dados) return;
	for (int i = 0; i < ED->NEL; i++)
	{
		printf("Nome = [%s]\n", ED->Dados[i].nome);
		printf("Joia = [%d]\n", ED->Dados[i].joia);
		printf("\tData_ULT_ACESSO = %d-%d-%d\n",
			ED->Dados[i].data_ultimo_acesso.dia,
			ED->Dados[i].data_ultimo_acesso.mes,
			ED->Dados[i].data_ultimo_acesso.ano);
		//............
	}
}
void Pesquisar_Nome(EDADOS *ED)
{
	printf("Um dia vou fazer esta funcao <%s>\n", __FUNCTION__);
	printf("Que esta na linha (%d)\n", __LINE__);
	printf("Que esta no ficheiro %s\n", __FILE__);
}

void Ordenar_Joia(EDADOS *ED)
{
	printf("Entrei na funcao <%s>\n", __FUNCTION__);
	if (!ED) return;
	// Versão 1
	for (int K = 0; K < ED->NEL-1; K++)
	{
		for (int i = 0; i < (ED->NEL - 1); i++)
		{
			if (ED->Dados[i].numero_acessos > ED->Dados[i + 1].numero_acessos)
			{
				USER Aux = ED->Dados[i];
				ED->Dados[i] = ED->Dados[i + 1];
				ED->Dados[i + 1] = Aux;
			}
		}
	}
	// Versão 2
	for (int K = 0; K < ED->NEL - 1; K++)
	{
		for (int i = 0; i < (ED->NEL - 1 - K); i++)
		{
			if (ED->Dados[i].numero_acessos > ED->Dados[i + 1].numero_acessos)
			{
				USER Aux = ED->Dados[i];
				ED->Dados[i] = ED->Dados[i + 1];
				ED->Dados[i + 1] = Aux;
			}
		}
	}
	// Versão 3
	bool Houve_Trocas = true;
	for (int K = 0; (K < ED->NEL - 1) && Houve_Trocas; K++)
	{
		Houve_Trocas = false;
		for (int i = 0; i < (ED->NEL - 1 - K); i++)
		{
			if (ED->Dados[i].numero_acessos > ED->Dados[i + 1].numero_acessos)
			{
				USER Aux = ED->Dados[i];
				ED->Dados[i] = ED->Dados[i + 1];
				ED->Dados[i + 1] = Aux;
				Houve_Trocas = true;
			}
		}
	}
}

void InverterVectorDados(EDADOS *ED)
{
	if (!ED) return;
	if (!ED->Dados) return;
	int Tam_2 = ED->NEL / 2;
	for (int i = 0; i < Tam_2; i++)
	{
		USER Aux = ED->Dados[i];
		ED->Dados[i] = ED->Dados[ED->NEL - 1 - i];
		ED->Dados[ED->NEL - 1 - i] = Aux;
	}
}
