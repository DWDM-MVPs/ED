#include "Lista.h"

extern Lista *CriarLista();

Fila *CriarFila()
{
    Fila *P = CriarLista();
    return P;
}
void PUSH_Fila(Fila *K, Carro *X)
{
    AddInicio(K, X);
}

Carro *POP_Fila(Fila *K)
{
// Ir devolver o último da Fila
return NULL;
}

bool VAZIA_Fila(Fila *K)
{
    if (!K) return true;
    if (!K->Inicio) return true;
    return false;
}
