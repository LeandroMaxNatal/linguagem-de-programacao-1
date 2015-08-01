#include "maiores.h"

int maiores(int * vet, int n, int x)
{
	// Verificar entradas problematicas.
	if( n <= 0 ) return -1;

	int cont(0);

	for(int i(0); i < n; ++i)
	{
		if(vet[i] > x)
			cont++;
	}
	return cont;
}