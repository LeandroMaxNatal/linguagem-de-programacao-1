#include <iostream>
#include <stdio.h>
#include <iomanip>

int main()
{
	/*! Relacao dos intervalos
	 * 	Intervalo 'a' [0, 25)
	 *	Intervalo 'b' [25, 50)
	 *	Intervalo 'c' [50, 75)
	 * 	Intervalo 'd' [75, 100]
	 */

	int a = 0, b = 0, c = 0, d = 0;								// Cada letra corresponde a um intervalo
	float resultA, resultB, resultC, resultD;	// Guarda os resultados das porcentagens
	int num; 									// Vai receber os numeros digitados pelo usuario.
	int count = 0; 								// Contador de numeros digitados.

	std::cout << "\n\nDigite um numero entre 0 e 100, digite Ctrl + D para sair: ";
	while( std::cin >> num )
	{
		std::cout << "Digite um numero entre 0 e 100, digite Ctrl + D para sair: ";
		if( num >= 0 && num < 25 )			// Pertence ao intervalo 'a'
		{
			a++;
			count++;
		}
		else if ( num >= 25 && num < 50 )	// Pertence ao intervalo 'b'
		{
			b++;
			count++;
		}
		else if ( num >= 50 && num < 75 ) 	// Pertence ao intervalo 'c'
		{
			c++;
			count++;
		}
		else if ( num >=75 && num <= 100 ) 	// Pertence ao intervalo 'd'
		{
			d++;
			count++;
		}
	}

	resultA = ((float)(a*100))/count;
	resultB = ((float)(b*100))/count;
	resultC = ((float)(c*100))/count;
	resultD = ((float)(d*100))/count;

	std::setprecision(4);
	std::cout << "\n>>>Resultado." << std::endl;
	printf("A porcentagem de numeros pentencentes ao intervalo [0, 25) eh:.... %.2f%c\n", resultA, 37);
	printf("A porcentagem de numeros pentencentes ao intervalo [25, 50) eh:... %.2f%c\n", resultB, 37);
	printf("A porcentagem de numeros pentencentes ao intervalo [50, 75) eh:... %.2f%c\n", resultC, 37);
	printf("A porcentagem de numeros pentencentes ao intervalo [75, 100] eh:.. %.2f%c\n", resultD, 37);
	printf("\n\nPressione qualquer tecla para sair...");
	getchar();
	return 0;
}
