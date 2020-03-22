
#ifndef __TIPOS__JOAO_COMO_QUISERES______
#define __TIPOS__JOAO_COMO_QUISERES______

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct
{
	int dia;
	int mes;
	int ano;
}DATA;

typedef struct
{
	char nome[50];
	char utilizador[20];
	char password[20];
	float joia;
	DATA data_registo;
	char email[30];
	char pagina_web_pessoal[50];
	int telemovel;
	int numero_acessos;
	DATA data_ultimo_acesso;
}REGISTO_UTILIZADORES, USER;

typedef struct edados
{
	USER *Dados;
	int NEL;
}EDADOS;

#endif
