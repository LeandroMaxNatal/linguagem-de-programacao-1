/**** ===================================================================[ Inicio main.cpp ]=================================================================== ****/
/*
 * Autor: Leandro Antonio Feliciano da Silva
 * Data: 11/07/2015
 * Local: Natal - RN
 */

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int m, n; // Valores digitados pelo usuario
	float somaDosTermos;	// Soma dos termos da PA.

	cout << "Este programa calcula a soma dos N termos consecutivos a partir de M." << endl;
	cout << "Digite Ctrl + D ou atribua 0 a m e n para sair do programa quando quiser..." << endl;
	cout << "Digite dois numeros inteiros M e N" << endl;
	// Enquanto m == n != 0 e o usuário não digitar Ctrl + D
	while(cout << "digite o valor de m: ", cin >> m, cout << "digite o valor de n: ", cin >> n && !(m == 0 && n==0) )
	{
		/* Calcula a PA consecutiva com N termos a partir de M */
		somaDosTermos = (m + (m + (n - 1))) * ((float)n/2); 
		/* Exibe o resultado*/
		cout << "A soma dos " << n << " numeros consecutivos a partir do "<< m << " eh: "<< somaDosTermos << endl;
	}

	cout << "\nPressione qualquer tecla para sair..." << endl;
	getchar();
	return 0;
}

/**** ===================================================================[ Fim main.cpp ]=================================================================== ****/