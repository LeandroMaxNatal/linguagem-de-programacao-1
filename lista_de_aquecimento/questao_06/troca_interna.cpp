//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Escreva um programa em C/C++ chamado troca interna.cpp que le 20 inteiros, os armazena em um arranjo unidimensional (vetor) A    //
// e o imprime na tela. A seguir, o programa deve trocar o conteudo do ultimo elemento de A com o primeiro, penultimo com o 2 ,     //
// do ante-penultimo com o 3 e assim pode diante at que todos os elementos tenham sido trocados de lugar apenas uma vez.            //
//Por fim, o programa deve imprimir o vetor modificado.                                                                             //
//                                                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

int main()
{
    /*! Vetor para guardar os numeros digitados pelo usuario */        
    int mVetor[20];
    /*! Guarda o tamanho do vetor */
    int sz = 20;
    /*! Guarda o tamanho do vetor */
    int tempSz = sz;
    /*! Variavel usada como auxiliar na entrada de dados */
    int num;

    /* Preenche o vetor com valores determinados pelo usuario */
    for(size_t i(0); i < sz; ++i)
    {
        std::cin >> num;
        mVetor[i] =  num;
    }

    /* Troca os elementos de posicao */
    for(size_t i(0); i < tempSz ;++i, --tempSz)
        std::swap(mVetor[i], mVetor[tempSz - 1]);

    /*! Exibe o vetor modificado */
    std::cout << "\nVetor Modificado: ";
    for(size_t i(0); i < sz; ++i)
        std::cout << mVetor[i] << " ";

    std::cout << std::endl;

    return 0;
}
