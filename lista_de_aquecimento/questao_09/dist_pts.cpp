#include <iostream>
#include <cmath>

/* Protótipo da função */
float calculaDistancia(float x1, float y1, float x2, float y2);

int main()
{
	/* Coordenadas dos pontos e variavel que armazenara a distancia euclidiana*/
	float x1, x2, y1, y2, distancia;

	/* Entrada dos dados */
	std::cout << "Digite a cordenada X1: ";
	std::cin >> x1;
	std::cout << "Digite a coordenada Y1: ";
	std::cin >> y1;
	std::cout << "Digite a cordenada X2: ";
	std::cin >> x2;
	std::cout << "Digite a coordenada Y2: ";
	std::cin >> y2;

	/* Seta a precisao das casas decimais */
	std::cout.precision(3);
	/* Calcula a distancia euclidiana entre os pontos */
	distancia = calculaDistancia(x1,y1,x2,y2);
	/* Exibe o resultado*/
	std::cout << "\nA distancia entre os dois pontos eh: " << distancia << std::endl;
	
	return 0;
}

float calculaDistancia(float x1_, float y1_, float x2_, float y2_)
{
	float a,b,c;
	a = (x2_*x2_) + (2*x2_*x1_) + (x1_*x1_);
	b = (y2_*y2_) + (2*y2_*y1_) + (y1_*y1_);
	c = a + b;
	return sqrt(c);
}