/*
 * Escreva um programa em C++ chamado vet5.cpp que recebe um conjunto de 30
 * valores inteiros e os coloca em 2 vetores, A e B, conforme forem pares ou ímpares. Os
 * vetores A e B dever~ao ter 5 posições de armazenamento. Quando um dos dois vetores
 * fica cheio, o programa deve imprimi-lo. Terminada a entrada de dados, o programa 
 * deve imprimir o conteúdo dos dois vetores. Note que cada vetor pode ser preenchido
 * tantas vezes quantas forem necessárias.
 */

#include <iostream>
#include <cstdlib>

using namespace std;

/*** PROTÓTIPO DAS FUNÇÕES ***/
void printVector(int vetor[]);
void separete(int vetorA[], int vetorB[]);

int main()
{
	int vetA[ 5 ];
 	int vetB[ 5 ];

 	separete(vetA, vetB);

 	system("pause");
 	return EXIT_SUCCESS;
}

//--------------------------------------------------------------------------------------
//! Imprime um vetor de inteiros.
/*! Esta função recebe um vetor de inteiros como parametros e imprime os seus elementos
 *  @param V_ Um vetor de inteiros.
 */
void printVector(int V_[])
{
	for (int i = 0; i <= 4; i++)
	{
		cout << V_[ i ]<< " ";
	}
	cout << endl;
}

//--------------------------------------------------------------------------------------
//! Separa os impares dos pares em dois vetores diferentes e os imprime.
/*! Esta função recebe dois vetores de inteiros como parametros e separa os impares em 
 *  um vetor e os pares em outro vetor e imprime cada um dos vetores assim que cada um 
 *  atingir 5 elementos.
 *  @param vetA_ Um vetor de inteiros que armazenará os pares.
 *  @param vetB_ Um vetor de inteiros que armazenará os impares.
 */
void separete(int vetA_[], int vetB_[])
{
	int count = 30;
	int x = 0;
	int y = 0;
	int num;

	for (int i = 0; i < count; ++i)
	{
		cout << "Digite o numero "<< i+1 <<": ";
		cin >> num;
		if(num%2 ==0) // testa se é par
		{	
			vetA_[ x ] = num;
			x++;
			if( x==5 )
			{
				printVector( vetA_ );
				x=0;
			}
		} 
		else // se for impar entra no else.
		{
			vetB_[ y ] = num;
			y++;
			if( y==5 )
			{
				printVector( vetB_ );
				y = 0;
			}
		}
	}
}