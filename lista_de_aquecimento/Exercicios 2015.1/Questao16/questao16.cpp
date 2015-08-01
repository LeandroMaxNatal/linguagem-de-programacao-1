/*
 * Implemente uma fun��o que receba uma string e um n�mero inteiro n como par�metros,
 * e retorne uma nova string com os n primeiros caracteres da string passada como
 * par�metro. Por exemplo, recebendo como par�metros a string �Gosto de programar
 * em C++� e o n�mero 5, essa fun��o deve alocar dinamicamente uma nova string
 * contendo a sequ�ncia de caracteres �Gosto�. Essa fun��o deve obedecer o prot�tipo:
 * char * prefix ( const char * str, int n );
 * Obs.: Teste se n � sempre menor do que o tamanho da string (que pode ser recuperado
 * com a fun��o strlen); se n for maior ou igual ao tamanho da string fun��o deve
 * simplesmente retornar uma c�pia da string original.
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <clocale>

using namespace std;

char * prefix ( const char * str, int n ); //prot�tipo da fun��o.

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, ""); 
	
	/*** DECLARA��O DE VARI�VEIS ***/
	string name; //vari�vel que vai receber a string digitada pelo usu�rio
	int n; 
	

	/*** ENTRADA DE DADOS***/
	cout << "Digite uma frase ";
	getline(cin, name); // recebe a frase do usu�rio.
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
/*! Esta fun��o recebe um vetor constante de char como parametro e o numero de elementos que queremos que a
 *  fun��o nos retorne, se n for maior do que o numero de elementos do vetor passado como parametro, a fun��o
 *  deve retornar o vetor inicial.
 *  @param str_ Um vetor constante de char.
 *  @param n_ Um numero inteiro que representa a quantidade de elementos que queremos exibir.
 */
char * prefix ( const char * str_, int n_ )
{
	if( n_ > strlen(str_)) // verifica se o parametro n_ � menor do que o vetor passado por parametro.
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
