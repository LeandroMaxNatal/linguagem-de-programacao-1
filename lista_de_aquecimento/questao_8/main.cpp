#include <iostream>

#include<vector>

#define SIZE 6

int main()
{
    std::vector<int> mVector;
    int num;

    // Entrada de dados
    for(size_t i(0); i < 6; i++)
    {
        std::cin >> num;
        mVector.push_back(num);
    }

    //Imprime o vetor
    for(size_t i(0); i < mVector.size(); ++i)
        std::cout << mVector.at(i) << " ";


    return 0;
}
