#include <iostream>
#include <cstdlib>
#include <clocale>

using namespace std;

//Protótipo da função.
void inverteVetor(int* myVet_,int &tam_);

int main()
{
    setlocale(LC_ALL,"");
    
    //DECLARAÇÂO DAS VARIAVEIS
    int tam;
    int *v = NULL;

    //ENTRADA DE DADOS.
    cout << "Digite o tamanho do vetor: " << endl;
    cin >> tam;

    v = new int[tam];

    //Inserão de valores no vetor
    for( int i = 0; i < tam; i++ )
    {
        cout << "Digite o valor da " << i+1 << "º posição do vetor" << endl;
        cin >> v[i];
    }

    //Chama a função inverteVetor.
    inverteVetor(v,tam);

    //impressão na tela.
    for(int i=0;i<tam;i++ )
    {
        cout << v[i] << " ";
    }

    system("pause");
    return EXIT_SUCCESS;
}

void inverteVetor(int* myVet_,int &tam_)
{
    int *p = myVet_;
    int aux=0;
    p+=tam_-1;

    //percorre o vetor até a metade invertendo os seus valores.
    for( int i = 0; i < ( tam_ / 2 ); i++, myVet_++, p-- )
    {
        aux = *(myVet_);
        *(myVet_)= *(p);
        *(p)= aux;
    }
}