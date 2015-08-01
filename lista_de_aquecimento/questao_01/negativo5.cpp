//////////////////////////////////////////////////////////////////////////////////////////////
//
// 1. Escreva um programa em C/C++ chamado negativo5.cpp que le 5 valores inteiros,
// um de cada vez, conta quantos destes valores sao negativos e imprime esta informacao.
//
// Comando para compilar: g++ -Wall -std=c++11 -o negativo5 negativo5.cpp
///////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

int main()
{
	/*! Recebe os numeros digitados */
	int n;
	/*! Armazena a quantidade de numeros negativos */
	int negativos = 0;

	/*! Entrada de dados */
	for(auto i(0); i < 5 ; i++)
	{
		std::cout << " Digite o " << i + 1 << " numero inteiro: ";
		std::cin >> n;

		/*! Testa se o numero eh negativo*/
		if(n < 0)
			negativos++;
	}

	/*! Exibicao do resultado */
	std::cout << "\n\n>>> Total de numeros negativos: " << negativos << std::endl;
	return 0;
}