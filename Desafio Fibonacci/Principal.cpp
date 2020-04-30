
#include "Lista.h"


extern void DestruirLista(Lista *L);
extern Pilha *CriarPilha();
extern void PUSH_Pilha(Pilha *K, Carro *X);
extern Carro *POP_Pilha(Pilha *K);

Carro *CriarCarro(int ano)
{
    Carro *A = (Carro *)malloc(sizeof(Carro));
    A->ANO = ano;
    return A;
}

int F(int N)
{
    if (N == 0) return 1;
    return N*F(N-1);
}
int Fib(int N)
{
    if (N == 0) return 0;
    if (N == 1) return 1;
    return Fib(N-1) + Fib(N-2);
}

/*
0;1;1;2;3;5;8......
int main()
{
    Pilha *Pi = CriarPilha();
    Carro *X = CriarCarro(2020);
    PUSH_Pilha(Pi, X);
    X = CriarCarro(2030);
    PUSH_Pilha(Pi, X);

    DestruirLista(Pi);
    return 1;
}
*/

Aula Teórica-17-03-2020

//--------------------------------------------------------------------
//----------------------------- DESAFIO ------------------------------
//--------------------------------------------------------------------
Desafio (Vale 1.0 V a Somar à nota do Exame!):
    Fazer o processo recursivo Fibonacci, mas utilizando uma pilha!
    - Dar o resultado correcto do Fibonacci
    - Saber qual foi o tamanho máximo que a pilha teve!

por ex:
    Fib(N) -- Altura Max. Pilha
      0          ?
      1          ?
      2          ?
      5          ?
      10         ?10
    etc.

    Devem seguir, completar o exercício abaixo!,
    Obviamente que deve ser uma pilha de inteiros!

int main()
{
    Pilha *P = CriarPilha();
    int N = 5;
    int RES_REC = Fib(N);
    int RES_PILHA = 0;
    int AltMaxPilha = 0;
    
    int i = 0;
	while (i < 10)
    {   
		int n1 = POP_Pilha(P);
  		int n2 = POP_Pilha(P);
  		
  		PUSH_Pilha(P, n1);
  		PUSH_Pilha(P, n2);
  		PUSH_Pilha(P, n1 + n2);
  		
  		i++;
	}
       //-------- Falta mais ..... pouca coisa!
    printf("RES_REC = %d RES_PILHA = %d AltMaxPilha = %d\n", RES_REC, RES_PILHA, AltMaxPilha);

    return 1;
}







