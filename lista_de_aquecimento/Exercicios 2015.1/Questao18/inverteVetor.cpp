#include <iostream>
#include <cstdlib>
#include <clocale>

using namespace std;

//Prot�tipo da fun��o.
void inverteVetor(int* myVet_,int &tam_);

int main()
{
    setlocale(LC_ALL,"");
    
    //DECLARA��O DAS VARIAVEIS
    int tam;
    int *v = NULL;

    //ENTRADA DE DADOS.
    cout << "Digite o tamanho do vetor: " << endl;
    cin >> tam;

    v = new int[tam];

    //Inser�o de valores no vetor
    for( int i = 0; i < tam; i++ )
    {
        cout << "Digite o valor da " << i+1 << "� posi��o do vetor" << endl;
        cin >> v[i];
    }

    //Chama a fun��o inverteVetor.
    inverteVetor(v,tam);

    //impress�o na tela.
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

    //percorre o vetor at� a metade invertendo os seus valores.
    for( int i = 0; i < ( tam_ / 2 ); i++, myVet_++, p-- )
    {
        aux = *(myVet_);
        *(myVet_)= *(p);
        *(p)= aux;
    }
}