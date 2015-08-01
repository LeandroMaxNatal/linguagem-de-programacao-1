#include "maiores.h"
#include <iostream>

int main()
{
	int v[] = {5,2,-3,100,6};
	auto sz = sizeof( v )/ sizeof( int );
	int x( 5 );

	std::cout <<  ">>> v: [ ";

	for(auto e : v)
		std::cout << e << " ";

	std::cout << "]" << std::endl;
	
	// Contar a quantidades de elementors em v maiores do que x.
	auto nMaioresX = maiores(v, sz, x);
	std::cout <<">>> Qtd de numeros > do que "<< x << " eh: "<< nMaioresX << std::endl;
	return 0;
}