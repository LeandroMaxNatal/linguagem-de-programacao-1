/*
Escreva um programa em C/C++ chamado troca seguintes vet.cpp que lˆe 20 in-
teiros, os armazena em um arranjo unidimensional (vetor) B e o imprime na tela. A
seguir, o programa deve trocar o conte ́
udo dos elementos de B de ordem  ́ımpar com os
de ordem par imediatamente seguintes e imprimir o vetor modificado.
*/

#include <iostream>

#define SIZE 6
int main()
{
    int mVector[SIZE];
    int indiceComConteudoImpar;

    // preenche o vetor.
    for(size_t i(0); i < SIZE; ++i)
        std::cin >> mVector[i];

    // Troca os indices impares com o indice seguinte;
    for(size_t i(0); i < SIZE; ++i)
    {
        // Testa se o indice eh par
        if(vetor[i] % 2 != 0 )
            indiceComConteudoImpar = i;

            std::swap(mVector[i],mVector[i+1]);
    }

    // Imprime o vetor
    for(size_t i(0); i < SIZE; ++i)
    std::cout << mVector[i];

    return 0;
}
