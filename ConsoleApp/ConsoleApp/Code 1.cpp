/*
#include <stdio.h>
#include <locale.h>

double Pot(double A, int N)
{
	return N == 0 ? 1 : (A * Pot(A, N - 1));
}





int main()
{
	setlocale(LC_ALL, "");


	double A = 0;
	int N = 0;

	printf("Insira o número base: "); scanf_s("%lf", &A);
	printf("Insira a potência: "); scanf_s("%d", &N);

	printf("\nResultado:    %0.2lf ^ %i = %0.2lf\n\n", A, N, Pot(A, N));

	return 0;
}
*/