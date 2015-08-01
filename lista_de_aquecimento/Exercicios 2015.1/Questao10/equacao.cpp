#include <iostream>
#include <cstdlib>
#include <clocale>
#include <cmath>

using namespace std;


int roots (float a_, float b_, float c_, float *x1_, float *x2_); // protótipo da função roots.

int main()
{
    //Permite palavras acentuadas 
    setlocale(LC_ALL, "Portuguese");

    /*** Declaração de variáveis***/
    float a, b, c, x1, x2;

    /*** Entrada de dador ***/
    cout << "Digite o valor de a: " << endl;
    cin >> a;

    cout << "Digite o valor de b: " << endl;
    cin >> b;

    cout << "Digite o valor de c: " << endl;
    cin >> c;
    
    
    cout << "\nNúmero de raizes: " << roots( a, b, c, &x1, &x2) << endl; // Exibe o resultado.

    system("pause");
    return EXIT_SUCCESS;
}

//------------------------------------------------------------------------------
//! Calcula as raizes de uma equação do 2º grau;
/*! Esta função calcula as raizes de uma equação do 2º grau e retorna 0, 1 ou 2
 *  de acordo com o delta;
 *  @param a_ O coeficiente de a
 *  @param b_ O coeficiente de b
 *  @param c_ O coeficiente de c
 *  @param x1_ A primeira raiz da equação
 *  @param x2_ A segunda raiz da equação
 */
int roots (float a_, float b_, float c_, float *x1_, float *x2_)
{
    float delta, aux;
    
    delta = b_ * b_ - 4 * a_ * b_; // Calcula o discriminante.

    if(delta<0) // se o delta for menor que zero
    {
        x1_=0;
        x2_=0;
        return 0;
    }
    else
    {
        if(delta == 0)
        {
            *x1_ =-b_/2*a_;
            *x2_=*x1_;
            return 1;
        }
        else
        {
            *x1_=(-b_ +sqrt(delta))/(2*a_);
            *x1_=(-b_ -sqrt(delta))/(2*a_);

            if(*x1_>*x2_)
            {
                aux = *x2_;
                *x2_ = *x1_;
                *x1_ = aux;
            }
            return 2;
        }
    }
}