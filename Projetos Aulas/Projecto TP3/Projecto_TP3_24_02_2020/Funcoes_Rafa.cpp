
#include "Tipos.h"

void LimparMemoria(EDADOS *ED)
{
	if (!ED) return;
	if (ED->Dados) free(ED->Dados);
	free(ED);
}