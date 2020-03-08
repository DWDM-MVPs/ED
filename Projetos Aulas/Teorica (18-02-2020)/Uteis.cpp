

#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include "Tipo_Dados.h"


int Factorial(int N)
{
   if (N == 0) return 1;
   return N*Factorial(N-1);
}

int Aleatorio(int min, int max)
{
    int X = min + rand() % (max - min + 1);
    return X;
}
