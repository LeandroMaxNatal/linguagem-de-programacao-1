#include <iostream>
#include <cmath>

/* Prototipo da funcao*/
int raizes (float _a, float _b, float _c, float * _x1, float * _x2);

int main()
{
    float a, b, c, x1, x2;

    /* Entrada de dados */
    std::cout << "Digite o valor de a: " << std::endl;  std::cin >> a;
    std::cout << "Digite o valor de b: " << std::endl;  std::cin >> b;
    std::cout << "Digite o valor de c: " << std::endl;  std::cin >> c;
    
    /* Exibicao do resultado*/
    std::cout << "\nNúmero de raizes: " << raizes( a, b, c, &x1, &x2) << std::endl;

    return 0;
}

//! Retorna o nuero de raizes de uma equação do 2º grau;
int raizes (float _a, float _b, float _c, float *_x1, float *_x2)
{
    float delta, aux;
    
    /* Calcula o discriminante */
    delta = _b * _b - 4 * _a * _b; 

    /* Se o delta for menor que zero */
    if (delta < 0) {
        _x1=0;
        _x2=0;
        return 0;
    }  else {
        if(delta == 0) {
            *_x1 =-_b/2*_a;
            *_x2=*_x1;
            return 1;
        } else {
            *_x1=(-_b +sqrt(delta))/(2*_a);
            *_x1=(-_b -sqrt(delta))/(2*_a);

            if( *_x1 > *_x2) {
                aux = *_x2;
                *_x2 = *_x1;
                *_x1 = aux;
            }
            return 2;
        }
    }
}