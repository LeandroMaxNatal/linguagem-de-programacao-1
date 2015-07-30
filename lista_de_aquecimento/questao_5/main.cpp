/*!
    Escreva um programa em C/C++ chamado menor elemento.cpp que le 20 numeros
    reais, os armazena em um arranjo unidimensional (vetor) Vet e o imprime na tela.
    A seguir, o programa deve encontrar o menor elemento e a sua posicao no vetor Vet e
    escrever na saida padrao qual eh o menor elemento e que posicao ele ocupa no vetor.
*/

#include <iostream>
#include <vector>

int main()
{
    // Recebe o numero digitado pelo usuario.
    float num;
    // Guarda o menor elemento do vetor
    float menor;
    // Guarda a posicao do menor elemento no vetor e eh iniciado como sendo o primeiro elemento.
    int posicaoNoVetor = 1;
    // Vetor de reais
    std::vector<float> mVector;

    // Preenche o vetor com os numeros digitados pelo usuario
    for(std::size_t i = 0; i < 20; ++i)
    {
        std::cin >> num;
        mVector.push_back(num);
    }

    // Atualiza o menor como sendo o primeiro elemento do vetor.
    menor = mVector.at(0);

    // Percorre a partir do segundo elemento do vetor.
    for(std::size_t i = 1; i < mVector.size(); ++i)
    {
        if(mVector.at(i) < mVector.at(i-1))
        {
            menor = mVector.at(i);
            posicaoNoVetor = i+1;
        }
    }

    // Exibe o resultado
    std::cout << "\nO menor elemento do vetor eh: " << menor << std::endl;
    std::cout << "A sua posicao no vetor eh: " << posicaoNoVetor << std::endl;
    return 0;
}
