//////////////////////////////////////////////////////////////////////////////////////////////////
//  Escreva um programa em C/C++ chamado compacta vet.cpp que le 20 inteiros, os                //
//  armazena em um arranjo unidimensional (vetor) C e o imprime na tela. A seguir, o            //
//  programa deve compactar o vetor C, retirando dele todos os valores nulos ou negativos       //
//  e imprimir o vetor modificado.                                                              //
//                                                                                              //
//  Comando para compilar: g++ -Wall -std=c++11 compacta_vet.cpp -o compacta_vet                //
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

/* Protótipo das funções */
void preencheVetor(int * _vetor, int _size);
void compactaVector(int * _vetor, int _size);
void imprimeVetor(int * _vetor, int _sizez);
void imprimeVetorCompactado(int * _vetor, int _size);

/* Definicao do tamanho do vetor */
#define SIZE 6

int main()
{
    /* vetor de inteiros que recebe os numeros do usuário */
    int mVector[SIZE]; 

    /* Entrada de dados */
    std::cout << "Digite " << SIZE << " numeros inteiros:" << std::endl;
    preencheVetor(mVector, SIZE);

    /* Imprime o vetor digitado pelo usuário */
    std::cout << std::endl << "Vetor original" << std::endl;
    imprimeVetor(mVector, SIZE);

    /* Compacta o vetor */
    compactaVector(mVector, SIZE);
    std::cout << std::endl << std::endl << "Vetor compactado" << std::endl;
    imprimeVetorCompactado(mVector, SIZE);
    std::cout << std::endl;

    return 0;
}

/*! Lê um vetor de inteiros. */
void preencheVetor(int * _vetor, int _size)
{
    for(auto i(0); i < _size; i++)
        std::cin >> _vetor[i];
}

/*! Imprime na tela um vetor de inteiros */
void imprimeVetor(int * _vetor, int _size)
{
    for(auto i(0); i < _size; i++)
        std::cout << _vetor[i] << " ";
}

/*! Imprime na tela um vetor de inteiros compactado */
void imprimeVetorCompactado(int * _vetor, int _size)
{
    for(auto i(0); i < _size; i++)
    {
        /* Só imprime se o elemento do vetor for diferente de zero */
        if ( _vetor[i] != 0)
            std::cout << _vetor[i] << " ";
    }
}

/*! Compacta um vetor de inteiros atribuido sempre o valor 0 a cada elemento que for menor ou igual a zero
 *  Fazendo com que ele não seja imprimido na ultima chamada do imprimeVetor
 */
void compactaVector(int * _vetor, int _size)
{
    /* Percore o vetor */
    for(auto i = 0; i < _size; i++)
    {
        /* Se o elemeto for menor ou igual a zero ele recebe o valor 0 */
        if ( _vetor[i] <= 0) 
            _vetor[ i ] = 0;
    }
}
