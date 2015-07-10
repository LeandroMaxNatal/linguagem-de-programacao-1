#include <iostream>
#include <stdio.h>

int main()
{
	int numNegativos = 0, n;

	for ( int i = 0; i < 5; i++ )
	{
		std::cout << "\nDigite um numero inteiro: ";
		std::cin >> n;
		if( n < 0 )
			numNegativos++;
	}

	std::cout << "\nO total de numero negativos digitado eh: " << numNegativos << std::endl;
	getchar();
	return 0;
}
