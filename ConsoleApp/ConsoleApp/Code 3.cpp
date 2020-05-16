/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <assert.h>
#include <conio.h>



void GerarVector(int *vector, long size)
{
	for (long i = 0; i < size; i++)
	{
		printf("\n\n%d %d", i, size);
		vector[i] = rand() % 121;
	}
}

void OrdenarSemComparar(int *vector, long  size)
{
	printf("Size: %i elements", size);
	_getch();

	int min = 0, max = 120;
	int c[121];

	for (long i = 0; i < size; i++)
	{
		printf("\n\n%d", vector[i]);
	}
	_getch();

	for (int i = 0; i < size; i++)
	{
		c[vector[i] - min]++;
	}

	for (int i = 0; i < 121; i++)
	{
		for (int j = 0; j < c[i]; j++)
		{
			printf("%d", i + min);
		}
	}
}





int main()
{
	srand(time(NULL));

	int *vector = (int*)malloc(sizeof(int));
	GerarVector(vector, 10);
	OrdenarSemComparar(vector, sizeof(vector) / sizeof(vector[0]));
	return 0;
}
*/