/**** ==================================================================[ Inicio main.cpp ]================================================================== ****/
/*
 * Autor: Leandro Antônio Feliciano da Silva
 * Data: 11/07/2015
 * Local: Natal - RN
 */

#include <iostream>
#include <stdio.h>

using namespace std;

/*!
 *! Limpa o Buffer
 *  Funcao responsavel por limpar o buffer 
 * 	para o uso do getchar() para pausar o programa
 */
void limpaBuffer();

int main()
{
	int a = 0, b = 1, aux = 0, num;

	cout << "Este programa imprime uma sequencia fibonnacci, enquanto o numero da sequencia for menor do que o numero digitado pelo usuario" << endl;
	cout << "Escolha um numero inteiro positivo: ";
	cin >> num;

	/* Impressão da sequencia fibonacci */
	cout << b << " ";
	while ( (a + b) < num )
	{
		aux = a + b;
		a = b;
		b = aux;
		cout << aux << " ";
	}
	
	cout << "\n\nPressione qualquer tecla para sair...";
	
	limpaBuffer();
	getchar();
	return 0;
}

void limpaBuffer()
{
	char c;
	while( (c = getchar()) != '\n' && c != EOF );
}

/**** ===================================================================[ Fim main.cpp ]=================================================================== ****/