
#define _CRT_SECURE_NO_WARNINGS
#include "Tipos.h"

extern void Gerar_Ficheiro_Dados(char *nf);
extern EDADOS *Ler_Ficheiro(char *nf);
extern void MostrarDados(EDADOS *ED);
extern void Pesquisar_Nome(EDADOS *ED);
extern void LimparMemoria(EDADOS *ED);
extern void Ordenar_Joia(EDADOS *ED);
extern void InverterVectorDados(EDADOS *ED);

//--------------------------------------

int Menu()
{
	printf("1- Gerar Ficheiro\n");
	printf("2- Ler Ficheiro\n");
	printf("3- Mostrar Dadoso\n");
	printf("Qual a Opcao ? ");
	int x;
	scanf("%d", &x);
	return x;
}

int main()
{
	int OP = 0;
	bool TERMINAR = false;
	EDADOS *Saco = NULL;
	srand(time(NULL)); // Iniciar o gerador de aleatorios
	while (!TERMINAR)
	{
		OP = Menu();
		switch (OP)
		{
		case 1: Gerar_Ficheiro_Dados((char *)"users.dat"); break;
		case 2: Saco = Ler_Ficheiro((char *)"users.dat"); break;
		case 3: MostrarDados(Saco);  break;
		case 4: Pesquisar_Nome(Saco);  break;
		case 5: 
			Ordenar_Joia(Saco);  
			MostrarDados(Saco);
			break;
		case 6:
			InverterVectorDados(Saco);
			MostrarDados(Saco);
			break;
		case 0: TERMINAR = true; break;
		}
	}
	LimparMemoria(Saco);
	system("pause > null");
	return 1;
}