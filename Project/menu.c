#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>
#include <string.h>

#include "f1_exercicio1.c"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int ficha;
	
	printf("Insira o número da ficha: "); scanf("%i", &ficha);
	
	switch(ficha)
	{
		case 1:
		{
			int exercicio;
			
			while (exercicio != 0)
			{
				printf("Insira o número da ficha/exercicio (exemplo: 1/1) (ou qualquer outro número para sair): "); scanf("%i", &exercicio);
				
				switch(exercicio)
				{
					case 1:
						f1_exercicio1(); break;
				}
			}
			
			return 0;
		}
		default:
		{
			printf("Essa ficha não existe.");
			getch();
			break;
		}
	}
	
}
