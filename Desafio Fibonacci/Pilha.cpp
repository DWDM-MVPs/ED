

#include "Lista.h"

extern Lista *CriarLista();

Pilha *CriarPilha()
{
    Pilha *P = CriarLista();
    return P;
}

void PUSH_Pilha(Pilha *K, Carro *X)
{
    AddInicio(K, X);
}

Carro *POP_Pilha(Pilha *K)
{
    if (!K) return NULL;
    if (!K->Inicio) return NULL;
    Carro *X = K->Inicio->Info;
    NO *aux = K->Inicio;
    K->Inicio = aux->Prox;
    free(aux);
    return X;
}

bool VAZIA_Pilha(Pilha *K)
{
    if (!K) return true;
    if (!K->Inicio) return true;
    return false;
}
