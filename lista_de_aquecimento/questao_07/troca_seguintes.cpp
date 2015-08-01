//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Escreva um programa em C/C++ chamado troca seguintes vet.cpp que le 20 inteiros, os armazena em um arranjo unidimensional (vetor) B             //
//  e o imprime na tela. A seguir, o programa deve trocar o conteudo dos elementos de B de ordem impar com os de ordem par imediatamente            //
//  seguintes e imprimir o vetor modificado.                                                                                                        //
//                                                                                                                                                  //
//  comando para compila: g++ -Wall -o troca_seguintes troca_seguintes.cpp                                                                          //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

/*! Definicao do tamanho do vetor */
#define SIZE 20

int main()
{
    /*! Vetor que armazena os numeros digitados pelo o usuário*/
    int mVector[SIZE];
    /*! Variavel auxiliar para ajudar a fazer o swap */
    int aux;

    /*! Entrada de dados */
    for(size_t i(0); i < SIZE; ++i)
        std::cin >> mVector[i];

    /*! Troca os indices impares com o indice seguinte */
    for(size_t i(0); i < SIZE; i+=2)
    {
        /*! troca dos elementos */
        aux             = mVector[i];
        mVector[i]      = mVector[i + 1];
        mVector[i + 1]  = aux;
    }

    /*! Imprime o vetor */
    for(size_t i(0); i < SIZE; ++i)
        std::cout << mVector[i] << " ";

    /*! Pula uma linha*/
    std::cout << std::endl;

    return 0;
}
