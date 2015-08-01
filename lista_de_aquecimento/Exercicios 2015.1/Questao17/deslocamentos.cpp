/*
 *  Faça um programa chamado deslocamentos.cpp que recebe quatro números inteiros,
 *  n1, n2, n3 e n4, e um certo numero de deslocamentos, d, que esses números devem
 *  sofrer em relação a sequência original de entrada de dados. Se d=0 a sequência de saída
 *  é a mesma da entrada; se d>0 você deve deslocar os números para a ‘direita’ d vezes,
 *  imaginando que os números formam um círculo (i.e. após o n-ésimo termo segue-se o
 *  1º); se d<0 o deslocamento deve ser feito para a ‘esquerda’.
 *  Por exemplo, se a entrada for n1 = 5, n2 = −2, n3 = 7, n4 = 45 e d = 3 o resultado
 *  final seria (−2, 7, 45, 5), ou seja, os números foram deslocados para a direita três vezes:
 *  (5, −2, 7, 45) → (45, 5, −2, 7) → (7, 45, 5, −2) → (-2,7,45,5).
 *  Utilize uma função denominada ShiftN(n1,n2,n3,n4,d) que recebe os números como
 *  parâmetros por referência e aplica o deslocamento d sobre eles. Tente fazer esta função
 *  de forma mais otimizado possível, evitando deslocamentos desnecessários (dica: utilize
 *  o operador resto ou % em C++).
 */

#include <iostream>
#include <cstdlib>
#include <clocale>

using namespace std;



//Protótipo das funções
void Swap(int &n1_,int &n2_ );
void ShiftN(int v[],int &d);

int main()
{
    
    setlocale(LC_ALL,"");
    /*** DECLARAÇÃO DE VARIAVEIS ***/
    int v[4]={0};
    int d;
    
    /*** ENTRADA DE DADOS ***/
    for(int i = 0; i < 4; i++)
    {
        cout << "Digite o valor de n" << i+1 << ":" <<endl;
        cin >> v[i];
    }

    cout << "Entre com o deslocamento: " << endl;
    cin >> d;


    //Inicia função
    ShiftN(v,d);

    system("pause");
    return EXIT_SUCCESS;
}



//função swap
void Swap(int &n1_,int &n2_ ){
    int aux=0;
    aux = n1_;
    n1_ = n2_;
    n2_= aux;
}

//Função shiftN
void ShiftN(int v[],int &d){
    
    if( d > 0)
    {
        //desloca para direita
        for(int j = 0; j < d; j++)
        {
            Swap(v[2], v[3]);
            Swap(v[1], v[2]);
            Swap(v[0], v[1]);
        }
    } 
    else 
    {
        if( d < 0 )
        {
            d*=-1;
            //desloca para esquerda
            for( int j = 0 ; j < d ; j++)
            {
                Swap(v[0], v[1]);
                Swap(v[1], v[2]);
                Swap(v[2], v[3]);
            }
        }
    }

    //Saída de dados.
    for(int i=0;i<4;i++)
       cout << v[i] << " " << endl;

}