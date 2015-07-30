#include <iostream>
#include <vector>

#define SIZE 20

int main()
{
    int num, contador = 1;
    int mVetor[SIZE];

    // Preenche o vetor
    for(size_t i(0); i < SIZE; ++i)
    {
        std::cin >> num;
        mVetor[i] =  num;
    }

    for(size_t i(0); i < SIZE/2;++i)
    {
        std::swap(mVetor[i], mVetor[SIZE-contador]);
        contador++;
    }

    std::cout << "\nVetor Modificado: ";
    for(size_t i(0); i < SIZE; ++i)
        std::cout << mVetor[i] << " ";

    return 0;
}
