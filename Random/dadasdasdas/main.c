#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <assert.h>
#include <conio.h>



void GerarVector(int *vector, long size)
{
	long i;
	for (i = 0; i < size; i++)
	{
		printf("\n\n%d %d", i, size);
		vector[i] = rand() % 121;
	}
}

void OrdenarSemComparar(int *vector, long  size)
{
	printf("Size: %i elements", size);
	_getch();

	int i;
	for (i = 0; i < size; i++)
	{
		printf("\n\n%d", vector[i]);
	}
	_getch();

	int min = 0, max = 120;
	int c[121];
	int i1,i2,i3;

	for (i1 = 0; i1 < size; i1++)
	{
		c[vector[i1] - min]++;
	}

	for (i2 = 0; i2 < 121; i2++)
	{
		for (i3 = 0; i3 < c[i2]; i3++)
		{
			printf("%d", i2 + min);
		}
	}
}





int main()
{
	srand(time(NULL));

	int *vector = malloc(sizeof(int) * 10);
	GerarVector(vector, 10);
	OrdenarSemComparar(vector, sizeof(vector) / sizeof(vector[0]));
	return 0;
}
