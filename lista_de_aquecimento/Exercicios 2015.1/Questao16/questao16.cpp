/*
 * Implemente uma função que receba uma string e um número inteiro n como parâmetros,
 * e retorne uma nova string com os n primeiros caracteres da string passada como
 * parâmetro. Por exemplo, recebendo como parâmetros a string “Gosto de programar
 * em C++” e o número 5, essa função deve alocar dinamicamente uma nova string
 * contendo a sequência de caracteres “Gosto”. Essa função deve obedecer o protótipo:
 * char * prefix ( const char * str, int n );
 * Obs.: Teste se n é sempre menor do que o tamanho da string (que pode ser recuperado
 * com a função strlen); se n for maior ou igual ao tamanho da string função deve
 * simplesmente retornar uma cópia da string original.
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <clocale>

using namespace std;

char * prefix ( const char * str, int n ); //protótipo da função.

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, ""); 
	
	/*** DECLARAÇÃO DE VARIÁVEIS ***/
	string name; //variável que vai receber a string digitada pelo usuário
	int n; 
	

	/*** ENTRADA DE DADOS***/
	cout << "Digite uma frase ";
	getline(cin, name); // recebe a frase do usuário.
	cout << "Digite o numero de elementos que deseja imprimir: ";
	cin >> n;

 	char fraseChar[name.size()]; //vetor de char que recebe como tamanho o total de elementos da string.

 	//preenche o vetor cada indice com os respectivos elementos da string.
 	for (int i = 0; i < name.size(); ++i)
 	{
 		fraseChar[i] = name.at(i);
 	}
 	fraseChar[ name.size() ] = '\0';

    cout << strlen(fraseChar);

 	cout << prefix(fraseChar, n) << endl;
	system("pause");
	return EXIT_SUCCESS;
}


//---------------------------------------------------------------------------------------------------------
//! Exibe um vetor de acordo com o numero de elementos n.
/*! Esta função recebe um vetor constante de char como parametro e o numero de elementos que queremos que a
 *  função nos retorne, se n for maior do que o numero de elementos do vetor passado como parametro, a função
 *  deve retornar o vetor inicial.
 *  @param str_ Um vetor constante de char.
 *  @param n_ Um numero inteiro que representa a quantidade de elementos que queremos exibir.
 */
char * prefix ( const char * str_, int n_ )
{
	if( n_ > strlen(str_)) // verifica se o parametro n_ é menor do que o vetor passado por parametro.
	{
		int elementos = strlen(str_); //recebe o numero de elementos do vetor str_
        char * newVector2 = new char[elementos]; // inicializa um vetor dinamico de char
	    
	    for (int i = 0; i < elementos; i++)
        {
        	// Passa os elementos do vetor str_ para o vetor newVector.
            newVector2[i] = str_[i];
        }
        newVector2[elementos] = '\0'; // determina o ultimo elemento do vetor

		return newVector2;
	}
	else
	{
		char * newVector = new char[n_];
		
		for (int i = 0; i < n_; ++i)
		{
			newVector[i] = str_[i];
		}
		newVector[strlen(newVector)] = '\0'; // determina o ultimo elemento do vetor

		return newVector;
	}
	
}
